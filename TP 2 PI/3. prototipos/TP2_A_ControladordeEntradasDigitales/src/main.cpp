#include <Arduino.h>

const int BUTTON_PIN = 2; // Pin donde se conecta el botón
const int LED_PIN = 13;   // Pin donde se conecta el LED

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Configura el pin del botón como entrada con resistencia de pull-up
  pinMode(LED_PIN, OUTPUT);          // Configura el pin del LED como salida
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN); // Lee el estado del botón
  if (buttonState == LOW) {                  // Si el botón está presionado (LOW debido a pull-up)...
    digitalWrite(LED_PIN, HIGH);             // Enciende el LED
  } else {                                   // Si no...
    digitalWrite(LED_PIN, LOW);              // Apaga el LED
  }
}
