#include <Arduino.h>

const int LED = 3; // Indicando que el LED se encuentra en el pin 3
const int potenciometro = A0; // El potenciómetro está conectado al pin A0
int intensidad; // Variable para la intensidad de brillo

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    intensidad = analogRead(potenciometro); // Leemos el valor del potenciómetro 
    analogWrite(LED, intensidad); // Controlamos el brillo del LED con PWM
}
