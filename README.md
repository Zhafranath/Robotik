# 🚀 ESP32 Basic Code  
📚 Kumpulan Contoh Program Dasar untuk Pembelajaran Mikrokontroler

Selamat datang di repository **ESP32 Basic Code** 🎉  
Repository ini berisi kumpulan **kode .ino** untuk menguji berbagai **komponen elektronik** menggunakan **ESP32**, 
cocok untuk pelajar SMP/SMA hingga pemula mikrokontroler.

Tujuan project ini:
✅ Mempermudah pembelajaran mikrokontroler  
✅ Mengenalkan cara kerja tiap sensor/aktuator  
✅ Menjadi dasar menuju project IoT & Robotik  

---

## 🔌 Panduan Koneksi Komponen

Berikut daftar komponen dan koneksi ke ESP32:

| No | Komponen | Jumlah Pin | Koneksi ke ESP32 | Catatan |
|---|----------|------------|----------------|---------|
| 1 | 💡 LED | 1 pin signal + GND | Signal → GPIO(xx), GND → GND | Gunakan resistor |
| 2 | 🔘 Push Button | 2 pin | Button → GPIO(xx), GND → GND | Gunakan `INPUT_PULLUP` |
| 3 | 🔔 Buzzer | 2 pin | VCC → GPIO(xx), GND → GND | Aktif = HIGH |
| 4 | 📏 Ultrasonic HC-SR04 | 4 pin | Trig → GPIO(xx), Echo → GPIO(xx) | VCC = 5V |
| 5 | ⚙️ Servo SG90/MG90S | 3 pin | Signal → GPIO(xx) | Disarankan PSU eksternal |
| 6 | 🖥️ LCD I2C 16x2 / 20x4 | SDA, SCL | SDA → 21, SCL → 22 | Alamat umum: 0x27 |
| 7 | 🔢 Keypad 4x4 | 8 pin (R1–R4, C1–C4) | R1–R4: 19,18,5,17; C1–C4: 16,4,0,2 | |
| 8 | 🌡️ DHT22 | 3 pin | Data → GPIO 14 | VCC = 3.3V |
| 9 | 🔥 Flame Sensor | 3 pin | OUT → GPIO(xx) | Bisa digital/analog |
|10 | 📶 IR Obstacle Sensor | 3 pin | OUT → GPIO(xx) | Untuk line follower |
|11 | 👆 Touch Sensor | 3 pin | OUT → GPIO(xx) | Tahan sentuhan |
|12 | 🖥️ OLED SSD1306 | SDA, SCL | SDA → 21, SCL → 22 | Alamat: 0x3C |
|13 | 🔄 Rotary Encoder | CLK, DT, SW | CLK → GPIO(xx), DT → GPIO(xx) | Tombol opsional |
|14 | 📡 WiFi Connect | Software only | SSID & Pass di `const char* ssid` | 2.4 GHz Only |

> 📌 Catatan: Pin bertanda **xx** berarti bisa diubah sesuai kebutuhan project.  

---
