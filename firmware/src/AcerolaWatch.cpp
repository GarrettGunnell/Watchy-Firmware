#include "AcerolaWatch.h"

AcerolaWatch::AcerolaWatch(){}

void AcerolaWatch::drawWatchFace() {
  watchFace10();
}

void AcerolaWatch::watchFace1() {
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
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 12;
  display.print((hour < 10) ? "0" : "");
  display.print(hour);
  display.setCursor(27, 94);
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

void AcerolaWatch::watchFace3() {
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
  display.print(currentTime.Month);
  display.print("/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::watchFace4() {
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

void AcerolaWatch::watchFace5() {
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
  display.print(currentTime.Month);
  display.print("/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::watchFace6() {
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

void AcerolaWatch::watchFace7() {
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
  display.print(currentTime.Month);
  display.print("/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}


void AcerolaWatch::watchFace8() {
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
  display.print(currentTime.Month);
  display.print("/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::watchFace9() {
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
  display.print(currentTime.Month);
  display.print("/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

void AcerolaWatch::watchFace10() {
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
  display.print(currentTime.Month);
  display.print("/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}

