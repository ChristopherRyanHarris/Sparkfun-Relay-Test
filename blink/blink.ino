
/* Blink on timer */

/*
** Digital Pins
**   08 09 10 11 12 13
** Analog Pins
**   A0 A1 A2 A3 A4
*/
int Pin  = 10;
int flag = 0;

/* Macro to toggle pin */
#define TOGGLE(x, y) y = y == HIGH ? LOW : HIGH; digitalWrite(x, y);

void setup()
{
  /* Initialize Pins */
  pinMode(Pin, OUTPUT);
  digitalWrite( Pin, LOW );

  Serial.begin( 9600 );
}

void loop() 
{
  /* Delay */
  delay( 2000 );

  /* Toggle Pins */
  if( flag == 1 )
  {
    //digitalWrite( Pin, LOW );
    //flag = 0;
    TOGGLE( Pin, flag );
  }
  else
  {
    //digitalWrite( Pin, HIGH );
    //flag = 1;
    TOGGLE( Pin, flag );
  }
  //TOGGLE(RPin1, RPin1s);
  //TOGGLE(RPin2, RPin2s);
}
