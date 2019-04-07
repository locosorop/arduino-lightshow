#ifndef AnalogLed_h
#define AnalogLed_h

#include "Arduino.h"
#include "AnalogLightStrategy.h"
#include "AnalogDimmer.h"
#include "AnalogStrobe.h"

class AnalogLed {
public:
    enum AnalogLightType {
        Dimmer, Strobe
    };
    AnalogLed(int ledPin, int potPin);
    void render();
    void setStrategy(int strategy);
    int getCurrentStrategyType();
private:
    int _ledPin;
    int _potPin;
    int _currentStrategyType; 
    AnalogLightStrategy *_strategy; 
};

#endif