#ifndef DigitalToggle_h
#define DigitalToggle_h

#include "Arduino.h"
#include "DigitalLightStrategy.h"

class DigitalToggle: public DigitalLightStrategy {
    public:
      DigitalToggle();
      void render(int ledPin, int btnPin); 
    private: 
      int _btnState;
      int _prevBtnState;
};

#endif