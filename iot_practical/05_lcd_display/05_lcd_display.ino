#include <DHT.h>
#include <LiquidCrystal.h>

// Define pins
#define DHTPIN A0         // DHT22 data pin connected to A0
#define DHTTYPE DHT22     // DHT22 sensor type

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);         // Initialize LCD (16 columns, 2 rows)
  lcd.setCursor(0, 0);
  lcd.print("Initializing...");
  dht.begin();
  delay(2000);              // Wait for sensor to stabilize
}

void loop() {
  float temp = dht.readTemperature();   // Read temperature (°C)
  float hum = dht.readHumidity();       // Read humidity (%)

  lcd.clear();

  if (isnan(temp) || isnan(hum)) {
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error");
  } else {
    lcd.setCursor(0, 0);
    lcd.print("T: ");
    lcd.print(temp);
    lcd.print((char)223);   // Degree symbol
    lcd.print("C");

    lcd.setCursor(0, 1);
    lcd.print("H: ");
    lcd.print(hum);
    lcd.print("%");
  }

  delay(2000);  // Wait before next reading
}
