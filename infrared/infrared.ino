int ir = 3;


void setup() {
  pinMode(ir, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(ir) == LOW) {
    Serial.println("Menyala");
  } else {
    Serial.println("Mati");
  }

  delay(500);
}
