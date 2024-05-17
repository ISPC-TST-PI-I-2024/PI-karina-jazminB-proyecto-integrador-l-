// Definición de pines para los LEDs
const int led1Pin = 18;
const int led2Pin = 19;
const int led3Pin = 21;

void setup() {
 // // Configura los pines como salidas
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
}

void loop() {
 //// Enciende el LED 1 durante 500 ms
  digitalWrite(led1Pin, HIGH);
  delay(500); // Espera 500 ms
  digitalWrite(led1Pin, LOW);

  // Enciende el LED 2 durante 500 ms
  digitalWrite(led2Pin, HIGH);
  delay(500); // Espera 500 ms
   digitalWrite(led2Pin, LOW);

  // Enciende el LED 3 durante 500 ms
  digitalWrite(led3Pin, HIGH);
  delay(500); // Espera 500 ms
   digitalWrite(led3Pin, LOW);
}