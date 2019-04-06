/**
 * DigitalLightStrategy.h
 * Abstract class for implementing ways to control a LED with a digital input
 * Written by Maniflames
 */

#ifndef DigitalLightStrategy_h
#define DigitalLightStrategy_h

#include "Arduino.h"

class DigitalLightStrategy {
    public:
      virtual void render(int ledPin, int btnPin);
    private:
      int _btnState;
};

#endif
