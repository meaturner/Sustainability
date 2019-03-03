#include <stdio.h>

int led = 4;
int time = 100;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(time); //Aproximately 10% duty cycle @ 1KHz
  digitalWrite(led, LOW);
  delay(1000- time);
}

