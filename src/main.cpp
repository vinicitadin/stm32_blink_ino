#include "Arduino.h"

int LED = PC13;

void setup(){

    pinMode(LED, OUTPUT);
}

void loop(){

    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
}

