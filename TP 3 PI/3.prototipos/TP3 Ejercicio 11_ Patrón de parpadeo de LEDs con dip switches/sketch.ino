// Definición de los pines de los LEDs
const int ledPins[] = {4, 18, 19, 21, 22, 23, 25, 26,};
// Definición de los pines de los interruptores
const int swPins[] = {32,33, 34, 35,};

void setup() {
  // Configurar los pines de los LEDs como salida
  for (int i = 0; i < 8; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  
  // Configurar los pines de los interruptores como entrada
  for (int i = 0; i < 4; i++) {
    pinMode(swPins[i], INPUT);
  }
}

void loop() {
  // Leer el estado de los interruptores
  int estadoSwitch = 0;
  for (int i = 0; i < 4; i++) {
    if (digitalRead(swPins[i]) == HIGH) {
      estadoSwitch |= (1 << i);
    }
  }

  // Llamar a la función de parpadeo basada en el estado de los interruptores
  parpadearLEDs(estadoSwitch);
}

void parpadearLEDs(int estadoSwitch) {
  switch (estadoSwitch) {
    case 1: // sw1.4 activo
      // Parpadeo rápido
      parpadeoRapido();
      break;
    case 2: // sw1.3 activo
      // Parpadeo lento
      parpadeoLento();
      break;
    case 4: // sw1.2 activo
      // Parpadeo secuencial
      parpadeoSecuencial();
      break;
    case 8: // sw1.1 activo
      // Parpadeo en onda
      parpadeoOnda();
      break;
    default:
      // Sin parpadeo
      apagarTodos();
      break;
  }
}

void parpadeoRapido() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
    delay(100);
  }
}

void parpadeoLento() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
    delay(500);
  }
}

void parpadeoSecuencial() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(250);
    digitalWrite(ledPins[i], LOW);
  }
}

void parpadeoOnda() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], HIGH);
    delay(150);
  }
  for (int i = 7; i >= 0; i--) {
    digitalWrite(ledPins[i], LOW);
    delay(150);
  }
}

void apagarTodos() {
  for (int i = 0; i < 8; i++) {
    digitalWrite(ledPins[i], LOW);
  }
}
