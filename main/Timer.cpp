#include "Arduino.h"
#include "Timer.h"

Timer::Timer(unsigned long timeOn, unsigned long timeOff){
  _timeOn = timeOn;
  _timeOff = timeOff;
}
