#include <LiquidCrystal.h>

// LCD pin connections: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Pins
const int gasSensorPin = A0;  // MQ135 analog output
const int ledPin = 7;         // Red LED for bad air

// Thresholds (tune based on environment)
const int goodThreshold = 200;
const int moderateThreshold = 400;

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

  lcd.setCursor(10, 0); // Status label on first row
  if (gasLevel <= goodThreshold) {
    lcd.print("Good   ");
    digitalWrite(ledPin, LOW);
  } else if (gasLevel <= moderateThreshold) {
    lcd.print("Moderate");
    digitalWrite(ledPin, LOW);
  } else {
    lcd.print("Bad    ");
    digitalWrite(ledPin, HIGH);
  }

  delay(1000); // 1s delay
}