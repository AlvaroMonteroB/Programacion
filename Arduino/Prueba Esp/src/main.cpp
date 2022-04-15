#include <Arduino.h>
#include<ESP8266WiFi.h>
const char *ssid="ssid";
const char *password="password";
void setup() {
  Serial.begin(115200);
  delay(10);

  WiFiMode(WIFI_AP);
  while (!WiFi.softAP(ssid,password))
  {
    Serial.print(".");
    delay(100);

  }
  Serial.print("Iniciando AP");
  Serial.print(ssid);
  Serial.print("Ip address:\t");
  Serial.println(WiFi.softAPIP());
  
}

void loop() {
  // put your main code here, to run repeatedly:
}