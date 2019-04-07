#include "AnalogDimmer.h"

void AnalogDimmer::render(int ledPin, int potPin) {
    int mappedInput = map(analogRead(potPin), 0, 1023, 0, 255);
    analogWrite(ledPin, mappedInput);
}