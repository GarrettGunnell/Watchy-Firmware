#ifndef ACEROLA_WATCH_H
#define ACEROLA_WATCH_H

#include <Watchy.h>
#include "aiko_icon_1.h"
#include "watchface_1.h"
#include "fonts/CC_YadaYadaYada18pt7b.h"
#include "fonts/CC_YadaYadaYada9pt7b.h"

class AcerolaWatch : public Watchy {
  public:
    AcerolaWatch();
    void drawWatchFace();
};

#endif
