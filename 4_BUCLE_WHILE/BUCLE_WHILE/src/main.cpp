#include <Arduino.h>


int mascotas[4]={10,23,5,0};
String nombres[5]={"Juan","Pablo","Pedro","Benga","Fabian"};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(100);
  int cuenta=0;
  while(cuenta < 5){
    Serial.println("Posicion: "+String(cuenta)+" posee el nombre: " + nombres[cuenta]);
    cuenta++;
    if(nombres[cuenta]=="Benga"){
      Serial.println("lo encontre");
    } 
  }
}

void loop() {
  // put your main code here, to run repeatedly:
}