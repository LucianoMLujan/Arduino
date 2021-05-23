// C++ code
//

#define flexible A0
#define led_red 12
#define led_blue 11

int red, blue;

void setup()
{
  Serial.begin(9600);
  pinMode(led_red, OUTPUT);
  pinMode(led_blue, OUTPUT);
}

void loop()
{
  red = map(analogRead(flexible), 389, 787, 0, 255);
  Serial.println(red);
  analogWrite(led_red, red);
  delay(255);
}