#include <Servo.h>
int ServoPin=10;
Servo ServoDemo;





void setup() {
  // put your setup code here, to run once:
  ServoDemo.attach(ServoPin);

}

void loop() {
  // put your main code here, to run repeatedly:
  ServoDemo.write(0);
  delay(1000);
  ServoDemo.write(90);
  delay(1000);
  ServoDemo.write(180);
  delay(1000);
  

}
