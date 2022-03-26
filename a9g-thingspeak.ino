#include<string.h>
#include <WiFi.h>
#include <SPI.h>
#include <Wire.h>
#include <stdio.h>
#include <string.h>

#define TXD1 26
#define RXD1 25

String lognitude;
String latitude;


const String apiKey="QCS5V20CUAQOWTBG"; //API Key from thingsspeak.com
char buffer[85];
const unsigned long eventInterval = 20000;
unsigned long previousTime = 0;
String  showString="";

unsigned long timeCount;
#define DHTPIN 3    //D3
#define DHTTYPE DHT11 


void setup() {
    Wire.begin();
    Serial.begin(115200); 
    Serial2.begin(115200, SERIAL_8N1, RXD1, TXD1);
    optimizer();
    
    
    //String cmdString= "AT+HTTPGET=\"http://api.thingspeak.com/update.json?api_key=" + apiKey + "&field1=" + (String)lognitude +"&field2=" + (String)latitude + "&field3=0.0&field4=0.0" + "\"";
   // Serial2.println(cmdString);

}

void loop(){

  unsigned long currentTime = millis();
  gpskick();
  send_data();



while (Serial2.available()) {
    Serial.print(char(Serial2.read()));
  }
  
}
