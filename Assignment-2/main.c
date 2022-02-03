#include <Arduino.h>

int U=2,V=3,W=4;
int output;

void setup()
{
pinMode(U, INPUT);
pinMode(V, INPUT);
pinMode(W, INPUT);
pinMode(13, OUTPUT);

}
void loop()
{int x=digitalRead(U);
 int y=digitalRead(V);
 int z=digitalRead(W);
        
        output=((!(x))||y) & ((!(y))||(!(z)));

if(output==1)
digitalWrite(13,HIGH);
else
digitalWrite(13,LOW);

}

/*OUTPUT
0 0 0  1
 0 0 1  1
 0 1 0  0
 0 1 1  0
 1 0 0  1
 1 0 1  0
 1 1 0  0
 1 1 1  1
 */

