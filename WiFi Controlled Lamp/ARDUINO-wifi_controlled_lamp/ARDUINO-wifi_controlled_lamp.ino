int ledPin = 8;

int relay = 9;
void setup() {
pinMode(ledPin, INPUT);
pinMode(relay, OUTPUT);
Serial.begin(9600);
Serial.println("Printing serial comms");
}

void loop() {
  int state = digitalRead(ledPin);
  if(state == 0){
    digitalWrite(relay,HIGH);
  }
  if(state == 1){
    digitalWrite(relay,LOW);
  }
  Serial.println(state);
    Serial.println(state);

  delay(100);

}
