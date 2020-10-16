const int trigPin = 10;
const int echoPin = 13;
const int relay = 8;
void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  float duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(2);
 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) * 0.0344;

  if (distance >= 400 || distance <= 2){
    Serial.print("Distance = ");
    Serial.println("Out of range");
  }
  else {
    Serial.print("Distance = ");
    Serial.print(distance);
    Serial.println(" cm");
     if(distance >=3 && distance <= 90){
      digitalWrite(relay, LOW);
      Serial.print("LAMP ON");
      }else{
      digitalWrite(relay, HIGH);
      Serial.print("LAMP OFF ");
      }
    delay(500);
  }
  
  delay(500);
}
