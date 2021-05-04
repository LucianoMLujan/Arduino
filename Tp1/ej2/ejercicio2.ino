int red_light_pin = 11;
int green_light_pin = 9;
int yellow_light_pin = 10;

void setup()
{
  Serial.begin(9600);
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(yellow_light_pin, OUTPUT);
}

void loop()
{
  int numero = random(0, 11);
  Serial.println(numero);
  switch(numero) {
    case 0:
    	digitalWrite(green_light_pin, HIGH);
  		delay(2000);
    	digitalWrite(red_light_pin, LOW);
    	digitalWrite(green_light_pin, LOW);
    	digitalWrite(yellow_light_pin, LOW);
    	break;
    case 1:
    	digitalWrite(red_light_pin, HIGH);
  		delay(2000);
    	digitalWrite(red_light_pin, LOW);
    	digitalWrite(green_light_pin, LOW);
    	digitalWrite(yellow_light_pin, LOW);
    	break;
    case 2:
    	digitalWrite(green_light_pin, HIGH);
  		delay(2000);
    	digitalWrite(red_light_pin, LOW);
    	digitalWrite(green_light_pin, LOW);
    	digitalWrite(yellow_light_pin, LOW);
    	break;
    case 3:
    	digitalWrite(red_light_pin, HIGH);
  		delay(2000);
    	digitalWrite(red_light_pin, LOW);
    	digitalWrite(green_light_pin, LOW);
    	digitalWrite(yellow_light_pin, LOW);
    	break;
    case 4:
    	digitalWrite(yellow_light_pin, HIGH);
  		delay(2000);
    	digitalWrite(red_light_pin, LOW);
    	digitalWrite(green_light_pin, LOW);
    	digitalWrite(yellow_light_pin, LOW);
    	break;
    case 5:
    	digitalWrite(yellow_light_pin, HIGH);
  		delay(2000);
    	digitalWrite(red_light_pin, LOW);
    	digitalWrite(green_light_pin, LOW);
    	digitalWrite(yellow_light_pin, LOW);
    	break;
    case 6:
    	digitalWrite(red_light_pin, HIGH);
  		delay(2000);
    	digitalWrite(red_light_pin, LOW);
    	digitalWrite(green_light_pin, LOW);
    	digitalWrite(yellow_light_pin, LOW);
    	break;
    case 7:
    	digitalWrite(red_light_pin, HIGH);
  		delay(2000);
    	digitalWrite(red_light_pin, LOW);
    	digitalWrite(green_light_pin, LOW);
    	digitalWrite(yellow_light_pin, LOW);
    	break;
    case 8:
    	digitalWrite(green_light_pin, HIGH);
  		delay(2000);
    	digitalWrite(red_light_pin, LOW);
    	digitalWrite(green_light_pin, LOW);
    	digitalWrite(yellow_light_pin, LOW);
    	break;
    case 9:
    	digitalWrite(yellow_light_pin, HIGH);
  		delay(2000);
    	digitalWrite(red_light_pin, LOW);
    	digitalWrite(green_light_pin, LOW);
    	digitalWrite(yellow_light_pin, LOW);
    	break;
    case 10:
    	digitalWrite(red_light_pin, LOW);
    	digitalWrite(green_light_pin, LOW);
    	digitalWrite(yellow_light_pin, LOW);
  		delay(2000);
    	break;
  }
  
}