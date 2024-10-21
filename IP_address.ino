#include<ESP8266wifi.h>
const char*ssid=" ";
const char*Password=" ";
void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println();
  Serial.print("connecting to");
  Serial.println(ssid);
  wifi.Mode(WIFI_STA);
  wifi.begin(ssid,Password);
  while(wifi.status()!=WL_CONNECTED){
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("wifi connected");
  Serial.println("IP address:");
  Serial.println(wifi.localIP());

}

void loop() {

}
