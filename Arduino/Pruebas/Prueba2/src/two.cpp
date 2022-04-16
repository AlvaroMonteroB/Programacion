#include<Arduino.h>
#include<ESP8266WiFi.h>
void setup(){
    Serial.begin(115200);

}
int cont;
char msg[8],conf[13],msg2[8];
void loop(){
if (Serial.available()>0)
{   
    for (int i = 0; i < 20; i++)
    {
        msg[i]=char(Serial.read());
    }
    for (int i = 0; i < 13; i++)
    {
        conf[i]=char(Serial.read());
    }
    for (int i = 0; i < 8; i++)
    {
        msg2[i]=char(Serial.read());
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