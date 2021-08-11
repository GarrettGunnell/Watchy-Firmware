#include "Watchy.h"

DS3232RTC Watchy::RTC(false); 
GxEPD2_BW<GxEPD2_154_D67, GxEPD2_154_D67::HEIGHT> Watchy::display(GxEPD2_154_D67(CS, DC, RESET, BUSY));

RTC_DATA_ATTR int guiState;
RTC_DATA_ATTR int menuIndex;
RTC_DATA_ATTR bool WIFI_CONFIGURED;
RTC_DATA_ATTR bool BLE_CONFIGURED;
RTC_DATA_ATTR weatherData currentWeather;
RTC_DATA_ATTR int weatherIntervalCounter = WEATHER_UPDATE_INTERVAL;

String getValue(String data, char separator, int index)
{
  int found = 0;
  int strIndex[] = {0, -1};
  int maxIndex = data.length()-1;

  for(int i=0; i<=maxIndex && found<=index; i++){
    if(data.charAt(i)==separator || i==maxIndex){
        found++;
        strIndex[0] = strIndex[1]+1;
        strIndex[1] = (i == maxIndex) ? i+1 : i;
    }
  }

  return found>index ? data.substring(strIndex[0], strIndex[1]) : "";
}

Watchy::Watchy(){} //constructor

void Watchy::init(String datetime){
    esp_sleep_wakeup_cause_t wakeup_reason;
    wakeup_reason = esp_sleep_get_wakeup_cause(); //get wake up reason
    Wire.begin(SDA, SCL); //init i2c

    switch (wakeup_reason)
    {
        #ifdef ESP_RTC
        case ESP_SLEEP_WAKEUP_TIMER: //ESP Internal RTC
            if(guiState == WATCHFACE_STATE){
                RTC.read(currentTime);
                currentTime.Minute++;
                tmElements_t tm;
                tm.Month = currentTime.Month;
                tm.Day = currentTime.Day;
                tm.Year = currentTime.Year;
                tm.Hour = currentTime.Hour;
                tm.Minute = currentTime.Minute;
                tm.Second = 0;
                time_t t = makeTime(tm);
                RTC.set(t);
                RTC.read(currentTime);           
                showWatchFace(true); //partial updates on tick
            }
            break;        
        #endif
        case ESP_SLEEP_WAKEUP_EXT0: //RTC Alarm
            RTC.alarm(ALARM_2); //resets the alarm flag in the RTC
            if(guiState == WATCHFACE_STATE){
                RTC.read(currentTime);
                showWatchFace(true); //partial updates on tick
            }
            break;
        case ESP_SLEEP_WAKEUP_EXT1: //button Press
            handleButtonPress();
            break;
        default: //reset
            #ifndef ESP_RTC
            _rtcConfig(datetime);
            #endif
            showWatchFace(false); //full update on reset
            break;
    }
    deepSleep();
}

void Watchy::deepSleep(){
  #ifndef ESP_RTC
  esp_sleep_enable_ext0_wakeup(RTC_PIN, 0); //enable deep sleep wake on RTC interrupt
  #endif  
  #ifdef ESP_RTC
  esp_sleep_enable_timer_wakeup(60000000);
  #endif 
  esp_sleep_enable_ext1_wakeup(BTN_PIN_MASK, ESP_EXT1_WAKEUP_ANY_HIGH); //enable deep sleep wake on button press
  esp_deep_sleep_start();
}

