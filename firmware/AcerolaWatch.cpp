#include "AcerolaWatch.h"

AcerolaWatch::AcerolaWatch(){}

void AcerolaWatch::drawWatchFace() {
  display.fillScreen(GxEPD_BLACK);
  display.drawBitmap(0, 0, epd_bitmap_aiko_icon_1, 200, 200, GxEPD_WHITE);
}
