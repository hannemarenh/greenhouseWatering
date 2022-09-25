#include "Arduino.h"
#ifndef Timer_h
#define Timer_h

class Timer{
  public:
    Timer(unsigned long timeOn, unsigned long timeOff);
  private:
    unsigned int _currentTime;
    unsigned long _previousMillis = 0; // will store last time LED was updated
    unsigned long _timeOn; //[ms] time with light on
    unsigned long _timeOff; //[ms] time with light off
};

#endif
