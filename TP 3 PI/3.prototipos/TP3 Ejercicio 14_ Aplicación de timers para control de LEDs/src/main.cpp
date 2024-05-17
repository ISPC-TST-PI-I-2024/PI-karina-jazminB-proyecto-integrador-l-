#include <Arduino.h>

const int ledPins[] = {5, 18, 19, 21}; // DONDE ESTAN LOS PINES DE LOS LEDS
const long interval = 1000; // Intervalo de parpadeo en milisegundos

unsigned long previousMillis = 0; // Almacenará la última vez que se actualizó el LED

void setup() {
  // Inicializa los pines de los LEDs como salidas
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // Guarda la última vez que parpadeo los LEDs
    previousMillis = currentMillis;

    
    for (int i = 0; i < 4; i++) {
      int ledState = digitalRead(ledPins[i]); // Lee el estado actual del LED
      digitalWrite(ledPins[i], !ledState); // Cambia el estado del LED
    }
  }

}
