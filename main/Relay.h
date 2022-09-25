#include "Arduino.h"
#ifndef Relay_h
#define Relay_h
class Relay{
  public:
    Relay(int pin);
    bool getRelayState();
    void setRelayOn();
    void setRelayOff();
    void toggle();
  private:
    int _pin; 
};

#endif
