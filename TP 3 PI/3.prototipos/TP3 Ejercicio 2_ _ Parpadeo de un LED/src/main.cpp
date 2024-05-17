#include <Arduino.h>

// Este código simula el parpadeo de un LED conectado al pin 18 (GPIO18) con un intervalo de 1 segundo.

const int ledPin = 18; // Pin del LED

void setup() {
  pinMode(ledPin, OUTPUT); // Configurar el pin como salida
}

void loop() {
  digitalWrite(ledPin, HIGH); // Encender el LED
  delay(1000); // Esperar 1 segundo

  digitalWrite(ledPin, LOW); // Apagar el LED
  delay(1000); // Esperar 1 segundo
}


