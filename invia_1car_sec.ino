#include <Process.h> 

#define LEDPIN 12

char c = 'a';
//byte puntatore = 0;

void setup() 
{
    Bridge.begin();
    Serial.begin(115200);
    pinMode(LEDPIN, OUTPUT); 
    digitalWrite(LEDPIN, LOW);
}

void loop() 
{
    Serial.print(c);
    delay(1000);
}
