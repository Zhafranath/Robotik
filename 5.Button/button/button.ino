int buttonPin = 3;


void setup() {
  pinMode(buttonPin, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    Serial.println("Tombol ditekan!");
  } else {
    Serial.println("Tombol tidak ditekan.");
  }

  delay(500);
}
