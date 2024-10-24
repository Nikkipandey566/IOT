#include<wire.h>
#include<Liquid Crystal_I2C.h>
#include<DHT.h>
#define DHTPIN4
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHT TYPE);
Liquid Crystal_I2c lcd(0x27,16,2);

void setup() {
  Serial.begin(9600);
  delay(1000);
  dht.begin();
  lcd.init();
  lcd.backlight();
  lcd.set(Cursor(0,0));
  lcd.print("Temperature:");
  lcd.set Cursor(0,1);
  lcd.print("Humidity:");
}

void loop() {
  float h=dht.read Humidity();
  float t=dht.read Temperature();
  if (isnan(h)|| isnan(t)){
    Serial.println("failed to read from DHT Sensor!");
    lcd.setCursor(13,0);
    lcd.print ("");
    lcd.setCursor(9,1);
    lcd.print("");
    delay(2000);
    return;
  }
  Serial.print("Humidity:");
  Serial.print(h);
  Serial.print("%\t");
  Serial.print("Temperature:");
  Serial.print(t);
  Serial.println("*C");
  lcd.setCursor(13,0);
  lcd.print("");
  lcd.setCursor(13,0);
  lcd.print(t);
  lcd.setCursor(9,1);
  lcd.print("");
  lcd.setCursor(9,1);
  lcd.print(h);
  delay(2000);
  
}
