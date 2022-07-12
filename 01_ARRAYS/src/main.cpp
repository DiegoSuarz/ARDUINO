#include <Arduino.h>

int edades[5];
int edades1[]={12,59,66};
int dinero_en_cuenta[10]={12,-50,66}; 
char mensaje[30]="hola bienvenidos";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
delay(100);
Serial.println(String (dinero_en_cuenta[1]));

dinero_en_cuenta[8]=51;
Serial.println(String(dinero_en_cuenta[8]));
}

void loop() {
  // put your main code here, to run repeatedly:
}