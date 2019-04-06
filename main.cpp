#include "Arduino.h"
#include "DigitalLed.h"

int ledPin = 13;
int btnPin = 2;
DigitalLed digiLed(ledPin, btnPin); 

void setup() {
  Serial.begin(9600);
}

void loop() {
  //TODO: digital strategy 
    //DigitalLightStrategy
      //clickListener
    //DigitalDoorbell
    //DigitalToggle

  //TODO: Analog strategy
    //AnalogLightStrategy
      //Handels changeListener
    //AnalogDimmer
    //AnalogSpeeder

    digiLed.render();
}

