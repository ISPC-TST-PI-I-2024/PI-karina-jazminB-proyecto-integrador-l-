// Define los pines para los dip switches y el LED
const int dipSwitch1 = 2; // SW1.1
const int dipSwitch2 = 3; // SW1.2
const int dipSwitch3 = 4; // SW1.3
const int ledPin = 13;    // LED1

void setup() {
  // Configura los pines de los dip switches como entrada
  pinMode(dipSwitch1, INPUT);
  pinMode(dipSwitch2, INPUT);
  pinMode(dipSwitch3, INPUT);
  
  // Configura el pin del LED como salida
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Lee el estado de los dip switches
  int switchState = digitalRead(dipSwitch1) + (digitalRead(dipSwitch2) << 1) + (digitalRead(dipSwitch3) << 2);

  // Asigna una velocidad de parpadeo basada en el estado de los dip switches
  int blinkSpeed;
  switch (switchState) {
    case 0: blinkSpeed = 1000; break; // Todos los switches apagados
    case 1: blinkSpeed = 500; break;  // SW1.1 activado
    case 2: blinkSpeed = 250; break;  // SW1.2 activado
    case 3: blinkSpeed = 125; break;  // SW1.1 y SW1.2 activados
    // Agrega más casos según sea necesario
    default: blinkSpeed = 1000;       // Configuración por defecto
  }

  // Hace parpadear el LED a la velocidad asignada
  digitalWrite(ledPin, HIGH);
  delay(blinkSpeed);
  digitalWrite(ledPin, LOW);
  delay(blinkSpeed);
}
