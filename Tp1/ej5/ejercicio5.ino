#define red 6
#define blue 5
#define green 3
#define pote_red A0
#define pote_blue A1
#define pote_green A2

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{
  int red_value = map(analogRead(pote_red), 0, 1023, 0, 255);
  int blue_value = map(analogRead(pote_blue), 0, 1023, 0, 255);
  int green_value = map(analogRead(pote_green), 0, 1023, 0, 255);
  
  analogWrite(red, red_value);
  analogWrite(blue, blue_value);
  analogWrite(green, green_value);
  delay(1000);
  
}