// On most Arduino boards, the PWM function is available on pins 3, 5, 6, 9, 10, and 11.
#include <Servo.h>
#define SERVO_PIN 3

// Create a servo object
Servo myServo;

void setup() {
	myServo.attach(SERVO_PIN);
}

void loop() {
	// go 0 to 180, one degree at a time
	for (int i = 0; i < 180; i++) {
		myServo.write(i);
		delay(10);
	}
	// go 180 to 0, one degree at a time
	for (int i = 180; i > 0; i--) {
		myServo.write(i);
		delay(10);
	}
}
