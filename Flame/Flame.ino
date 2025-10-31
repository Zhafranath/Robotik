int Flame = 3;


void setup() {
  pinMode(Flame, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(Flame) == HIGH) {
    Serial.println("Menyala");
  } else {
    Serial.println("Mati");
  }

  delay(500);
}
