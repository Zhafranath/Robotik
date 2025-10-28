#include "DHT.h"

#define DHTPIN 21
#define DHTTYPE DHT11  // Ganti ke DHT22 jika pakai sensor DHT22

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  delay(2000); // Delay antar pembacaan

  float suhu = dht.readTemperature();    // dalam Celcius
  float kelembaban = dht.readHumidity(); // dalam %

  if (isnan(suhu) || isnan(kelembaban)) {
    Serial.println("Gagal membaca dari sensor DHT!");
    return;
  }

  Serial.print("Suhu: ");
  Serial.print(suhu);
  Serial.print(" °C\t");
  Serial.print("Kelembaban: ");
  Serial.print(kelembaban);
  Serial.println(" %");
}
