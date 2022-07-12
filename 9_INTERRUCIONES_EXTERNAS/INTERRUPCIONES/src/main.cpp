#include <Arduino.h>

#define LED 5
#define BOTON 3 //para el arduino solo se puede generar interuppciones externas solo en el pin 2 y 3

bool estado_pulsador;
long tiempo_anterior;
long diferencia;

void Interrupt_ext();

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BOTON,INPUT_PULLUP);
  pinMode(LED,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(BOTON),Interrupt_ext,FALLING); //RISING, FALLING, LOW, HIGH 

}

void loop() {
  // put your main code here, to run repeatedly:
  
}

void Interrupt_ext(){

  diferencia = millis() - tiempo_anterior; //artilugio para evitar falsas activaciones por ruido electromagnetico
  tiempo_anterior = millis();

  if(diferencia > 500){ // si se ha pasado un tiempo menor a 500 milisegundos se considera ruido electromagnetico 
  
    if(digitalRead(LED)==true){
      digitalWrite(LED,LOW);
      Serial.println("APAGADO");
      delay(200);
    }else{
      digitalWrite(LED,HIGH);
      Serial.println("ENCENDIDO");
      delay(200);
    }
  }

}