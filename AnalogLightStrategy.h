#ifndef AnalogLightStrategy_h
#define AnalogLightStrategy_h

#include "Arduino.h"

class AnalogLightStrategy {
    public:
      virtual void render(int ledPin, int potPin);
};

#endif
