#define LED_PIN 3

void setup() {
	Serial.begin(9600);
	pinMode(LED_PIN, OUTPUT);
}

void loop () {
	digitalWrite(LED_PIN, HIGH);
	Serial.println("On");
	delay(1000);
	digitalWrite(LED_PIN, LOW);
	Serial.println("Off");
	delay(1000);
}
