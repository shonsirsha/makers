#include <FirebaseArduino.h>
#include <ESP8266WiFi.h>

#define FIREBASE_HOST "SOME_FIREBASE_HOST"
#define FIREBASE_AUTH "SOME_FIREBASE_AUTH"
#define WIFI_SSID "SOME_WIFI_SSID"
#define WIFI_PASSWORD "SOME_WIFI_PASSWORD"
const int ledIndicatorPin = 16;
void setup() {
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while(WiFi.status() != WL_CONNECTED){
    Serial.print(".");
    delay(500);
   }

   Serial.println();
   Serial.print("Connected!");
   Serial.println(WiFi.localIP());
   Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
   pinMode(ledIndicatorPin, OUTPUT);
}

void loop() {
  int num = Firebase.getFloat("number");
  if(num == 0){
    digitalWrite(ledIndicatorPin, LOW);
  }else if(num == 1){
    digitalWrite(ledIndicatorPin, HIGH);
  }
  delay(600);
}
