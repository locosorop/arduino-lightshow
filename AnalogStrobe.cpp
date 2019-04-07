#include "AnalogStrobe.h"

void AnalogStrobe::render(int ledPin, int potPin) {
    digitalWrite(ledPin, HIGH);
    delay(analogRead(potPin)); 
    digitalWrite(ledPin, LOW); 
    delay(analogRead(potPin)); 
}