#include <Arduino.h>

const int btn1Pin = 2; // Pin del botón BTN1
const int led1Pin = 13; // Pin del LED1

bool btn1State = LOW;
bool lastBtn1State = LOW;
bool led1State = LOW;

void setup() {
  pinMode(btn1Pin, INPUT);
  pinMode(led1Pin, OUTPUT);
}

void loop() {
  btn1State = digitalRead(btn1Pin);

  // Si el botón se ha presionado y soltado
  if (btn1State == HIGH && lastBtn1State == LOW) {
    led1State = !led1State; // Cambia el estado del LED1
    digitalWrite(led1Pin, led1State);
  }

  lastBtn1State = btn1State;
}