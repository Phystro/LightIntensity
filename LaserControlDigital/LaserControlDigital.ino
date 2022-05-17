
const int LASER = 9;

const int ON_TIME = 1;
const int OFF_TIME = 1;

void setup() {
	pinMode(LASER, OUTPUT);
}

void loop() {

	digitalWrite(LASER, HIGH);
	delay(ON_TIME);
	digitalWrite(LASER, LOW);
	delay(OFF_TIME);
}