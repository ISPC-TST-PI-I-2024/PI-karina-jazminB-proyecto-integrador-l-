// Definicion de los pines GPIO para los LEDs y el botón
const int btn1 = 0; // Botón conectado al GPIO 0
const int led5 = 14; // LED conectado al GPIO 5
const int led6 = 18; // LED conectado al GPIO 18
const int led7 = 19; // LED conectado al GPIO 19
const int led8 = 21; // LED conectado al GPIO 21

// Variables para almacenar el estado del botón y el contador de pulsaciones
int estadoBtn1 = 0;
int contadorPulsaciones = 0;

// Variables para el control de parpadeo de los LEDs
unsigned long tiempoAnterior = 0;
const long intervaloLed5 = 500; // Intervalo para led5
const long intervaloLed6 = 300; // Intervalo para led6
const long intervaloLed7 = 250; // Intervalo para led7
const long intervaloLed8 = 150;// Intervalo para led8

void setup() {
  // Configurar el botón como entrada con pull-up interno
  pinMode(btn1, INPUT_PULLUP);
  // Configurar los LEDs como salidas
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
}

void loop() {
  // Leer el estado del botón
  estadoBtn1 = digitalRead(btn1);
  
  // Si el botón está presionado (estado bajo debido al pull-up)
  if (estadoBtn1 == LOW) {
    // Incrementar el contador de pulsaciones
    contadorPulsaciones++;
    // Esperar un poco para evitar rebotes
    delay(200);
    
    // Resetear el contador si alcanza 4
    if (contadorPulsaciones > 4) {
      contadorPulsaciones = 1;
    }
  }
  
  // Obtener el tiempo actual
  unsigned long tiempoActual = millis();
  
  // Parpadeo de los LEDs según el número de pulsaciones
  if (contadorPulsaciones >= 1 && tiempoActual - tiempoAnterior >= intervaloLed5) {
    // Si ha pasado el intervalo, cambiar el estado del LED
    digitalWrite(led5, !digitalRead(led5));
    tiempoAnterior = tiempoActual; // Guardar el tiempo del último cambio
  }
  if (contadorPulsaciones >= 2 && tiempoActual - tiempoAnterior >= intervaloLed6) {
    digitalWrite(led6, !digitalRead(led6));
    tiempoAnterior = tiempoActual;
  }
  if (contadorPulsaciones >= 3 && tiempoActual - tiempoAnterior >= intervaloLed7) {
    digitalWrite(led7, !digitalRead(led7));
    tiempoAnterior = tiempoActual;
  }
  if (contadorPulsaciones >= 4 && tiempoActual - tiempoAnterior >= intervaloLed8) {
    digitalWrite(led8, !digitalRead(led8));
    tiempoAnterior = tiempoActual;
  }
}