void Watchy::_rtcConfig(String datetime){
    if(datetime != NULL){
        const time_t FUDGE(30);//fudge factor to allow for upload time, etc. (seconds, YMMV)
        tmElements_t tm;
        tm.Year = getValue(datetime, ':', 0).toInt() - YEAR_OFFSET;//offset from 1970, since year is stored in uint8_t        
        tm.Month = getValue(datetime, ':', 1).toInt();
        tm.Day = getValue(datetime, ':', 2).toInt();
        tm.Hour = getValue(datetime, ':', 3).toInt();
        tm.Minute = getValue(datetime, ':', 4).toInt();
        tm.Second = getValue(datetime, ':', 5).toInt();

        time_t t = makeTime(tm) + FUDGE;
        RTC.set(t);

    }
    //https://github.com/JChristensen/DS3232RTC
    RTC.squareWave(SQWAVE_NONE); //disable square wave output
    //RTC.set(compileTime()); //set RTC time to compile time
    RTC.setAlarm(ALM2_EVERY_MINUTE, 0, 0, 0, 0); //alarm wakes up Watchy every minute
    RTC.alarmInterrupt(ALARM_2, true); //enable alarm interrupt
    RTC.read(currentTime);
}

void Watchy::handleButtonPress(){
  uint64_t wakeupBit = esp_sleep_get_ext1_wakeup_status();
  //Menu Button
  if (wakeupBit & MENU_BTN_MASK){
    if(guiState == WATCHFACE_STATE){//enter menu state if coming from watch face
      showMenu(menuIndex, false);
    }else if(guiState == MAIN_MENU_STATE){//if already in menu, then select menu item
      switch(menuIndex)
      {
        case 0:
          showBattery();
          break;
        case 1:
          showBuzz();
          break;          
        case 2:
          showAccelerometer();
          break;
        case 3:
          setTime();
          break;
        case 4:
          break;                    
        case 5:
          break;
        default:
          break;                              
      }
    }
  }
  //Back Button
  else if (wakeupBit & BACK_BTN_MASK){
    if(guiState == MAIN_MENU_STATE){//exit to watch face if already in menu
      RTC.alarm(ALARM_2); //resets the alarm flag in the RTC
      RTC.read(currentTime);
      showWatchFace(false);
    }else if(guiState == APP_STATE){
      showMenu(menuIndex, false);//exit to menu if already in app
    }else if(guiState == FW_UPDATE_STATE){
      showMenu(menuIndex, false);//exit to menu if already in app
    }
  }
  //Up Button
  else if (wakeupBit & UP_BTN_MASK){
    if(guiState == MAIN_MENU_STATE){//increment menu index
      menuIndex--;
      if(menuIndex < 0){
        menuIndex = MENU_LENGTH - 1;
      }    
      showMenu(menuIndex, true);
    }
  }
  //Down Button
  else if (wakeupBit & DOWN_BTN_MASK){
    if(guiState == MAIN_MENU_STATE){//decrement menu index
      menuIndex++;
      if(menuIndex > MENU_LENGTH - 1){
        menuIndex = 0;
      }
      showMenu(menuIndex, true);
    }
  }
  
  /***************** fast menu *****************/
  bool timeout = false;
  long lastTimeout = millis();
  pinMode(MENU_BTN_PIN, INPUT);
  pinMode(BACK_BTN_PIN, INPUT);
  pinMode(UP_BTN_PIN, INPUT);
  pinMode(DOWN_BTN_PIN, INPUT);
  while(!timeout){
      if(millis() - lastTimeout > 5000){
          timeout = true;
      }else{
          if(digitalRead(MENU_BTN_PIN) == 1){
            lastTimeout = millis();  
            if(guiState == MAIN_MENU_STATE){//if already in menu, then select menu item
                switch(menuIndex)
                {
                    case 0:
                    showBattery();
                    break;
                    case 1:
                    showBuzz();
                    break;          
                    case 2:
                    showAccelerometer();
                    break;
                    case 3:
                    setTime();
                    break;
                    case 4:
                    break;                    
                    case 5:
                    break;
                    default:
                    break;                              
                }
            }
          }else if(digitalRead(BACK_BTN_PIN) == 1){
            lastTimeout = millis();
            if(guiState == MAIN_MENU_STATE){//exit to watch face if already in menu
            RTC.alarm(ALARM_2); //resets the alarm flag in the RTC
            RTC.read(currentTime);
            showWatchFace(false);
            break; //leave loop
            }else if(guiState == APP_STATE){
            showMenu(menuIndex, false);//exit to menu if already in app
            }else if(guiState == FW_UPDATE_STATE){
            showMenu(menuIndex, false);//exit to menu if already in app
            }            
          }else if(digitalRead(UP_BTN_PIN) == 1){
            lastTimeout = millis();
            if(guiState == MAIN_MENU_STATE){//increment menu index
            menuIndex--;
            if(menuIndex < 0){
                menuIndex = MENU_LENGTH - 1;
            }    
            showFastMenu(menuIndex);
            }            
          }else if(digitalRead(DOWN_BTN_PIN) == 1){
            lastTimeout = millis();
            if(guiState == MAIN_MENU_STATE){//decrement menu index
            menuIndex++;
            if(menuIndex > MENU_LENGTH - 1){
                menuIndex = 0;
            }
            showFastMenu(menuIndex);
            }         
          }
      }
  }
  display.hibernate();    
}

