int buzzer=12;
void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  tone(buzzer,250,500);
  delay(1000);
  digitalWrite(buzzer,HIGH);
  delay(1000);
  digitalWrite(buzzer,LOW);
  delay(1000);
}
