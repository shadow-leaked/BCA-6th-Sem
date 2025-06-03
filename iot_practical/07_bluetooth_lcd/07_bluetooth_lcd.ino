#include <LiquidCrystal.h>
#include <SoftwareSerial.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
SoftwareSerial BT(8, 9);  // RX, TX

void setup() {
  lcd.begin(16, 2);
  lcd.print("Waiting Data...");
  BT.begin(9600);
}

void loop() {
  if (BT.available()) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Received:");

    String btData = "";
    while (BT.available()) {
      char c = BT.read();
      // Only add printable ASCII characters (32 to 126)
      if (c >= 32 && c <= 126) {
        btData += c;
      }
      delay(5);  // Slight delay to capture full string
    }

    lcd.setCursor(0, 1);
    lcd.print(btData);
  }
}
