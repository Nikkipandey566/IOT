#include<ESP8266 WiFi.h>
#include<DHT11.h>
#include<ThingSpeak.h>
const char * ssid=" ";
const char * Pass=" ";
DHT11 dht11(2);
WiFi client client; 
long mychannel Number=   ;
const char mywrite APIKey[]=" ";

void setup() {
 Serial.begin(9600);
 WiFi.begin (ssid,Pass);
 while (WiFi.status()!=WL_CONNECTED)
 {
  delay(200);
  Serial.print(".......");
 }
 Serial.println();
 Serial.println("Node MCU is Connected");
 Serial.println(WiFi.localIP());
 dht11.begin();
 ThingSpeak.begin(client);

}

void loop() {
  float h= dht11.read Humidity();
  float f= dht11.read Temperature();
  Serial.println("Temperature:" + (String)t);
  Serial.println("Humidity:" + (String) h);
  ThingSpeak.write field(my channelNumber,1,t,mywriteAPI Key);
  ThingSpeak.write field(my channelNumber,2,h,mywriteAPI Key);
  delay(2000);
}
