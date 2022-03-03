#include <Arduino.h>

int X=2,Y=3,Z=4;
int output;

void setup()
{
pinMode(X, INPUT);
pinMode(Y, INPUT);
pinMode(Z, INPUT);
pinMode(13, OUTPUT);
}

void loop()
{int x=digitalRead(X);
 int y=digitalRead(Y);
 int z=digitalRead(Z);
        int a= (!(!x && y ));
        int b= (!(y && !z));
        int c= (!(x && !y && z));
        output=(!(!((!(!(a && b))) && (c))));
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

