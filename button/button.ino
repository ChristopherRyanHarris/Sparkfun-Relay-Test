
/* Blink on button toggle */

/*
** Digital Pins
**   08 09 10 11 12 13
** Analog Pins
**   A0 A1 A2 A3 A4
*/

uint32_t RPin  = 11;
uint32_t RPins = 0;

uint32_t BPin  = A1;
uint32_t BPins = 0;

/* Macro to toggle pin */
#define TOGGLE(x, y) y = y == 1 ? 0 : 1; digitalWrite(x, y);

void setup()
{
  /* Define Pins */
  pinMode(RPin, OUTPUT);
  pinMode(BPin,  INPUT);

  Serial.begin( 9600  );

  /* Initialize Pins */
  digitalWrite(RPin, RPins); 
}

void loop() 
{
  BPins = digitalRead( BPin );
  if( BPins == HIGH )
  {
    Serial.print( "Bpin " );
    TOGGLE(RPin, RPins);
  }
  delay( 300 );
}





