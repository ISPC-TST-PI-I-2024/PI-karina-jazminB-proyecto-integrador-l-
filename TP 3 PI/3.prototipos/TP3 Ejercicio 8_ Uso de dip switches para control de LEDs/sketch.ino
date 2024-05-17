// Definición de pines para los dip switches y los LEDs
const int dipSwitchPins[] = {2, 3, 4, 5, 25, 26, 27, 32,};
const int ledPins[] = { 12, 13, 14, 15, 16, 17, 18, 19,};

void setup() {
  // Configura los pines de los dip switches como entradas
  for (int i = 0; i < 8; i++) {
    pinMode(dipSwitchPins[i], INPUT);
  }
  
  // Configura los pines de los LEDs como salidas
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Lee el estado de los dip switches
  for (int i = 0; i < 8; i++) {
    int switchState = digitalRead(dipSwitchPins[i]);
    
    // Si el dip switch está encendido, activa el LED correspondiente
    if (switchState == HIGH) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }
  }
}

