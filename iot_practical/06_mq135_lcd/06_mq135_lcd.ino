#include <LiquidCrystal.h>

// LCD pin connections: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Pin definitions
const int gasSensorPin = A0;  // MQ135 analog output
const int ledPin = 7;         // LED for alert

const int gasThreshold = 400; // Threshold for harmful gas

void setup() {
  pinMode(ledPin, OUTPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);

  lcd.setCursor(0, 0);
  lcd.print("Air Quality:");
}

void loop() {
  int gasLevel = analogRead(gasSensorPin);
  Serial.print("Gas Level: ");
  Serial.println(gasLevel);

  lcd.setCursor(0, 1);
  lcd.print("Value: ");
  lcd.print(gasLevel);
  lcd.print("    "); // Clear old digits

  if (gasLevel > gasThreshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000); // 1 second delay between readings
}