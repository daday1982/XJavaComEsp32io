#ifndef XJAVACOMESP32_h
#define XJAVACOMESP32_h

#include "Arduino.h"

void setPin(byte numberPin, boolean statusMode){
    pinMode(numberPin, statusMode);
}

void outSet(byte numberPin, boolean statusPin){
    digitalWrite(numberPin, statusPin);
}

void kedip(byte numberPin, int delayBlink){
    digitalWrite(numberPin, HIGH);
    delay(delayBlink);
    digitalWrite(numberPin, LOW);
    delay(delayBlink);
}

#endif