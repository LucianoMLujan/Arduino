#define red 11
#define blue 10
#define green 9

void setup()
{
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  for(int i=0; i<=6; i++){
    setColor(i);
    delay(2000);
  } 
}

void setColor(int numero) {
  switch(numero){
    case 0: //rojo
    	digitalWrite(red, HIGH);
    	digitalWrite(blue, LOW);
    	digitalWrite(green, LOW);
    	break;
    case 1: //verde
    	digitalWrite(red, LOW);
    	digitalWrite(blue, LOW);
    	digitalWrite(green, HIGH);
    	break;
    case 2: //azul
    	digitalWrite(red, LOW);
    	digitalWrite(blue, HIGH);
    	digitalWrite(green, LOW);
    	break;
    case 3: //amarillo
    	digitalWrite(red, HIGH);
    	digitalWrite(blue, LOW);
    	digitalWrite(green, HIGH);
    	break;
    case 4: //violeta
    	digitalWrite(red, HIGH);
    	digitalWrite(blue, HIGH);
    	digitalWrite(green, LOW);
    	break;
    case 5: //celeste
    	digitalWrite(red, LOW);
    	digitalWrite(blue, HIGH);
    	digitalWrite(green, HIGH);
    	break;
    case 6: //blanco
    	digitalWrite(red, HIGH);
    	digitalWrite(blue, HIGH);
    	digitalWrite(green, HIGH);
    	break;
    default: //rojo
    	digitalWrite(red, LOW);
    	digitalWrite(blue, LOW);
    	digitalWrite(green, LOW);
    	break;
  }
}