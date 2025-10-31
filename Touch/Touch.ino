int Touch = 3;


void setup() {
  pinMode(Touch, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(Touch) == HIGH) {
    Serial.println("Menyala");
  } else {
    Serial.println("Mati");
  }

  delay(500);
}
