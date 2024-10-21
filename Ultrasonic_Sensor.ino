const int trigPin = 16;
const int echoPin = 5;
long duration;
float distanceCm;
float distanceInch;

const float SOUND_VELOCITY = 0.0343; 
const float CM_TO_INCH = 0.393701;    

void setup() {
  Serial.begin(9600);               
  pinMode(trigPin, OUTPUT);          
  pinMode(echoPin, INPUT);          
}

void loop() {
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  
  duration = pulseIn(echoPin, HIGH);

  
  distanceCm = (duration * SOUND_VELOCITY) / 2;
  distanceInch = distanceCm * CM_TO_INCH;

  
  Serial.print("Distance (cm): ");
  Serial.println(distanceCm);
  Serial.print("Distance (inch): ");
  Serial.println(distanceInch);

  
  delay(1000);
}
