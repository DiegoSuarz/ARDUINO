#include <Arduino.h>

int cuenta=0;
String saludo ="Hola a todos";

void setup() {
  Serial.begin(9600);
  delay(100);
  Serial.println(saludo);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  cuenta = cuenta + 1;
  Serial.println("El valor de cuenta es: " + String(cuenta)); //transformar de binario a caracter ascii
  delay(1000);
}