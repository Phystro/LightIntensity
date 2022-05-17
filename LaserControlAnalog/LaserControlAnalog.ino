const int LASER = 9;

const int OT = 2;

void setup () 
{
	pinMode(LASER, OUTPUT);
}


void loop() 
{
	analogWrite(LASER, OT);
}