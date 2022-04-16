#include <Arduino.h>
#include<ESP8266WiFi.h>
const char *ssid="Montero";
const char *password="Montero1";
void setup() {
  Serial.begin(115200);
  delay(10);

  WiFiMode(WIFI_AP);
  Serial.print("Iniciando conexion");
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
  Serial.print("Todo ok");
  delay(1000);
}