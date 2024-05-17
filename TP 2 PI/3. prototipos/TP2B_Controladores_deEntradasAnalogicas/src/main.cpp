#include <Arduino.h>

#include <Adafruit_Sensor.h>
#include <DHT.h>
#define PinSensor 2
DHT dht(PinSensor, DHT22);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(2000);
  float humedad = dht.readHumidity();
  float temperatura = dht.readTemperature();
  if (isnan(humedad) || isnan(temperatura)) {
    Serial.println("Error al leer del sensor DHT");
  } else {
    Serial.print("Humedad: ");
    Serial.print(humedad);
    Serial.print("% - ");
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.println(" °C");
  }
}
