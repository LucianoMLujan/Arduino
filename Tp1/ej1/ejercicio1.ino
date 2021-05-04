#define red 11
#define yellow 10
#define green 9

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(2000); 
  digitalWrite(red, LOW);
  delay(2000);
  digitalWrite(yellow, HIGH);
  delay(2000); 
  digitalWrite(yellow, LOW);
  delay(2000);
  digitalWrite(green, HIGH);
  delay(2000); 
  digitalWrite(green, LOW);
  delay(2000);
}