#include <ESP8266WiFi.h>


void setup(void) {
 Serial.begin(115200);

}

void loop(void) {
  char message[8]={'p','r','o','g','r','a','m','a'};
 Serial.print(message);
 Serial.print("confirmacion");
 Serial.print(message);
 delay(10000);
  
  

}