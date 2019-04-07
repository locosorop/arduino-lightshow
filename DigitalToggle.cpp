#include "DigitalToggle.h"

DigitalToggle::DigitalToggle() {
    _btnState = 0; 
    _prevBtnState = 0;
}

void DigitalToggle::render(int ledPin, int btnPin) {
    _btnState = digitalRead(btnPin); 

    if(_prevBtnState == 1 && _btnState == 0) {
        if(digitalRead(ledPin)) {
            digitalWrite(ledPin, LOW);
        } else {
            digitalWrite(ledPin, HIGH); 
        }
    }

    _prevBtnState = _btnState;
}