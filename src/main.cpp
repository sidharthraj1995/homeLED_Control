/**============================================
 *          Control LED using ESP8266
 *=============================================**/

#include <Arduino.h>



#define ledPin 2       // ONBOARD LED

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  Serial.printf("LED PIN: %d set to HIGH\n", ledPin);
  delay(250);
  digitalWrite(ledPin, LOW);
  Serial.printf("LED PIN: %d set to LOW\n", ledPin);
  delay(250);
}