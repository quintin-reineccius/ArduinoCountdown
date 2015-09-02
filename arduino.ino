// arduino countdown

// Declaring the LEFT 7-segment LED display. Pins 0-6 (my arduino is running white wires for this)
int leftPinA = 0;
int leftPinB = 1;
int leftPinC = 2;
int leftPinD = 3;
int leftPinE = 4;
int leftPinF = 5;
int leftPinG = 6;

// Declaring the RIGHT 7-segment LED display. Pins 7-13 (my arduino is running yellow wires for this)
int rightPinA = 7;
int rightPinB = 8;
int rightPinC = 9;
int rightPinD = 10;
int rightPinE = 11;
int rightPinF = 12;
int rightPinG = 13;

void setup() {
	// Pin 0-6 the LEFT 7-segment LED display
	pinMode(leftPinA, OUTPUT);
	pinMode(leftPinB, OUTPUT);
	pinMode(leftPinC, OUTPUT);
	pinMode(leftPinD, OUTPUT);
	pinMode(leftPinE, OUTPUT);
	pinMode(leftPinF, OUTPUT);
	pinMode(leftPinG, OUTPUT);

	// Pin 7-13 the Right 7-segment LED display
	pinMode(rightPinA, OUTPUT);
	pinMode(rightPinB, OUTPUT);
	pinMode(rightPinC, OUTPUT);
	pinMode(rightPinD, OUTPUT);
	pinMode(rightPinE, OUTPUT);
	pinMode(rightPinF, OUTPUT);
	pinMode(rightPinG, OUTPUT);
}

void loop() {
	//just making a 8 to test the board
	digitalWrite(leftPinA, HIGH);
	digitalWrite(leftPinB, HIGH);
	digitalWrite(leftPinC, HIGH);
	digitalWrite(leftPinD, HIGH);
	digitalWrite(leftPinE, HIGH);
	digitalWrite(leftPinF, HIGH);
	digitalWrite(leftPinG, HIGH);

	//just making a 8 to test the board
	digitalWrite(rightPinA, HIGH);
	digitalWrite(rightPinB, HIGH);
	digitalWrite(rightPinC, HIGH);
	digitalWrite(rightPinD, HIGH);
	digitalWrite(rightPinE, HIGH);
	digitalWrite(rightPinF, HIGH);
	digitalWrite(rightPinG, HIGH);
}

