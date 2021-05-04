#define red 10
#define green 8
#define blue 9
#define LDR_red A0
#define LDR_green A1
#define LDR_blue A2

void setup()
{
  Serial.begin(9600);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop()
{
  int LDR_red_value = map(analogRead(LDR_red), 366, 1018, 0, 255);
  int LDR_green_value = map(analogRead(LDR_green), 366, 1018, 0, 255);
  int LDR_blue_value = map(analogRead(LDR_blue), 366, 1018, 0, 255);
  
  analogWrite(red, LDR_red_value);
  analogWrite(green, LDR_green_value);
  analogWrite(blue, LDR_blue_value);
  
  delay(100);
}