void Watchy::showMenu(byte menuIndex, bool partialRefresh){
    display.init(0, false); //_initial_refresh to false to prevent full update on init
    display.setFullWindow();
    display.fillScreen(GxEPD_BLACK);
    display.setFont(&FreeMonoBold9pt7b);

    int16_t  x1, y1;
    uint16_t w, h;
    int16_t yPos;

    const char *menuItems[] = {"Check Battery", "Vibrate Motor", "Show Accelerometer", "Set Time", "Setup WiFi", "Update Firmware"};
    for(int i=0; i<MENU_LENGTH; i++){
    yPos = 30+(MENU_HEIGHT*i);
    display.setCursor(0, yPos);
    if(i == menuIndex){
        display.getTextBounds(menuItems[i], 0, yPos, &x1, &y1, &w, &h);
        display.fillRect(x1-1, y1-10, 200, h+15, GxEPD_WHITE);
        display.setTextColor(GxEPD_BLACK);
        display.println(menuItems[i]);      
    }else{
        display.setTextColor(GxEPD_WHITE);
        display.println(menuItems[i]);
    }   
    }

    display.display(partialRefresh);
    //display.hibernate();

    guiState = MAIN_MENU_STATE;    
}

void Watchy::showFastMenu(byte menuIndex){
    display.setFullWindow();
    display.fillScreen(GxEPD_BLACK);
    display.setFont(&FreeMonoBold9pt7b);

    int16_t  x1, y1;
    uint16_t w, h;
    int16_t yPos;

    const char *menuItems[] = {"Check Battery", "Vibrate Motor", "Show Accelerometer", "Set Time", "Setup WiFi", "Update Firmware"};
    for(int i=0; i<MENU_LENGTH; i++){
    yPos = 30+(MENU_HEIGHT*i);
    display.setCursor(0, yPos);
    if(i == menuIndex){
        display.getTextBounds(menuItems[i], 0, yPos, &x1, &y1, &w, &h);
        display.fillRect(x1-1, y1-10, 200, h+15, GxEPD_WHITE);
        display.setTextColor(GxEPD_BLACK);
        display.println(menuItems[i]);      
    }else{
        display.setTextColor(GxEPD_WHITE);
        display.println(menuItems[i]);
    }   
    }

    display.display(true);

    guiState = MAIN_MENU_STATE;    
}

void Watchy::showBattery(){
    display.init(0, false); //_initial_refresh to false to prevent full update on init
    display.setFullWindow();
    display.fillScreen(GxEPD_BLACK);
    display.setFont(&FreeMonoBold9pt7b);
    display.setTextColor(GxEPD_WHITE);
    display.setCursor(20, 30);
    display.println("Battery Voltage:");
    float voltage = getBatteryVoltage();
    display.setCursor(70, 80);
    display.print(voltage);
    display.println("V");
    display.display(false); //full refresh
    display.hibernate();

    guiState = APP_STATE;      
}

