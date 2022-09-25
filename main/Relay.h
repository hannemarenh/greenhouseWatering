#include "Arduino.h"
#ifndef Relay_h
#define Relay_h
class Relay{
  public:
    Relay(int pin);
    bool getRelayOn();
    void setRelayOn();
    void setRelayOff();
  private:
    int _pin; 
};

#endif
