#include "Arduino.h"
#include "DigitalLed.h"
#include "AnalogLed.h"

int switchBtnPin = 3; 
DigitalLed digiLed(13, 2); 
AnalogLed anaLed(5, A0);

void switchStrategy() {
  if(digiLed.getCurrentStrategyType() == DigitalLed::DigitalLightType::Doorbell) {
      digiLed.setStrategy(DigitalLed::DigitalLightType::Toggle); 
    } else {
      digiLed.setStrategy(DigitalLed::DigitalLightType::Doorbell); 
    } 

  if(anaLed.getCurrentStrategyType() == AnalogLed::AnalogLightType::Dimmer) {
      anaLed.setStrategy(AnalogLed::AnalogLightType::Strobe);
    } else {
      anaLed.setStrategy(AnalogLed::AnalogLightType::Dimmer);
    }
}

void setup() {
  Serial.begin(9600);
  pinMode(switchBtnPin, INPUT); 
  attachInterrupt(digitalPinToInterrupt(switchBtnPin), switchStrategy, RISING);
}

void loop() {
  anaLed.render();
  digiLed.render();
}

