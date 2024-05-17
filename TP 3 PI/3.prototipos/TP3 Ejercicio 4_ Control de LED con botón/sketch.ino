const int ledPin = 2; // Pin del LED
const int buttonPin = 4; // Pin del botón


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  
  pinMode(ledPin, OUTPUT);

  pinMode(buttonPin, INPUT_PULLUP); // Configura el botón con resistencia pull-up interna
}

void loop() {
  if (digitalRead(buttonPin) == LOW) { // Si el botón está presionado
    digitalWrite(ledPin, HIGH); // Enciende el LED
  } else {
    digitalWrite(ledPin, LOW); // Apaga el LED
  }
}

