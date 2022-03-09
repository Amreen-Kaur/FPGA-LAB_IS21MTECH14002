#include <avr/io.h>
#include <util/delay.h>

int main (void)
{
 DDRD   |= 0b00000000;

 DDRB   |= ((1 << DDB5));

 while (1)
 {

 int i = PIND;
 int x,y,z,a,b,c,output;
	   
     z= i & 0b00000100;
     y= i & 0b00001000;
     x= i & 0b00010000;
	
	a= (!(!x && y ));
      b= (!(y && !z));
      c= (!(x && !y && z));
      output=(!(!((!(!(a && b))) && (c))));
         
if(output==1)
PORTB = ((1 <<  PB5));
else
PORTB = ((0 <<  PB5));

 }
  /* . */
  return 0;
}

