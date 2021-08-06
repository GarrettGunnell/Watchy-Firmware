#include "AcerolaWatch.h"

AcerolaWatch::AcerolaWatch(){}

void AcerolaWatch::drawWatchFace() {
  switch(currentTime.Day) {
    case 1:
      watchFace1();
      break;
  }

  watchFace2();
}

void AcerolaWatch::watchFace1() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface1_bg, 200, 200, GxEPD_WHITE);

  display.setTextColor(GxEPD_BLACK);
  display.setFont(&CC_YadaYadaYada18pt7b);
  display.setCursor(60, 40);

  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 0;
  display.print((hour < 10) ? "0" : "");
  display.print(hour);
  display.print(":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.println(currentTime.Minute);

  display.setFont(&CC_YadaYadaYada9pt7b);
  display.setCursor(105, 60);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(currentTime.Month);
  display.print("/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::watchFace2() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface2_bg, 200, 200, GxEPD_WHITE);
  
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&CC_YadaYadaYada18pt7b);
  display.setCursor(20, 60);

  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 0;
  display.print((hour < 10) ? "0" : "");
  display.print(hour);

  display.setCursor(23, 94);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&CC_YadaYadaYada9pt7b);
  display.setCursor(5, 190);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(currentTime.Month);
  display.print("/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}
