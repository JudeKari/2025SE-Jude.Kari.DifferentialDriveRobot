#ifndef DIIFERENTIALDRIVEROBOT_H
#define DIIFERENTIALDRIVEROBOT_H

#include <Arduino.h>
#include <Servo.h>

class Servo
{
private:
  byte pin;
public:
  Servo () {}

  Servo(byte pin)
  {
    this->pin = pin;
  }

  void init()
  {
    pinMode(pin, OUTPUT);
  }

  void init(byte defaultState)
  {
    init();
    if (defaultState == 1){ 
    on();
  }
  else {
    off();
  }
}
void on()

}