// Blink-KAI

#include <Arduino.h>

#define LED_PIN LED_BUILTIN
// #define LED_PIN 30  // Arduino Pro Micro
// #define LED_PIN 1  // Digispark
// #define LED_PIN 8  // Seeed XIAO ESP32C3
// #define LED_PIN 2  // UIAPduino Pro Micro CH32V003
// #define LED_PIN PC1 // CH32V003
// #define LED_PIN 1

#define LED_ON HIGH
#define LED_OFF LOW

#define LED_DURATION1 100
#define LED_DURATION2 1000
#define LED_WAIT 100

void setup() {
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LED_OFF);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);
  delay(LED_DURATION1);
  digitalWrite(LED_PIN, LOW);
  delay(LED_WAIT);

  digitalWrite(LED_PIN, HIGH);
  delay(LED_DURATION2);
  digitalWrite(LED_PIN, LOW);
  delay(LED_WAIT);
}
