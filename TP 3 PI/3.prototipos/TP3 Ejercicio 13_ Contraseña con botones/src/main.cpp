#include <Arduino.h>

// Definir los pines para los botones y LEDs
const int btn1 = 2;
const int btn2 = 4;
const int btn3 = 5;
const int led1 = 12;
const int led2 = 19;

// Secuencia correcta de botones
const int secuenciaCorrecta[] = {btn1, btn2, btn3, btn1};
int entradaUsuario[4];
int indice = 0;

void setup() {
  // Inicializar los botones como entrada
  pinMode(btn1, INPUT_PULLUP);
  pinMode(btn2, INPUT_PULLUP);
  pinMode(btn3, INPUT_PULLUP);
  
  // Inicializar los LEDs como salida
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  // Leer los botones
  if(digitalRead(btn1) == LOW) {
    verificarBoton(btn1);
  }
  if(digitalRead(btn2) == LOW) {
    verificarBoton(btn2);
  }
  if(digitalRead(btn3) == LOW) {
    verificarBoton(btn3);
  }
}

void verificarBoton(int btn) {
  entradaUsuario[indice] = btn;
  indice++;
  
  // Verificar si la secuencia está completa
  if(indice == 4) {
    bool esCorrecta = true;
    for(int i = 0; i < 4; i++) {
      if(entradaUsuario[i] != secuenciaCorrecta[i]) {
        esCorrecta = false;
        break;
      }
    }
    
    // Encender el LED correspondiente
    if(esCorrecta) {
      digitalWrite(led1, HIGH);
      delay(500);
      digitalWrite(led1, LOW);
    } else {
      digitalWrite(led2, HIGH);
      delay(500);
      digitalWrite(led2, LOW);
    }
    
    // Reiniciar la secuencia
    indice = 0;
  }
  
  // Debounce
  delay(300);
}
