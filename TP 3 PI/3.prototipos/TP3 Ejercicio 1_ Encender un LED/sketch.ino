
const int ledPin = 18; // Pin del LED

void setup() {
  pinMode(ledPin, OUTPUT); // Configurar el pin como salida
}

void loop() {
  digitalWrite(ledPin, HIGH); // Encender el LED
  // No hay tiempo de espera (delay) aquí
}

