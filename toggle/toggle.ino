
/* Toggle 2 pins */

/*
** Digital Pins
**   08 09 10 11 12 13
** Analog Pins
**   A0 A1 A2 A3 A4
*/

uint32_t RPin1  = A0;
uint32_t RPin1s = 0;

uint32_t RPin2  = A1;
uint32_t RPin2s = 0;

  uint32_t flag = 0;
  
/* Macro to toggle pin */
#define TOGGLE(x, y) y = y == HIGH ? LOW : HIGH; digitalWrite(x, y);

void setup()
{
  /* Define Pins */
  pinMode(RPin1, OUTPUT);
  pinMode(RPin2, OUTPUT);
  pinMode(A3, OUTPUT);

  /* Initialize Pins */
  digitalWrite(RPin1, RPin1s);
  digitalWrite(RPin2, RPin2s); 
  digitalWrite( A3, HIGH );

  Serial.begin( 9600 );
}

void loop() 
{
  /* Delay */
  delay( 1000 );

  
  /* Toggle Pins */
  if( flag == 1 )
  {
    digitalWrite( RPin1, LOW );
    digitalWrite( RPin2, LOW );
    flag = 0;
  }
  else
  {
    digitalWrite( RPin1, HIGH );
    digitalWrite( RPin2, HIGH );
    flag = 1;
  }
  //TOGGLE(RPin1, RPin1s);
  //TOGGLE(RPin2, RPin2s);
}
