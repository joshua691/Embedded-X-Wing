#include <ESP32Servo.h>
// #include <Stepper.h>

#define SERVO_PIN1 15
#define SERVO_PIN2 2
// #define STEPPER_PIN
#define POT_PIN A0

Servo servo1, servo2;

// const int stepsPerRevolution = 2048;

// Stepper mystepper = Stepper(stepsPerRevolution,8,9,10,11);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  servo1.attach(SERVO_PIN1);
  servo2.attach(SERVO_PIN2);
  servo1.write(0);
  servo2.write(0);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i = 0; i <= 100; i+=5) {
    servo1.write(i);
    servo2.write(i);
    delay(25);
  }
  delay(2000);
  for(int i = 100; i >= 0; i-=5) {
    servo1.write(i);
    servo2.write(i);
    delay(25);
  }
  delay(2000);
}
