 #include "Led.h"
 #include "Button.h"
 

Led red(10);
Button button(11);

 void setup()   
{   
  Serial.begin(9600);
  }
void loop()    
{   
  if(button.isClicked()){
    red.toggle();
  }
}  
