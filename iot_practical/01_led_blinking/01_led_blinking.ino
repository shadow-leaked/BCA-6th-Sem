// Pin number where LED is connected
int ledPin = 13;

void setup() {
  // Set pin 13 as OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);  // Turn LED ON
  delay(1000);                 // Wait for 1 second (1000 milliseconds)

  digitalWrite(ledPin, LOW);   // Turn LED OFF
  delay(1000);                 // Wait for 1 second
}
