#include <Arduino.h>
#define led_rojo 5
#define led_azul 3
void setup() {
  // put your setup code here, to run once:
  analogWrite(led_rojo,127); //pin,ciclo de trabajo (0-255) 127, 50% duty cycle
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int brillo=0;brillo<256;brillo++){
    analogWrite(led_azul,brillo);
    delay(200);
  }
}