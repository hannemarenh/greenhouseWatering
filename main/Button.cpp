#include "Arduino.h"
#include "Button.h"

Button::Button(int pin){
  pinMode(pin, INPUT);
  _pin = pin;
};


bool Button::isClicked(){
  bool currentState = digitalRead(_pin);
  // State goes from LOW to HIGH (ie button pressed)
  if(!_previousState && currentState){
    _previousState=true;
    return true;
  }
  // State goes from HIGH to LOW (ie button released)
  else if(_previousState && !currentState){
    _previousState=false;
    return false;
  }
  return false;
};
