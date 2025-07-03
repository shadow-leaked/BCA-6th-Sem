// Pin Definitions
const int gasSensorPin = A0;     // MQ-135 analog output to A0
const int redLedPin = 7;         // Red LED connected to D7
const int greenLedPin = 6;       // Green LED connected to D6
const int buzzerPin = 5;         // Buzzer connected to D5

const int gasThreshold = 400;    // Adjust based on your environment/testing

void setup() {
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(gasSensorPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  int gasLevel = analogRead(gasSensorPin);
  Serial.print("Gas Level: ");
  Serial.println(gasLevel);

  if (gasLevel > gasThreshold) {
    // Harmful gas detected
    digitalWrite(redLedPin, HIGH);
    digitalWrite(greenLedPin, LOW);
    digitalWrite(buzzerPin, HIGH);
  } else {
    // Air is clean
    digitalWrite(redLedPin, LOW);
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(buzzerPin, LOW);
  }

  delay(500);  // Delay for stability
}
