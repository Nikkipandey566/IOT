#include<DHT11.h>
DHT11 dht11(2);
void setup() {
 Serial.begin(9600);

}

void loop() {
  int temperature=0;
  int humidity=0;
  int result =dht11.readtemperature Humidoty(temperature,humidity);
  if(result==0){
    Serial.print("Temperature:");
    Serial.print(temperature);
    Serial.print("0c\tHumidity:");
    Serial.print(humidity);
    Serial.println("%");
   
  }
  else{
    Serial.println(DHT11::get Error String(result));
  }
}
