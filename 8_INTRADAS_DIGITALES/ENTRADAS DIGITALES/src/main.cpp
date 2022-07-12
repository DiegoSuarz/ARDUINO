#include <Arduino.h>
#define led 5
#define boton 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //pinMode(boton,INPUT); //pull up externo
  pinMode(boton,INPUT_PULLUP); //pull up interno si es que la aplicacion no tiene mucho ruido externo
  pinMode(led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool estado_pulsador= digitalRead(3);
  String estado;

  // if(estado_pulsador == true){
  //   estado = "APAGADO";
  //   digitalWrite(5,LOW);
  // }else{
  //   estado = "PRESIONADO";
  //   digitalWrite(5,HIGH);
  // }
  // Serial.println(estado);

  if(estado_pulsador == false){
    if(digitalRead(led)){
      digitalWrite(led,LOW);
      delay(300);  //antirebote
    }else{
      digitalWrite(led,HIGH);
      delay(300);
    }
  }

}