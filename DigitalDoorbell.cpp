#include "DigitalDoorbell.h"

DigitalDoorbell::DigitalDoorbell() {
    _btnState = 0; 
}

void DigitalDoorbell::render(int ledPin, int btnPin) {
    _btnState = digitalRead(btnPin); 

    if(_btnState) {
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW); 
    }
}