 #include "Arduino.h"
 #include "Relay.h"

Relay::Relay(int pin){
  pinMode(pin,OUTPUT);
  _pin = pin;
};
bool Relay::getRelayState(){
  return digitalRead(_pin);
};
void Relay::setRelayOn(){
  digitalWrite(_pin, HIGH);
};
void Relay::setRelayOff(){
  digitalWrite(_pin, LOW);
};

void Relay::toggle(){
  if(digitalRead(_pin) == HIGH){
    digitalWrite(_pin,LOW);
  }
  else{
    digitalWrite(_pin,HIGH);
  }
}

 /*
// Pin definitions
#define RELAY_PIN 12

// Global variables and defines
const int timeInterval = 3000; 


void setup()   
{   
  pinMode(RELAY_PIN,OUTPUT); // RELAY PIN   
 digitalWrite(RELAY_PIN,HIGH); // Normally ON Only For Chanies Relay Module   
}   
void loop()    
{   
  digitalWrite(RELAY_PIN,LOW); // RELAY ON   
  Serial.print("Light ON");
  delay(timeInterval);   
  digitalWrite(RELAY_PIN,HIGH); // RELAY OFF   
  Serial.print("Light OFF");
  delay(timeInterval);   
}  
  */
