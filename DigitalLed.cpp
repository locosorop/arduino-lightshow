#include "Arduino.h"
#include "DigitalLed.h"
#include "DigitalDoorbell.h"

DigitalLed::DigitalLed(int ledPin, int btnPin) {
    pinMode(ledPin, OUTPUT); 
    _ledPin = ledPin;
    pinMode(btnPin, INPUT);
    _btnPin = btnPin; 
    this->setStrategy(0);
}

void DigitalLed::render() {
    _strategy->render(_ledPin, _btnPin);
}

void DigitalLed::setStrategy(int strategy) {
    delete _strategy;

    if(strategy == Doorbell) {
        _strategy = new DigitalDoorbell(); 
    }
}