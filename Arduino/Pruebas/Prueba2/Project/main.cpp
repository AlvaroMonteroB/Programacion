#include <ESP8266WiFi.h>

//Este esp mandará un mensaje en comunicacion serial
void setup(void) {
 Serial.begin(115200);
}

void loop(void) {
 
Serial.print("LedEn_");
delay(2000);
Serial.print("LedOff_");
delay(2000);
  
  

}