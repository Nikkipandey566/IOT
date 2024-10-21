void setup() {
  pinMode(5,OUTPUT);
  pinMode(16,OUTPUT);
  
}

void loop() {
  digitalWrite(5,HIGH);
  digitalWrite(16,LOW);
  delay(900);
  digitalWrite(5,LOW);
  digitalWrite(16,HIGH);
  delay(500);
}
