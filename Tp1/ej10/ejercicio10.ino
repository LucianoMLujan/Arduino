#define echo 8
#define trigger 9
#define red 13
#define green 11
#define blue 12
int duration, cm;

void setup()
{
  Serial.begin(9600);
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{
  
  digitalWrite(trigger, LOW);
  delayMicroseconds(5);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
 
  duration = pulseIn(echo, HIGH);
 
  // Calculating the distance
  cm = duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.println(" cm");
  
  if(cm >= 0 && cm < 20) {
    analogWrite(red, 255);
    analogWrite(green, 0);
    analogWrite(blue, 0);
  }else if(cm >= 20 && cm < 30) {
    analogWrite(red, 255);
    analogWrite(green, 165);
    analogWrite(blue, 0);
  }else if(cm >= 30 && cm < 40) {
    analogWrite(red, 255);
    analogWrite(green, 255);
    analogWrite(blue, 0);
  }else{
    analogWrite(red, 0);
    analogWrite(green, 0);
    analogWrite(blue, 0);
  }
  
  delay(600);
  
}