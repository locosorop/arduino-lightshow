#ifndef DigitalDoorbell_h
#define DigitalDoorbell_h

#include "Arduino.h"
#include "DigitalLightStrategy.h"

class DigitalDoorbell: public DigitalLightStrategy {
    public: 
      DigitalDoorbell();
      void render(int ledPin, int btnPin);
    private: 
      int _btnState;
};

#endif