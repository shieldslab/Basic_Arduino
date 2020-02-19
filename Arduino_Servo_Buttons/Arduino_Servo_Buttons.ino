// On most Arduino boards, the PWM function is available on pins 3, 5, 6, 9, 10, and 11.
#include <Servo.h>
#define SERVO_PIN 3
#define UP_BTN 4
#define DN_BTN 5

// Create a servo object
Servo myServo;
int upState, dnState;
int servoPos = 0;

void setup() {
  myServo.attach(SERVO_PIN);
  pinMode(UP_BTN, INPUT_PULLUP);
  pinMode(DN_BTN, INPUT_PULLUP);
}

void loop() {
	upState = digitalRead(UP_BTN);
	dnState = digitalRead(DN_BTN);
	if(!upState && servoPos < 180)
		servoPos++;
	else if(!dnState && servoPos > 0)
		servoPos--;
    myServo.write(servoPos);
    delay(10);
}
