#include <Arduino.h>

// put function declarations here:
int id[] = {13 ,12 ,14 ,27 ,26 ,25 };

void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 6; i++){
    pinMode(id[i],OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i < 6; i++ )
  {
    digitalWrite(id[i] , HIGH);
    delay(500);
    digitalWrite(id[i] , LOW);
  }
  for(int i = 5;i > -1;i--)
  {
    digitalWrite(id[i] , HIGH);
    delay(500);
    digitalWrite(id[i] , LOW);
  }
}

// put function definitions here:

