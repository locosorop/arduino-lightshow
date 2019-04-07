#include "AnalogLed.h"

AnalogLed::AnalogLed(int ledPin, int potPin) {
    pinMode(ledPin, OUTPUT); 
    _ledPin = ledPin; 
    pinMode(potPin, INPUT); 
    _potPin = potPin; 
    this->setStrategy(0);
}

void AnalogLed::setStrategy(int strategy) {
    delete _strategy;

    if(strategy == Strobe) {
        _strategy = new AnalogStrobe(); 
        _currentStrategyType = Strobe; 
    } 

    if(strategy == Dimmer) {
        _strategy = new AnalogDimmer(); 
        _currentStrategyType = Dimmer; 
    }

}

int AnalogLed::getCurrentStrategyType() {
    return _currentStrategyType;
}

void AnalogLed::render() {
    _strategy->render(_ledPin, _potPin);
}

