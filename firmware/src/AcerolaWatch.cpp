#include "AcerolaWatch.h"

AcerolaWatch::AcerolaWatch(){}

void AcerolaWatch::drawWatchFace() {
  Face133();
}

void AcerolaWatch::Face1() {
  display.fillScreen(GxEPD_WHITE);
  display.drawBitmap(0, 0, watchface1_bg, 200, 200, GxEPD_BLACK);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&CC_YadaYadaYada18pt7b);
  display.setCursor(60, 40);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.println(currentTime.Minute);
  display.setFont(&CC_YadaYadaYada9pt7b);
  display.setCursor(105, 60);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face2() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface2_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&CC_YadaYadaYada18pt7b);
  display.setCursor(20, 60);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(hour);
  display.setCursor(27, 94);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&CC_YadaYadaYada9pt7b);
  display.setCursor(5, 190);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face3() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface3_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&CC_YadaYadaYada18pt7b);
  display.setCursor(0, 40);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&CC_YadaYadaYada9pt7b);
  display.setCursor(0, 65);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face4() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface4_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(80, 80);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(hour);
  display.setCursor(80, 105);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face5() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface5_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&CC_YadaYadaYada18pt7b);
  display.setCursor(1, 40);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&CC_YadaYadaYada9pt7b);
  display.setCursor(1, 60);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face6() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface6_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&CC_YadaYadaYada9pt7b);
  display.setCursor(30, 38);
  display.print("PUNPUN WAS...");
  display.setCursor(15, 166);
  display.setFont(&CC_YadaYadaYada6pt7b);
  display.print("JUST FINE AGAIN TODAY.");

  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(61, 112);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face7() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface7_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(30, 120);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(65, 143);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}


