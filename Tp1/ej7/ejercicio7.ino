#define echo 8
#define trigger 10
long duration, cm;

void setup()
{
  Serial.begin(9600);
  pinMode(echo, INPUT);
  pinMode(trigger, OUTPUT);
}

void loop()
{
  digitalWrite(trigger, LOW);
  delayMicroseconds(5);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  
  duration = pulseIn(echo, HIGH);
  cm = duration*0.034/2;
  Serial.print("Distancia: ");
  Serial.print(cm);
  Serial.println(" cm.");
  
  delay(250);
}