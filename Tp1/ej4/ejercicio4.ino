#define red_pwm 3
#define pote1 A0

void setup()
{
  Serial.begin(9600);
  pinMode(red_pwm, OUTPUT);
}

void loop()
{
  int valor = map(analogRead(pote1), 0, 1023, 0, 255);
  Serial.println(valor);
  analogWrite(red_pwm, valor);
  delay(1000);
}