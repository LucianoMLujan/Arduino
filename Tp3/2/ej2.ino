// C++ code
//
#include "Servo.h"
#define pin_servo 13
#define pot A0

int angulo = 0;
Servo servo;

void setup()
{
  Serial.begin(9600);
  servo.attach(pin_servo);
}

void loop()
{
  angulo = map(analogRead(pot), 0, 1023, 0, 180);
  Serial.println(angulo);
  servo.write(angulo);
  delay(500);
}