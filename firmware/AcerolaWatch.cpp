#include "AcerolaWatch.h"

AcerolaWatch::AcerolaWatch(){}

void AcerolaWatch::drawWatchFace() {
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
