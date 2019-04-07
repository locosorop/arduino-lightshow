#ifndef AnalogDimmer_h
#define AnalogDimmer_h

#include "Arduino.h"
#include "AnalogLightStrategy.h"

class AnalogDimmer: public AnalogLightStrategy {
    public:
      virtual void render(int ledPin, int potPin);
};

#endif
