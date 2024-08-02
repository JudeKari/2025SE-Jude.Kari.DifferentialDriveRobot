#include <Arduino.h>
#include <Servo.h>

#define PINR A5
#define PINL A4
Servo myservo;
void setup() {
  myservo.attach(PIN, 700, 2300);
  myservo.attach(PIN, 700, 2300);
}

void loop() {
  myservo.writeMicroseconds(2300);
  delay(10);
}
