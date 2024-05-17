#include <Arduino.h>

const int led1Pin = 13; // Pin para el LED 1
const int led2Pin = 12; // Pin para el LED 2
const int btn1Pin = 2;  // Pin para el botón 1
const int btn2Pin = 4 ;  // Pin para el botón 2

bool led1State = false; // Estado inicial del LED 1 (apagado)
bool led2State = false; // Estado inicial del LED 2 (apagado)

void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(btn1Pin, INPUT_PULLUP);
  pinMode(btn2Pin, INPUT_PULLUP);
}

void loop() {
  // Lee el estado de los botones
  bool btn1Pressed = !digitalRead(btn1Pin); // Invertimos el estado porque es pull-up
  bool btn2Pressed = !digitalRead(btn2Pin); // Invertimos el estado porque es pull-up

  
  if (btn1Pressed) {
    led1State = !led1State; // Cambia el estado del LED 1
    digitalWrite(led1Pin, led1State);
  }

  if (btn2Pressed) {
    led2State = !led2State; // Cambia el estado del LED 2
    digitalWrite(led2Pin, led2State);
  }
}
