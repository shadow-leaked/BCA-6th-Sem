int ledPin = 13;
int buttonPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);  // Enable internal pull-up
}

void loop() {
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);  // Button pressed (LOW) → LED ON
  } else {
    digitalWrite(ledPin, LOW);   // Button not pressed → LED OFF
  }
}
