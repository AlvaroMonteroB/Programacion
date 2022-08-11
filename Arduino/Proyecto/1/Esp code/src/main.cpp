#include <Arduino.h>
bool flag;
String msg;
void setup() {
  Serial.begin(115200);
}

void loop() {
  if (flag)
  {
    if (msg=="Mensaje_")
    {
      delay(20);
      Serial.print("Recibido_");
    }
    delay(2000);
  }
  
}

void serialEvent(){
  char buffer;
  while (Serial.available())
  {
   buffer=Serial.read();
   msg+=buffer;
   if (buffer=='_')
   {
     flag=true;
   }
    
  }
  
}