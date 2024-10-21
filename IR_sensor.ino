int isobstaclePin=4;
int isobstacle=HIGH;
void setup() {
  pinMode(isobstaclePin,INPUT);
  Serial.begin(9600);
  
  
}

void loop() {
  isobstacle=digitalRead(isobstaclePin);
  if(isobstacle==LOW)
  {
    Serial.println("OBSTACLE!!");
  }
  else
  {
    Serial.println("Clear");
  }
  delay(500);
}
