// C++ code
//
#include "Servo.h"

#define pin_servo 13
Servo servo;
int angulo = 0;

void setup()
{
  Serial.begin(9600);
  servo.attach(pin_servo);
}

void loop()
{
  angulo = random(0, 180);
  Serial.println(angulo);
  servo.write(angulo);
  delay(1000);
}