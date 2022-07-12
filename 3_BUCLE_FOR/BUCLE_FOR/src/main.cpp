#include <Arduino.h>

int mascotas[4]={10,23,5,0};
String saludo[4]={"hola bienvenidos","adios hasta pronto","como estas","me gusta arduino"};
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  delay(100);

  for(int i=0;i<5;i++){
    Serial.println("esta es la ejecucion numero: "+String(i+1));
  }

  for(int i=0;i<4;i++){
    Serial.println("el mensaje numero: "+String(i+1)+" dice: "+ saludo[i]);
  }

  for(int i=0;i<4;i++){
    Serial.println("Mascotas en tienda: "+String(i+1)+" cantidad: "+mascotas[i]);
  }

}

void loop() {
  // put your main code here, to run repeatedly:
}