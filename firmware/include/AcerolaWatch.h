#ifndef ACEROLA_WATCH_H
#define ACEROLA_WATCH_H

#include <Watchy.h>
#include "watchface_1.h"
#include "watchface_2.h"
#include "watchface_3.h"
#include "watchface_4.h"
#include "watchface_5.h"
#include "watchface_6.h"
#include "watchface_7.h"
#include "watchface_8.h"
#include "watchface_9.h"
#include "watchface_10.h"
#include "watchface_11.h"
#include "watchface_12.h"
#include "watchface_13.h"
#include "fonts/CC_YadaYadaYada18pt7b.h"
#include "fonts/CC_YadaYadaYada9pt7b.h"
#include "fonts/CC_YadaYadaYada6pt7b.h"
#include "fonts/Manti_Sans_Fixed_Demo20pt7b.h"
#include "fonts/Manti_Sans_Fixed_Demo18pt7b.h"
#include "fonts/Manti_Sans_Fixed_Demo10pt7b.h"

class AcerolaWatch : public Watchy {
  public:
    AcerolaWatch();
    void drawWatchFace();
    void watchFace1();
    void watchFace2();
    void watchFace3();
    void watchFace4();
    void watchFace5();
    void watchFace6();
    void watchFace7();
    void watchFace8();
    void watchFace9();
    void watchFace10();
    void watchFace11();
    void watchFace12();
    void watchFace13();
};

#endif
