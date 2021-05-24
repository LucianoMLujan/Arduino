// C++ code
//
#include "Servo.h"
#define pin_servo 13

Servo servo;
int contador = 0;
int angulo = 0;

void setup()
{
  Serial.begin(9600);
  servo.attach(pin_servo);
}

void loop()
{
  angulo = random(0, 180);
  servo.write(angulo);
  contador++;
  delay(500);
  
  if(contador == 3) {
    Serial.print("Ultima Posicion: ");
    Serial.println(angulo);
    
    servo.write(0);
    delay(1500);
    
    servo.write(180);
    delay(1500);
    
    servo.write(90);
    delay(1500);
    
    contador = 0;
  }
  
}