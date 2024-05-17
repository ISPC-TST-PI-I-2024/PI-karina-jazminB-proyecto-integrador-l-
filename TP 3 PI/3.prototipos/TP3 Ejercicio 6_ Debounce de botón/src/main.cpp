#include <Arduino.h>

const int buttonPin = 2; // DONDE ESTA CONECTADO EL PIN DEL PULSADOR
const int ledPin = 13;

volatile bool buttonPressed = false;

void handleButtonPress() {
  buttonPressed = true;
}

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), handleButtonPress, FALLING);
}

void loop() {
  if (buttonPressed) {
    digitalWrite(ledPin, !digitalRead(ledPin)); // Cambia el estado del LED
    buttonPressed = false;
  }
}
