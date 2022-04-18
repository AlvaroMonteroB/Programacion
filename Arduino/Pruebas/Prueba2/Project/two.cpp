#include<Arduino.h>
#include<ESP8266WiFi.h>
int cont=0;
String msg="";
bool complete;
//Este esp recibirá un mensaje serial y procederá a darnos aviso
void SerialEvent();
void setup(){
    Serial.begin(115200);
    pinMode(2,OUTPUT);
    digitalWrite(2,LOW);
    msg.reserve(20);
}


void loop(){
    
    if(complete){
        if (msg=="LedEn_")
        {
            digitalWrite(2,HIGH);
        }else if(msg=="LedOff_"){
            digitalWrite(2,LOW);
        }
        msg="";
        complete=false;
    }

   
}

void serialEvent(){
    char inChar;
    while(Serial.available()){
        inChar=Serial.read();
        msg+=inChar;
        if (inChar=='_')
        {
            complete=true;
        }
    Serial.print("Message read");
    }
    
}