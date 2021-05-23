// C++ code
//

#define sensor 7
#define led_red 13

int contador = 1;

void setup()
{
  Serial.begin(9600);
  pinMode(led_red, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop()
{
  if(contador < 10){
    if(digitalRead(sensor) == LOW){
      contador++;
      digitalWrite(led_red, HIGH);
      delay(500);
    }
  }else{
    contador = 0;
  }
  Serial.println(contador);
  digitalWrite(led_red, LOW);
  delay(500);
}