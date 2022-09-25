#ifndef Button_h
#define Button_h
#include "Arduino.h"

class Button {
  public:
    Button(int pin);
    bool isClicked();
  private:
    int _pin;
    bool _previousState;
};
#endif
