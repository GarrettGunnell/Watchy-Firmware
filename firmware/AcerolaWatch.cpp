#include "AcerolaWatch.h"

AcerolaWatch::AcerolaWatch(){}

void AcerolaWatch::drawWatchFace() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, watchface1_bg, 200, 200, GxEPD_WHITE);

  display.setTextColor(GxEPD_BLACK);
  display.setFont(&CC_YadaYadaYada30pt7b);
  display.setCursor(50, 50);
  if(currentTime.Hour < 10) {
    display.print("0");
  }
  display.print(currentTime.Hour);
  display.print(":");
  if (currentTIme.Minute < 10) {
    display.print("0");
  }
  display.println(currentTime.Minute);
}
