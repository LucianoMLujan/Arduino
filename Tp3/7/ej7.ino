// C++ code
//

#include "LiquidCrystal.h"

#define trigger 11
#define eco 12
long cm, duration;
LiquidCrystal lcd(10, 9, 7, 6, 5, 4);

void setup()
{
  lcd.begin(16, 2);
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(eco, INPUT);
}

void loop()
{
  digitalWrite(trigger, LOW);
  delayMicroseconds(5);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
 
  duration = pulseIn(eco, HIGH);
  
  // Calculating the distance
  cm = duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.println(" cm");
  lcd.clear();
  
  if(cm < 5) {
    lcd.setCursor(0,0);
    lcd.print("Distancia: ");
    lcd.print(cm);
    lcd.print("cm");
    lcd.setCursor(0,1);
    lcd.print("Muy cerca");
    delay(1500);
  }else if(cm >= 5 && cm < 10) {
    lcd.setCursor(0,0);
    lcd.print("Distancia: ");
    lcd.print(cm);
    lcd.print("cm");
    lcd.setCursor(0,1);
    lcd.print("Cerca");
    delay(1500);
  }else if(cm >= 10 && cm < 25) {
    lcd.setCursor(0,0);
    lcd.print("Distancia: ");
    lcd.print(cm);
    lcd.print("cm");
    lcd.setCursor(0,1);
    lcd.print("Proximo");
    delay(1500);
  }
 
}