void Watchy::showBuzz(){
    display.init(0, false); //_initial_refresh to false to prevent full update on init
    display.setFullWindow();
    display.fillScreen(GxEPD_BLACK);
    display.setFont(&FreeMonoBold9pt7b);
    display.setTextColor(GxEPD_WHITE);
    display.setCursor(70, 80);
    display.println("Buzz!");
    display.display(false); //full refresh
    display.hibernate();
    vibMotor();
    showMenu(menuIndex, false);    
}

void Watchy::vibMotor(uint8_t intervalMs, uint8_t length){
    pinMode(VIB_MOTOR_PIN, OUTPUT);
    bool motorOn = false;
    for(int i=0; i<length; i++){
        motorOn = !motorOn;
        digitalWrite(VIB_MOTOR_PIN, motorOn);
        delay(intervalMs);
    }
}

void Watchy::setTime(){

    guiState = APP_STATE;

    RTC.read(currentTime);

    int8_t minute = currentTime.Minute;
    int8_t hour = currentTime.Hour;
    int8_t day = currentTime.Day;
    int8_t month = currentTime.Month;
    int8_t year = currentTime.Year + YEAR_OFFSET - 2000;

    int8_t setIndex = SET_HOUR;

    int8_t blink = 0;

    pinMode(DOWN_BTN_PIN, INPUT);
    pinMode(UP_BTN_PIN, INPUT);
    pinMode(MENU_BTN_PIN, INPUT);  
    pinMode(BACK_BTN_PIN, INPUT);  

    display.init(0, true); //_initial_refresh to false to prevent full update on init
    display.setFullWindow();

    while(1){

    if(digitalRead(MENU_BTN_PIN) == 1){
        setIndex++;
        if(setIndex > SET_DAY){
        break;
        }
    }
    if(digitalRead(BACK_BTN_PIN) == 1){
        if(setIndex != SET_HOUR){
        setIndex--;
        }
    }      

    blink = 1 - blink;

    if(digitalRead(DOWN_BTN_PIN) == 1){
        blink = 1;
        switch(setIndex){
        case SET_HOUR:
            hour == 23 ? (hour = 0) : hour++;
            break;
        case SET_MINUTE:
            minute == 59 ? (minute = 0) : minute++;
            break;
        case SET_YEAR:
            year == 99 ? (year = 20) : year++;
            break;
        case SET_MONTH:
            month == 12 ? (month = 1) : month++;
            break;
        case SET_DAY:
            day == 31 ? (day = 1) : day++;
            break;                         
        default:
            break;
        }      
    }

    if(digitalRead(UP_BTN_PIN) == 1){
        blink = 1;
        switch(setIndex){
        case SET_HOUR:
            hour == 0 ? (hour = 23) : hour--;
            break;
        case SET_MINUTE:
            minute == 0 ? (minute = 59) : minute--;
            break;
        case SET_YEAR:
            year == 20 ? (year = 99) : year--;
            break;
        case SET_MONTH:
            month == 1 ? (month = 12) : month--;
            break;
        case SET_DAY:
            day == 1 ? (day = 31) : day--;
            break;          
        default:
            break;
        }   
    }    

    display.fillScreen(GxEPD_BLACK);
    display.setTextColor(GxEPD_WHITE);

    display.setCursor(5, 80);
    if(setIndex == SET_HOUR){//blink hour digits
        display.setTextColor(blink ? GxEPD_WHITE : GxEPD_BLACK);
    }
    if(hour < 10){
        display.print("0");      
    }
    display.print(hour);

    display.setTextColor(GxEPD_WHITE);
    display.print(":");

    display.setCursor(108, 80);
    if(setIndex == SET_MINUTE){//blink minute digits
        display.setTextColor(blink ? GxEPD_WHITE : GxEPD_BLACK);
    }
    if(minute < 10){
        display.print("0");      
    }
    display.print(minute);

    display.setTextColor(GxEPD_WHITE);

    display.setFont(&FreeMonoBold9pt7b);
    display.setCursor(45, 150);
    if(setIndex == SET_YEAR){//blink minute digits
        display.setTextColor(blink ? GxEPD_WHITE : GxEPD_BLACK);
    }    
    display.print(2000+year);

    display.setTextColor(GxEPD_WHITE);
    display.print("/");

    if(setIndex == SET_MONTH){//blink minute digits
        display.setTextColor(blink ? GxEPD_WHITE : GxEPD_BLACK);
    }   
    if(month < 10){
        display.print("0");      
    }     
    display.print(month);

    display.setTextColor(GxEPD_WHITE);
    display.print("/");

    if(setIndex == SET_DAY){//blink minute digits
        display.setTextColor(blink ? GxEPD_WHITE : GxEPD_BLACK);
    }       
    if(day < 10){
        display.print("0");      
    }     
    display.print(day); 
    display.display(true); //partial refresh
    }

    display.hibernate();

    const time_t FUDGE(10);//fudge factor to allow for upload time, etc. (seconds, YMMV)
    tmElements_t tm;
    tm.Month = month;
    tm.Day = day;
    tm.Year = year + 2000 - YEAR_OFFSET;//offset from 1970, since year is stored in uint8_t
    tm.Hour = hour;
    tm.Minute = minute;
    tm.Second = 0;

    time_t t = makeTime(tm) + FUDGE;
    RTC.set(t);

    showMenu(menuIndex, false);

}

