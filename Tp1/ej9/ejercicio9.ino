// C++ code
//

#define led_red 9
#define trigger 6
#define eco 3

long cm, duration;

void setup()
{
  Serial.begin(9600);
  pinMode(led_red, OUTPUT);
  pinMode(trigger, OUTPUT);
  pinMode(eco, INPUT);
}

void loop()
{
  digitalWrite(led_red, LOW); 

  
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
  
  if(cm <= 5) {
  	analogWrite(led_red, 255);
  }else if(cm <= 10) {
    analogWrite(led_red, 120);
  }else if(cm <= 25){
    analogWrite(led_red, 80);
  }else {
    analogWrite(led_red, 0);
  }
  
  
  delay(250);
  
}