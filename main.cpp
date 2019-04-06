#include "Arduino.h"
#include "DigitalLed.h"

int ledPin = 13;
int btnPin = 2;
int switchBtnPin = 3; 
DigitalLed digiLed(ledPin, btnPin); 

void setup() {
  pinMode(switchBtnPin, INPUT); 
}

void loop() {
  if(digitalRead(switchBtnPin)) {
    digiLed.setStrategy(DigitalLed::DigitalLightType::Toggle); 
  }

  //TODO: Analog strategy
    //AnalogLightStrategy
      //Handels changeListener
    //AnalogDimmer
    //AnalogSpeeder

    digiLed.render();
}

