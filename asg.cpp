#include<Arduino.h>
int a,b,c;
int z;
void assign(int z)
{
 digitalWrite(5, z);
}

void setup()
{
 pinMode(2,INPUT);
 pinMode(3,INPUT);
 pinMode(4,INPUT);
 pinMode(8,OUTPUT);
}

void loop()
{
 a = digitalRead(2);  
 b = digitalRead(3);  
 c = digitalRead(4);
 z=a||(!b&&c);
assign(z);
}
