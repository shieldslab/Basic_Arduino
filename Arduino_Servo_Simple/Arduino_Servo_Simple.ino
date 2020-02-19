// On most Arduino boards, the PWM function is available on pins 3, 5, 6, 9, 10, and 11.
#include <Servo.h>
#define SERVO_PIN 3

// Create a servo object
Servo myServo;

void setup() {
  myServo.attach(SERVO_PIN);
}

void loop() {
	// tell servo to go to zero, wait a second, then 180, repeat.
    myServo.write(0);
    delay(1000);
    myServo.write(180);
    delay(1000);
}
