#define LED_PIN 3

int counter = 0;

void setup() {
	Serial.begin(9600);
	pinMode(LED_PIN, OUTPUT);
}

void loop () {
	if(counter <= 10) {
		digitalWrite(LED_PIN, HIGH);
		Serial.println(counter);
		delay(500);
		digitalWrite(LED_PIN, LOW);
		delay(500);
		counter ++;
	}
}
