#include <Arduino.h>
#include <Servo.h>
#include <DiiferentailDriveRobot.h>



#define PINR 9
#define PINL 11
int signalPinL = 12;
int signalPinR = 13;

Servo myservoL;
Servo myservoR;

void setup() {
  Serial.begin(9600);
  pinMode(signalPinL, INPUT);
  pinMode(signalPinR, INPUT);

  // 2300 = forward | 700 = backward | 1500 = stop
  myservoL.attach(PINL, 700, 2300);
  myservoR.attach(PINR, 2300, 700);//flipped because motor is flipped
}

void loop() {
  // drive forward
  if(1 == digitalRead(signalPinL && signalPinR)) {
    myservoL.writeMicroseconds(2300);
    myservoR.writeMicroseconds(2300);
    delay(20);
  
  
  // turn left
  } else if(1 == digitalRead(signalPinL) && 0 == digitalRead(signalPinR)) {
    myservoL.writeMicroseconds(2300);
    myservoR.writeMicroseconds(1500);
    delay(20);

  // turn right
  } else if(0 == digitalRead(signalPinL) && 1 == digitalRead(signalPinR)) {
    myservoL.writeMicroseconds(1500);
    myservoR.writeMicroseconds(2300);
    delay(20);

  // stop
  } else if(0 == digitalRead(signalPinL) && 0 == digitalRead(signalPinR)) {
    myservoL.writeMicroseconds(1500);
    myservoR.writeMicroseconds(1500);
    delay(20);
  }

}
