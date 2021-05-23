// C++ code
//

#define LDR A0
#define led_red 13
#define led_blue 12
#define led_yellow 8

void setup()
{
  Serial.begin(9600);
  pinMode(led_red, OUTPUT);
  pinMode(led_blue, OUTPUT);
  pinMode(led_yellow, OUTPUT);
}

void loop()
{
  int valor = map(analogRead(LDR), 366, 1018, 1, 5);
  Serial.println(valor);
  if(valor == 1) {
    digitalWrite(led_red, HIGH);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_yellow, LOW);
    delay(733);
  } else if(valor == 2) {
    digitalWrite(led_red, HIGH);
    digitalWrite(led_blue, HIGH);
    digitalWrite(led_yellow, LOW);
    delay(733);
  }else if(valor == 3) {
    digitalWrite(led_red, HIGH);
    digitalWrite(led_blue, HIGH);
    digitalWrite(led_yellow, HIGH);
    delay(733);
  }else{
    digitalWrite(led_red, LOW);
    digitalWrite(led_blue, LOW);
    digitalWrite(led_yellow, LOW);
    delay(733);
  }
}