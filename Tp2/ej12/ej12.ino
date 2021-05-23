// C++ code
//

#define pir 7
#define led_red 13
#define led_blue 12

void setup()
{
  pinMode(pir, INPUT);
  pinMode(led_red, OUTPUT);
  pinMode(led_blue, OUTPUT);
}

void loop()
{
  int valorPir = digitalRead(pir);
  
  if(valorPir == HIGH){
    digitalWrite(led_red, HIGH);
    digitalWrite(led_blue, LOW);
  }else{
    digitalWrite(led_red, LOW);
    digitalWrite(led_blue, HIGH);
  }
  
  delay(500);
  
}