void AcerolaWatch::Face8() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface8_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(30, 120);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(65, 143);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face9() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface9_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(1, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(10, 50);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face10() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface10_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(1, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(10, 50);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face11() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface11_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(1, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(10, 50);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face12() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface12_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo18pt7b);
  display.setCursor(0, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(10, 50);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face13() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface13_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(0, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(10, 50);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face14() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface14_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo18pt7b);
  display.setCursor(80, 190);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face15() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface15_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(70, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(110, 50);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face16() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface16_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(70, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(110, 50);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face17() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface17_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(10, 40);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(10, 70);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(120, 20);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face18() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface18_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(12, 41);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(12, 71);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(122, 21);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);

  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(10, 40);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(10, 70);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(120, 20);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face19() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface19_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(12, 41);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(12, 71);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(127, 19);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);

  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(10, 40);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(10, 70);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(125, 18);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face20() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface20_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(140, 40);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(140, 70);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(125, 182);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face21() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface21_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo18pt7b);
  display.setCursor(0, 40);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(148, 40);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face22() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface22_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(140, 60);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(140, 90);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(125, 18);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face23() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface23_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(110, 64);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(140, 99);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(125, 18);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face24() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface24_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&BAR20pt7b);
  display.setCursor(9, 38);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  
  display.setFont(&BAR10pt7b);
  display.setCursor(5, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face25() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface25_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo18pt7b);
  display.setCursor(0, 150);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(150, 150);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face26() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface26_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(137, 79);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(137, 113);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(127, 19);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);

  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(135, 78);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(135, 112);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(125, 18);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face27() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface27_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(30, 36);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(30, 56);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face28() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface28_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Lumber_Regular20pt7b);
  display.setCursor(40, 70);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Lumber_Regular10pt7b);
  display.setCursor(65, 40);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face29() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface29_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Lumber_Regular20pt7b);
  display.setCursor(3, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Lumber_Regular10pt7b);
  display.setCursor(136, 17);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face30() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface30_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(125, 78);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(140, 112);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(125, 18);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face31() {
  display.fillScreen(GxEPD_WHITE);
  display.drawBitmap(0, 0, watchface30_bg, 200, 200, GxEPD_BLACK);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(125, 78);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(140, 112);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(125, 18);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face32() {
  display.fillScreen(GxEPD_WHITE);
  display.drawBitmap(0, 0, watchface32_bg, 132, 200, GxEPD_BLACK);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Compacta_Bold_Plain_Regular30pt7b);
  display.setCursor(90, 65);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(130, 190);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face33() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface33_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Compacta_Bold_Plain_Regular25pt7b);
  display.setCursor(3, 38);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(3, 58);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face34() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface34_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Lumber_Regular20pt7b);
  display.setCursor(10, 130);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(147, 130);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face35() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface35_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Lumber_Regular20pt7b);
  display.setCursor(3, 150);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(3, 185);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Lumber_Regular10pt7b);
  display.setCursor(135, 20);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face36() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface36_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Devasia_Bold32pt7b);
  display.setCursor(2, 48);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setFont(&Devasia_Bold18pt7b);
  display.setCursor(2, 76);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face37() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface37_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular16pt7b);
  display.setCursor(146, 68);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setFont(&VT323_Regular14pt7b);
  display.setCursor(148, 86);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face38() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface38_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&amsterdam30pt7b);
  display.setCursor(120, 110);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(140, 140);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(150, 195);
  display.setFont(&CC_YadaYadaYada6pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face39() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface39_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo18pt7b);
  display.setCursor(10, 140);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(10, 170);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(0, 195);
  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face40() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface40_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo18pt7b);
  display.setCursor(80, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(120, 50);
  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face41() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface41_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Devasia_Bold32pt7b);
  display.setCursor(5, 195);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(153, 28);
  display.setFont(&Devasia_Bold18pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face42() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface42_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Devasia_Bold32pt7b);
  display.setCursor(5, 45);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(5, 70);
  display.setFont(&Devasia_Bold18pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face43() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface43_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Compacta_Bold_Plain_Regular30pt7b);
  display.setCursor(17, 56);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(122, 131);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setCursor(147, 196);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Compacta_Bold_Plain_Regular30pt7b);
  display.setCursor(15, 55);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(120, 130);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setCursor(145, 195);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face44() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface44_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Compacta_Bold_Plain_Regular30pt7b);
  display.setCursor(105, 55);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(140, 100);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setCursor(145, 195);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face45() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 120, watchface45_bg, 200, 76, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(20, 87);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(20, 120);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);

  display.setCursor(100, 120);
  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face46() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface46_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Devasia_Bold28pt7b);
  display.setCursor(2, 197);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(130, 195);
  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face47() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(44, 80, watchface47_bg, 156, 120, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Compacta_Bold_Plain_Regular30pt7b);
  display.setCursor(10, 50);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(10, 85);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face48() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface48_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.setCursor(55, 65);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(55, 90);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face49() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface49_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo18pt7b);
  display.setCursor(140, 158);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(150, 188);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(2, 18);
  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face50() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface50_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(10, 115);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(143, 115);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(130, 195);
  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face51() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface51_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(5, 35);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(5, 70);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(125, 20);
  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face52() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface52_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Lumber_Regular20pt7b);
  display.setCursor(13, 170);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(71, 55);
  display.setFont(&Lumber_Regular20pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face53() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface53_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(13, 62);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face54() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface54_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(40, 25);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(56, 44);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face55() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface55_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(0, 25);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(0, 44);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face56() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface56_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(20, 85);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(36, 103);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face57() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface57_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(90, 155);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(106, 173);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face58() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface58_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(170, 125);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(170, 149);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face59() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface59_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(93, 87);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(93, 117);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(2, 20);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face60() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface60_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(40, 60);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(135, 60);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(150, 15);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face61() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface61_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(55, 140);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(110, 140);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(76, 195);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face62() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface62_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(5, 65);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(5, 95);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(2, 20);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face63() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface63_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(155, 75);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(155, 105);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(152, 15);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face64() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface64_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(123, 160);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(152, 15);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face65() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface65_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(160, 155);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(160, 185);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(152, 15);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face66() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface66_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(145, 45);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(157, 69);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(150, 15);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face67() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface67_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(150, 70);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(162, 94);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(150, 15);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face68() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface68_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(5, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(150, 15);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face69() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface69_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(150, 25);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(165, 50);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(3, 17);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face70() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface70_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(129,195);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(3, 17);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face71() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface71_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(9,135);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(19, 160);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(2, 17);
  display.setFont(&VT323_Regular12pt7b);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face72() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface72_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(3,195);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setCursor(132, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face73() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface73_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Compacta_Bold_Plain_Regular25pt7b);
  display.setCursor(65, 190);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face74() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface74_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(3, 32);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.setCursor(3, 58);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face75() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface75_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(3, 194);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(3, 168);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face76() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface76_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(3, 32);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(120, 32);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face77() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface77_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(3, 194);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(3, 168);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face78() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface78_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(35, 35);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(150, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face79() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface79_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&cmuntx18pt7b);
  display.setCursor(55, 179);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&cmuntx18pt7b);
  display.setCursor(53, 177);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&cmuntx14pt7b);
  display.setTextColor(GxEPD_BLACK);
  display.setCursor(64, 36);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
  display.setCursor(62, 35);
  display.setTextColor(GxEPD_WHITE);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face80() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface80_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Compacta_Bold_Plain_Regular30pt7b);
  display.setCursor(110, 42);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(130, 85);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.setCursor(3, 23);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face81() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface81_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Compacta_Bold_Plain_Regular25pt7b);
  display.setCursor(161, 75);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(166, 104);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.setCursor(80, 33);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face82() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface82_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(121, 180);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setTextColor(GxEPD_BLACK);
  display.setCursor(120, 180);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(160, 194);
  display.setTextColor(GxEPD_WHITE);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face83() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface83_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(35, 133);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(150, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face84() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface84_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(113, 133);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(120, 158);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(150, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face85() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface85_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(3, 32);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.setCursor(5, 57);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face86() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface86_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(118, 25);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(150, 45);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face87() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface87_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(140, 43);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(140, 68);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face88() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface88_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(60, 41);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(77, 60);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face89() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface89_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&cmuntx18pt7b);
  display.setCursor(15, 100);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(145, 100);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(77, 15);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face90() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface90_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&cmuntx18pt7b);
  display.setCursor(5, 70);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(5, 100);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&cmuntx10pt7b);
  display.setCursor(135, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face91() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface91_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(78, 140);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(93, 170);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face92() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface92_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(167, 40);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(172, 63);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(165, 40);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(170, 63);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setTextColor(GxEPD_WHITE);
  display.setCursor(12, 40);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face93() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface93_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&cmuntx18pt7b);
  display.setCursor(53, 195);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face94() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface94_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(3, 23);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(150, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face95() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface95_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(110, 100);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(150, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face96() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface96_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(165, 90);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(165, 120);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setTextColor(GxEPD_WHITE);
  display.setCursor(57, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face97() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface97_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(17, 91);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(17, 121);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(15, 90);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(15, 120);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(3, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face98() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface98_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(17, 151);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(15, 150);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(2, 104);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face99() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface99_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(92, 35);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(117, 68);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face100() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface100_bg, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(135, 33);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(3, 33);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face101() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg101, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(3, 33);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(30, 63);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular16pt7b);
  display.setCursor(130, 193);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face102() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg102, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(86, 158);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(100, 188);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face103() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg103, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(60, 173);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(77, 193);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face104() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg104, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(18, 33);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(18, 58);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(137, 18);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face105() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg105, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&cmuntx18pt7b);
  display.setCursor(18, 33);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(18, 58);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&cmuntx10pt7b);
  display.setCursor(137, 18);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face106() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg106, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular18pt7b);
  display.setCursor(2, 153);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(10, 178);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face107() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg107, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(52, 146);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(120, 146);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(77, 13);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face108() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg108, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(100, 25);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(3, 20);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face109() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg109, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(120, 50);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(140, 74);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face110() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg110, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(65, 105);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setTextColor(GxEPD_WHITE);
  display.setCursor(108, 105);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setTextColor(GxEPD_BLACK);
  display.setCursor(77, 62);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face111() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg111, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular14pt7b);
  display.setCursor(157, 182);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(176, 195);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face112() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg112, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular14pt7b);
  display.setCursor(62, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(67, 50);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face113() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg113, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(115, 30);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(3, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face114() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg114, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(10, 165);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(10, 190);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(153, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face115() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg115, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&LinLibertine_M20pt7b);
  display.setCursor(37, 135);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&LinLibertine_M12pt7b);
  display.setCursor(62, 161);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face116() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg116, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&LinLibertine_M20pt7b);
  display.setCursor(37, 135);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&LinLibertine_M12pt7b);
  display.setCursor(62, 161);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face117() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg117, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&LinLibertine_M20pt7b);
  display.setCursor(37, 55);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&LinLibertine_M12pt7b);
  display.setCursor(62, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face118() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg118, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(64, 190);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(105, 190);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face119() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg119, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(145, 162);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(160, 190);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(150, 20);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face120() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg120, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Lumber_Regular20pt7b);
  display.setCursor(32, 165);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Lumber_Regular12pt7b);
  display.setCursor(122, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face121() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg121, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Lumber_Regular20pt7b);
  display.setCursor(45, 165);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Lumber_Regular12pt7b);
  display.setCursor(63, 187);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face122() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg122, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&earwig_factory_rg20pt7b);
  display.setCursor(30, 145);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(45, 170);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face123() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg123, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&earwig_factory_rg20pt7b);
  display.setCursor(131, 40);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(146, 65);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setTextColor(GxEPD_WHITE);
  display.setCursor(128, 38);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(143, 63);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face124() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg124, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(120, 117);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(140, 150);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Manti_Sans_Fixed_Demo10pt7b);
  display.setCursor(120, 20);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face125() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg125, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular20pt7b);
  display.setCursor(113, 172);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(43, 35);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face126() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg126, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&LinLibertine_M20pt7b);
  display.setCursor(37, 45);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&LinLibertine_M12pt7b);
  display.setCursor(62, 16);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face127() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg127, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(20, 42);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(120, 42);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face128() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg128, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(165, 108);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(165, 138);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(163, 107);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(163, 137);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.setCursor(3, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face129() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg129, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&Compacta_Bold_Plain_Regular20pt7b);
  display.setCursor(168, 68);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(168, 98);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&Compacta_Bold_Plain_Regular15pt7b);
  display.setTextColor(GxEPD_WHITE);
  display.setCursor(67, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face130() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg130, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular16pt7b);
  display.setCursor(5, 195);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular16pt7b);
  display.setCursor(130, 195);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face131() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg131, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular14pt7b);
  display.setCursor(143, 61);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setTextColor(GxEPD_WHITE);
  display.setCursor(141, 60);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
}

void AcerolaWatch::Face132() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg132, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular16pt7b);
  display.setCursor(100, 162);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(100, 185);
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular16pt7b);
  display.setCursor(130, 25);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::Face133() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, WatchFaceBg133, 200, 200, GxEPD_WHITE);
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&VT323_Regular16pt7b);
  display.setCursor(137, 133);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(147, 151);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
  display.setTextColor(GxEPD_BLACK);
  display.setFont(&VT323_Regular16pt7b);
  display.setCursor(135, 132);
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour) + ":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&VT323_Regular12pt7b);
  display.setCursor(145, 150);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(String(currentTime.Month) + "/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}