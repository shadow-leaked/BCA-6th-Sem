#include <LiquidCrystal.h>

// LCD: RS, E, D4-D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Pins
const int gasSensorPin = A0;
const int ledPin = 7;

// Thresholds
const int GOOD = 200;
const int MODERATE = 400;

void setup() {
  pinMode(ledPin, OUTPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
}

void loop() {
  int gasLevel = analogRead(gasSensorPin);

  String status;
  if (gasLevel <= GOOD) {
    status = "Good";
    digitalWrite(ledPin, LOW);
  } else if (gasLevel <= MODERATE) {
    status = "Moderate";
    digitalWrite(ledPin, LOW);
  } else {
    status = "Bad";
    digitalWrite(ledPin, HIGH);
  }

  Serial.print("Gas: ");
  Serial.println(gasLevel);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Air: ");
  lcd.print(status);

  lcd.setCursor(0, 1);
  lcd.print("Value: ");
  lcd.print(gasLevel);

  delay(1000);
}
