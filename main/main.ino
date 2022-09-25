 #include "Led.h"
 #include "Button.h"
 #include "Relay.h"
 
Relay relay(12);
Led red(10);
Button turnOn(2);
Button turnOff(3);
bool powerOn = false;
bool waterOn = false;
unsigned long previousMillis = 0; // will store last time LED was updated
unsigned long currentMillis;
const long timeOn = 1000; //[ms] time with light on
const long timeOff = 2000; //[ms] time with light off

void setup()   
{   
  Serial.begin(9600);
}

void loop()    
{   
  while(powerOn){
    currentMillis = millis();
    if(waterOn && (currentMillis - previousMillis >= timeOn)){
      previousMillis = currentMillis;
      waterOn=false;
      red.turnOff();
      relay.setRelayOff();
    }
    else if(!waterOn && (currentMillis - previousMillis >= timeOff)){
      previousMillis = currentMillis;
      red.turnOn();
      relay.setRelayOn();
      waterOn=true;
    }
    if(turnOff.isClicked()){
      Serial.println("turn off");
      powerOn = false;
      waterOn=false;
      relay.setRelayOff();
      red.turnOff();
    }
  }
  while(!powerOn){
    if(turnOn.isClicked()){
      Serial.println("turn on");
      currentMillis = millis();
      previousMillis = currentMillis;
      powerOn = true;
      waterOn=true;
      relay.setRelayOn();
      red.turnOn();
    }
  }
}  
