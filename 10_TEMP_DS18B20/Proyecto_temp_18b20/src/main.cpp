#include <Arduino.h>
#include <OneWire.h>
#include <DallasTemperature.h>

//define el pin que se va a usar
#define ONE_WIRE_BUS 2

OneWire oneWire(ONE_WIRE_BUS); //declarando una instancia de one wire

DallasTemperature sensor (&oneWire);

void setup() {
  Serial.begin(9600);
  Serial.println("inciando sensor de temperatura Dallas");
}

void loop() {
  // put your main code here, to run repeatedly:
  sensor.requestTemperatures();
  Serial.println("Temperatura obtenida");
  Serial.println("La temperatura es: "+String(sensor.getTempCByIndex(0));
}