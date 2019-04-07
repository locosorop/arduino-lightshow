#ifndef AnalogStrobe_h
#define AnalogStrobe_h

#include "Arduino.h"
#include "AnalogLightStrategy.h"

class AnalogStrobe: public AnalogLightStrategy {
    public:
      virtual void render(int ledPin, int potPin);
};

#endif
