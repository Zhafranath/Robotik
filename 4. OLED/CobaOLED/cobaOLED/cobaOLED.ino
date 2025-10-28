

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

// Declaration for an SSD1306 display connected to I2C (SDA, SCL pins)
Adafruit_SSD1306 oled(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
Serial.begin(9600);
  oled.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  oled.setTextSize(1);
  oled.setTextColor(WHITE);
  delay(2000);
}

void loop() {
  oled.clearDisplay();
  oled.setCursor(0, 50);
  oled.println("HAIII");
  oled.setCursor(40, 50);
  oled.println("Nama Saya");
  oled.setCursor(90, 50);
  oled.println("NARUTO");
  oled.display();
  delay(2000);

}