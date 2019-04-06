/**
 * DigitalLed.h
 * Control a LED with a digital input
 * Written by Maniflames
 */ 

#ifndef DigitalLed_h 
#define DigitalLed_h

#include "Arduino.h"
#include "DigitalLightStrategy.h"

class DigitalLed {
    public:
      enum DigitalLightType {
        Doorbell, Toggle
      };
      DigitalLed(int ledPin, int btnPin);
      void render();
      void setStrategy(int strategy);
    private:
      int _ledPin;
      int _btnPin;
      DigitalLightStrategy *_strategy;
};

#endif