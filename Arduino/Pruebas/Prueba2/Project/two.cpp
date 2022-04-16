#include<Arduino.h>
#include<ESP8266WiFi.h>
void setup(){
    Serial.begin(115200);

}
int cont=0;
String msg,conf,msg2;

void loop(){
if (Serial.available()>0)
{   
    while (Serial.available()>0)
    {
        msg+=char(Serial.read());
    }
    delay(18);
    while (Serial.available()>0)
    {
        conf+=char(Serial.read());
    }
    while(Serial.available()>0){
        msg2+=char(Serial.read());
    }
    

    for (int i = 0; i < 8; i++)
    {
        if (msg[i]==msg2[i])
        {
            cont++;
        }
        
    }
    cont==8?Serial.print("Mensaje exitoso"):Serial.print("No se pudo leer el mensaje");
    
    
}

   
}