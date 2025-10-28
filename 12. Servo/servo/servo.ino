#include <ESP32Servo.h>
Servo myservo;
int position;
void setup()
{
  Serial.begin(9600);
  myservo.attach(5);// servo ada di pin 5
}

void loop(){
  //   if (position==0) {
  //  Serial.println("ini Bergerak kearah 150 derajat");
  //   for(position=0; position<150; position+=15) {
  //     myservo.write(position);
  //     delay(1000);
  //   }
  // }
  // else {
  //  Serial.println("ini Bergerak kearah 0 derajat");
  //   for(position=165; position>=60; position-=15) {
  //     myservo.write(position);
  //     delay(1000);
  //     }
  //     position = 0; //reset
  //   }

  myservo.write(0);
  Serial.println("ini 0");
  delay(100);
  myservo.write(90);
  Serial.println("ini 90");
  delay(500);
  myservo.write(180);
  Serial.println("ini 180");
  delay(500);
}
