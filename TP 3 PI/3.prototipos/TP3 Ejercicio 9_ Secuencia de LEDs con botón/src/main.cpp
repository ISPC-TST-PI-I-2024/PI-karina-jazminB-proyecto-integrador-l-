#include <Arduino.h>

#define BUTTON_PIN 0 // El pin donde está conectado el botón
#define NUM_LEDS 5 // Número de LEDs en la secuencia
int ledPins[NUM_LEDS] = {2, 4, 5, 12, 14}; // Los pines donde están conectados los LEDs
int currentLed = 0; // El LED actual que está encendido

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP); // Configura el botón como entrada con resistencia pull-up
  for(int i = 0; i < NUM_LEDS; i++) {
    pinMode(ledPins[i], OUTPUT); // Configura cada pin de LED como salida
  }
}

void loop() {
  static unsigned long lastButtonPress = 0;
  if(digitalRead(BUTTON_PIN) == LOW) { // Verifica si el botón está presionado
  if(millis() - lastButtonPress > 200) { // Debounce del botón
      lastButtonPress = millis();
      digitalWrite(ledPins[currentLed], LOW); // Apaga el LED actual
      currentLed = (currentLed + 1) % NUM_LEDS; // Avanza al siguiente LED
      digitalWrite(ledPins[currentLed], HIGH); // Enciende el nuevo LED
    }
  }
}