void Watchy::showAccelerometer(){
    display.init(0, true); //_initial_refresh to false to prevent full update on init
    display.setFullWindow();
    display.fillScreen(GxEPD_BLACK);
    display.setFont(&FreeMonoBold9pt7b);
    display.setTextColor(GxEPD_WHITE);

    showMenu(menuIndex, false);
}

void Watchy::showWatchFace(bool partialRefresh){
  display.init(0, false); //_initial_refresh to false to prevent full update on init
  display.setFullWindow();
  drawWatchFace();
  display.display(partialRefresh); //partial refresh
  display.hibernate();
  guiState = WATCHFACE_STATE;
}

void Watchy::drawWatchFace(){}

float Watchy::getBatteryVoltage(){
    return analogRead(ADC_PIN) / 4096.0 * 7.23;
}

uint16_t Watchy::_readRegister(uint8_t address, uint8_t reg, uint8_t *data, uint16_t len)
{
    Wire.beginTransmission(address);
    Wire.write(reg);
    Wire.endTransmission();
    Wire.requestFrom((uint8_t)address, (uint8_t)len);
    uint8_t i = 0;
    while (Wire.available()) {
        data[i++] = Wire.read();
    }
    return 0;
}

uint16_t Watchy::_writeRegister(uint8_t address, uint8_t reg, uint8_t *data, uint16_t len)
{
    Wire.beginTransmission(address);
    Wire.write(reg);
    Wire.write(data, len);
    return (0 !=  Wire.endTransmission());
}

// time_t compileTime()
// {   
//     const time_t FUDGE(10);    //fudge factor to allow for upload time, etc. (seconds, YMMV)
//     const char *compDate = __DATE__, *compTime = __TIME__, *months = "JanFebMarAprMayJunJulAugSepOctNovDec";
//     char compMon[3], *m;

//     strncpy(compMon, compDate, 3);
//     compMon[3] = '\0';
//     m = strstr(months, compMon);

//     tmElements_t tm;
//     tm.Month = ((m - months) / 3 + 1);
//     tm.Day = atoi(compDate + 4);
//     tm.Year = atoi(compDate + 7) - YEAR_OFFSET; // offset from 1970, since year is stored in uint8_t
//     tm.Hour = atoi(compTime);
//     tm.Minute = atoi(compTime + 3);
//     tm.Second = atoi(compTime + 6);

//     time_t t = makeTime(tm);
//     return t + FUDGE;        //add fudge factor to allow for compile time
// }