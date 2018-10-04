#include<Servo.h>
Servo lid;
int analogPin=3;
int servoPin=9;
int data=0;
char userInput;

void setup() {
Serial.begin(9600);
lid.attach(servoPin);
}

void loop() {
  if(Serial.available()>0){
    userInput=Serial.read();
    if(userInput=='g'){
      lid.write(30);
      data=analogRead(analogPin);
      Serial.println(data);
    }
    
  }
}
