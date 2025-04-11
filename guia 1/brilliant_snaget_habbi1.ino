#define LED1_R 2
#define LED1_G 7
#define LED1_B 4
#define LED2_R 9
#define LED2_G 11
#define LED2_B 10
#define BUZZ 11

void setup()
{
   pinMode( LED1_R , OUTPUT );
   pinMode( LED1_B , OUTPUT );
   pinMode( BUZZ   , OUTPUT );
   pinMode( LED1_G , OUTPUT );
   pinMode( LED1_R , OUTPUT );
   pinMode( LED1_B , OUTPUT );
   pinMode( LED1_G , OUTPUT );
   
}

void loop()
{
  	digitalWrite( LED1_R , HIGH );
  
  // 0-255 escala
  	analogWrite(  LED2_R , 124 );
}