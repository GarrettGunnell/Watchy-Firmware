#include "AcerolaWatch.h"

AcerolaWatch::AcerolaWatch(){}

void AcerolaWatch::drawWatchFace() {
  switch(currentTime.Day) {
    case 1:
      watchFace1();
      break;
    case 2:
      watchFace2();
      break;
  }

  watchFace6();
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
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 0;
  display.print((hour < 10) ? "0" : "");
  display.print(hour);
  display.print(":");
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
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 0;
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
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 0;
  display.print((hour < 10) ? "0" : "");
  display.print(hour);
  display.print(":");
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
  display.setTextColor(GxEPD_WHITE);
  display.setFont(&CC_YadaYadaYada9pt7b);
  display.setCursor(5, 20);
  display.print("PUNPUN WAS...");
  display.setCursor(5, 40);
  display.print("JUST FINE AGAIN");
  display.setCursor(5, 60);
  display.print("TODAY.");

  display.setFont(&CC_YadaYadaYada18pt7b);
  display.setCursor(50, 150);
  int8_t hour = (currentTime.Hour % 12 != 0) ? currentTime.Hour % 12 : 0;
  display.print((hour < 10) ? "0" : "");
  display.print(hour);
  display.print(":");
  display.print((currentTime.Minute < 10) ? "0" : "");
  display.print(currentTime.Minute);
  display.setFont(&CC_YadaYadaYada9pt7b);
  display.setCursor(50, 175);
  display.print((currentTime.Month < 10) ? "0" : "");
  display.print(currentTime.Month);
  display.print("/");
  display.print((currentTime.Day < 10) ? "0" : "");
  display.println(currentTime.Day);
}
