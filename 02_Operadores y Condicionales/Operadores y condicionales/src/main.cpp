#include <Arduino.h>

float numero = 24;
float numero2 =23;
float resultado;
int resto;
int led=1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(100);
  numero ++;//operador de asignación suma
  numero --;//operador de asignación resta
  resultado=numero/numero2;

  Serial.println("el resultado es: "+ String(resultado,4)); //pasar el valor de la variable resultado a ascii con una 4 digitos imprimibles
  resto=7%5;
  Serial.println("el resto de dividir 7 entre 5 es: "+String(resto,4));

//**************************Operadores de Comparación¨***************************
  if (numero == numero2){

    Serial.println("Si son iguales!");
  }else{
    Serial.println("No son iguales!");
  }


  // if (numero != numero2){
  //   Serial.println("No son iguales!");

  // }

  
  // if (numero > numero2){
  //   Serial.println("Numero es mayor!");

  // }

  
  // if (numero < numero2){
  //   Serial.println("Numero es menor!");

  // }
  // if (numero <= numero2){
  //   Serial.println("Numero es menor igual!");

  // }

  // if (numero >= numero2){
  //   Serial.println("Numero es mayor igual!");

  // }
}

void loop() {
  // put your main code here, to run repeatedly:
}