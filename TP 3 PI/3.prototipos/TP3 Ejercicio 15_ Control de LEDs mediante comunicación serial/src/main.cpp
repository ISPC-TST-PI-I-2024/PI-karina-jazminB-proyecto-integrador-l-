#include <Arduino.h>

// Definir los pines de los LEDs
const int led1 = 23; // PIN DEL DEL LED 1
const int led2 = 22; // PIN DEL LED 2


void setup() {
  Serial.begin(115200); 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

}

void loop() {
  if (Serial.available() > 0) {
    char comando = Serial.read();
    switch (comando) {
      case '1':
        digitalWrite(led1, HIGH); // Encender led1
        break;
      case '2':
        digitalWrite(led1, LOW);  // Apagar led1
        break;
      case '3':
        digitalWrite(led2, HIGH); // Encender led2
        break;
      case '4':
        digitalWrite(led2, LOW);  // Apagar led2
        break;
    
      default:
        // Si el comando no es reconocido, no hacer nada
        break;
    }
  }
}

