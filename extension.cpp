#include "pxt.h"

using namespace pxt;

// #define MISO 22
// #define MOSI 23
// #define SCK 24
// #define CS 11

namespace CS11
{
//%
int extfun(int x, int y)
{
    return x + y;
    }

    //%
    void write_(uint8_t pin){
        auto led = LOOKUP_PIN(LED_B);
        led -> setDigitalValue(0);
    }
    } // namespace CS11
