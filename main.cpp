#include "Arduino.h"
#include "DigitalLed.h"

int ledPin = 13;
int btnPin = 2;
int switchBtnPin = 3; 
DigitalLed digiLed(ledPin, btnPin); 

int switchBtnState = 0;
int prevSwitchBtnState = 0;

void setup() {
  pinMode(switchBtnPin, INPUT); 
}

void loop() {
  //TODO: interrupts instead of polling
  switchBtnState = digitalRead(switchBtnPin);
  if(prevSwitchBtnState == 1 && switchBtnState == 0) {
    if(digiLed.getCurrentStrategyType() == DigitalLed::DigitalLightType::Doorbell) {
      digiLed.setStrategy(DigitalLed::DigitalLightType::Toggle); 
    } else {
      digiLed.setStrategy(DigitalLed::DigitalLightType::Doorbell); 
    } 
  }

  //TODO: Analog strategy
    //AnalogLightStrategy
      //Handels changeListener
    //AnalogDimmer
    //AnalogSpeeder

    digiLed.render();
    prevSwitchBtnState = switchBtnState;
}

