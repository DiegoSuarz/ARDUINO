#include <Arduino.h>

void setup() {
  
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int valor_leido = analogRead(A0);
  int voltios = map(valor_leido,0,1023,0,255); //mapea el valor (0-1023) a un valor de voltaje 0-5v
  analogWrite(3,valor_leido);
  Serial.println("El valor leido es: " + String(valor_leido));


}