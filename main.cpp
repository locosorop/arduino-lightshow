#include "Arduino.h"
#include "DigitalLed.h"
#include "AnalogLed.h"

int switchBtnPin = 3; 
DigitalLed digiLed(13, 2); 
AnalogLed anaLed(5, A0);

int switchBtnState = 0;
int prevSwitchBtnState = 0;

void setup() {
  Serial.begin(9600);
  pinMode(switchBtnPin, INPUT); 
}

void loop() {
  //TODO: interrupts instead of polling!
  switchBtnState = digitalRead(switchBtnPin);
  if(prevSwitchBtnState == 1 && switchBtnState == 0) {
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

  anaLed.render();
  digiLed.render();
  prevSwitchBtnState = switchBtnState;
}

