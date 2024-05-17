#include <Arduino.h>

// Definición de pines para los LEDs
const int ledPin1 = 12;
const int ledPin2 = 13;
const int ledPin3 = 11;

// Tiempo de encendido y apagado (en milisegundos)
const unsigned long tiempoEncendido = 1000; // 1 segundo
const unsigned long tiempoApagado = 1000;   // 1 segundo

void setup() {
  // Configura los pines como salidas
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  // Enciende el primer LED
  digitalWrite(ledPin1, HIGH);
  delay(tiempoEncendido);
  digitalWrite(ledPin1, LOW);

  // Enciende el segundo LED
  digitalWrite(ledPin2, HIGH);
  delay(tiempoEncendido);
  digitalWrite(ledPin2, LOW);

  // Enciende el tercer LED
  digitalWrite(ledPin3, HIGH);
  delay(tiempoEncendido);
  digitalWrite(ledPin3, LOW);

  // Espera antes de repetir
  delay(tiempoApagado);
}


