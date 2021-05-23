// C++ code
//

#define pulsador 7
#define red 13
#define blue 12
#define green 11

void setup()
{
  pinMode(pulsador, INPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  int valorPulsador = digitalRead(pulsador);
  
  if(valorPulsador == HIGH) {
    analogWrite(red, random(0, 255));
    analogWrite(green, random(0, 255));
    analogWrite(blue, random(0, 255));
  }else{
    analogWrite(red, 0);
    analogWrite(green, 0);
    analogWrite(blue, 0);
  }
  
  delay(1000);
  
}