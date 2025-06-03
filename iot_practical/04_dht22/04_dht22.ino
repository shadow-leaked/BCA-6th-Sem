#include <DHT.h>

// Define sensor type and pin
#define DHTPIN A0       // DHT22 data pin connected to A0
#define DHTTYPE DHT22   // DHT 22 (AM2302) sensor

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();

  Serial.println("DHT22 Sensor Initialization...");
  delay(2000); // Allow sensor to stabilize
}

void loop() {
  float temperature = dht.readTemperature(); // Read temperature in Celsius
  float humidity = dht.readHumidity();       // Read humidity in percentage

  if (isnan(temperature) || isnan(humidity)) {
    Serial.println("Sensor Error: Failed to read from DHT22 sensor.");
  } else {
    Serial.print("Temperature: ");
    Serial.print(temperature);
    Serial.println(" °C");

    Serial.print("Humidity: ");
    Serial.print(humidity);
    Serial.println(" %");
  }

  delay(2000); // Wait 2 seconds between readings
}