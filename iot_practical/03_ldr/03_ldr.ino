int ldrPin = A0;       // LDR connected to analog pin A0
int ledPin = 8;        // LED connected to digital pin 8
int threshold = 500;   // Adjust this threshold based on light conditions

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  // For debugging
}

void loop() {
  int lightValue = analogRead(ldrPin);  // Read LDR value

  Serial.print("LDR Value: ");
  Serial.println(lightValue);

  if (lightValue < threshold) {
    digitalWrite(ledPin, HIGH);  // It's dark → turn ON LED
  } else {
    digitalWrite(ledPin, LOW);   // It's bright → turn OFF LED
  }

  delay(500);
}
