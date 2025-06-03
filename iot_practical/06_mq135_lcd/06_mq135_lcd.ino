#include <LiquidCrystal.h>

// Initialize LCD: RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int mq135Pin = A3;       // Analog pin connected to MQ135 AOUT
int airQuality = 0;

void setup() {
  lcd.begin(16, 2);              // Set up the LCD's number of columns and rows
  lcd.print("Air Quality");      // Print initial message
  delay(1000);
  lcd.clear();
}

void loop() {
  airQuality = analogRead(mq135Pin);  // Read analog value from MQ135

  lcd.setCursor(0, 0);
  lcd.print("AQ Value: ");
  lcd.print(airQuality);         // Show the value on LCD

  // Optional status display
  lcd.setCursor(0, 1);
  if (airQuality > 400) {
    lcd.print("Status: Bad Air  ");
  } else if (airQuality > 200) {
    lcd.print("Status: Moderate ");
  } else {
    lcd.print("Status: Good     ");
  }

  delay(2000);  // Wait 2 seconds before next reading
}
