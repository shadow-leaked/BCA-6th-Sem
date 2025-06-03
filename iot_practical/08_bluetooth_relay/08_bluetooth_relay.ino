#include <SoftwareSerial.h>
#include <LiquidCrystal.h>

SoftwareSerial BT(8, 9); // D8 = TX to HC-05 RX (via voltage divider), D9 = RX from HC-05 TX
LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // LCD RS, E, D4-D7

const int ledPin = 7;
String input = "";

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); // Ensure LED is off

  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("Bluetooth Ready");

  Serial.begin(9600);
  BT.begin(9600);
}

void loop() {
  if (BT.available()) {
    char ch = BT.read();

    if (ch == '\n' || ch == '\r') {
      if (input.length() > 0) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Received:");
        lcd.setCursor(0, 1);
        lcd.print(input);

        if (input == "1") {
          digitalWrite(ledPin, HIGH);
        } else if (input == "0") {
          digitalWrite(ledPin, LOW);
        }

        Serial.println("Received: " + input);
        input = ""; // Reset for next command
      }
    } else {
      input += ch;
    }
  }
}
