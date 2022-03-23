/*
*
* Laser Emitter KY-008
*
*/

const int LASER = 9;
const int LDR = A0;

const int MIN = 0;
const int MAX = 100;

double analogValues;
double asilimia;

void setup() {

	Serial.begin(9600);

	pinMode(LASER, OUTPUT);
	pinMode(LDR, INPUT);

	digitalWrite(LASER, HIGH);
}


void loop() {

	analogValues = analogRead(LDR);

	asilimia = map(analogValues, 0, 1023, MIN, MAX);

	Serial.print("% = ");
	Serial.print(asilimia);
	Serial.print("\n");
	delay(300);
}