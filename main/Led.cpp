#include "Arduino.h"
#include "Led.h"
Led::Led(int pin){
  pinMode(pin,OUTPUT);
  _pin = pin;
};

void Led::turnOn(){
  digitalWrite(_pin, HIGH);
};

void Led::turnOff(){
  digitalWrite(_pin, LOW);
};

void Led::toggle(){
  if(digitalRead(_pin) == HIGH){
    digitalWrite(_pin,LOW);
  }
  else{
    digitalWrite(_pin,HIGH);
  }
};
