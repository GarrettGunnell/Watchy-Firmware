#include "AcerolaWatch.h"

AcerolaWatch::AcerolaWatch(){}

void AcerolaWatch::drawWatchFace() {
  Face28();
}

void AcerolaWatch::Face1() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface1_bg, 200, 200, GxEPD_WHITE);
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
  display.setFont(&CC_YadaYadaYada9pt7b);
  display.setCursor(80, 80);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(hour);
  display.setCursor(80, 100);
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
  display.setFont(&CC_YadaYadaYada18pt7b);
  display.setCursor(35, 112);
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
  display.setTextColor(GxEPD_WHITE);
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

void AcerolaWatch::Face19() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface19_bg, 200, 200, GxEPD_WHITE);
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
  display.setCursor(110, 60);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(String(hour));
  display.setCursor(110, 90);
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
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&Manti_Sans_Fixed_Demo20pt7b);
  display.setCursor(135, 78);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
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