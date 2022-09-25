#include "Arduino.h"
#ifndef Led_h
#define Led_h

class Led {
  public:
    Led(int pin);
    void toggle();
    
    void turnOn();
    void turnOff();
  private:
    int _pin;   
};

#endif
