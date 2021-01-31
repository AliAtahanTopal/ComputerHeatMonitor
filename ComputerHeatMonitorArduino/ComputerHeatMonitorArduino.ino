#include <SoftwareSerial.h>

SoftwareSerial hc06(10,11);

int sensorPin = A0;
float temp;
char input;

void setup() {
  Serial.begin(9600);
  hc06.begin(9600);
}

void loop() {
  temp = analogRead(sensorPin);
  temp = (5.0 * temp * 1000.0) / (1024 * 10);
  Serial.println(temp);
  hc06.println(temp);
  delay(120000);
}
