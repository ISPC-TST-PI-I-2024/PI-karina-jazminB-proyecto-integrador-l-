#include <Arduino.h>

// Definir los pines de los LEDs
const int led1 = 23; 
const int led2 = 22; 
const int led3 = 21; 
const int led4 = 19; 

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // Patrón rápido: led1 y led2 parpadean alternativamente
  digitalWrite(led1, HIGH);
  delay(250); // Ajustar para cambiar la velocidad del parpadeo rápido
  digitalWrite(led1, LOW);
  digitalWrite(led2, HIGH);
  delay(250); // Ajustar para cambiar la velocidad del parpadeo rápido
  digitalWrite(led2, LOW);

  // Patrón lento: led3 y led4 parpadean alternativamente
  digitalWrite(led3, HIGH);
  delay(1000); // Ajustar para cambiar la velocidad del parpadeo lento
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  delay(1000); // Ajustar para cambiar la velocidad del parpadeo lento
  digitalWrite(led4, LOW);
}