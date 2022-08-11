#include <Arduino.h>
String msg;
bool flag;
void serialEvent();
void setup() {
  pinMode(13,OUTPUT);
  Serial.begin(115200);
}

void loop() {
  Serial.print("Mensaje_");
  if (flag)
  {
    if(msg="Recibido_"){
      digitalWrite(13,HIGH);
      delay(400);
      digitalWrite(13,LOW);
      delay(1800);
    }
  }

  
  
}

void serialEvent(){
  char aux;
  while(Serial.available()){
    aux=Serial.read();
    if(Serial.read()=='_'){
      flag=true;
    }
    msg+=aux;
  }
}