// C++ code
//

#define trigger 6
#define eco 3
#define buzzer 13

long cm, duration;

void setup()
{
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
  noTone(buzzer);
  
  if (cm > 20 && cm <= 30){
    tone(buzzer, 440, 1000);
    delay(1500);
  }
  else if (cm > 12 && cm <= 20) {
  	tone(buzzer, 340, 1000);
    delay(1000);
  }
  else if (cm > 6 && cm <= 12) {
    tone(buzzer, 240, 1000);
    delay(500);
  }
  else if (cm > 2 && cm <= 6) {
    tone(buzzer, 140, 1000);
    delay(250);
  }
  else {
  	noTone(buzzer);
  }
  delay(500);
}