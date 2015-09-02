// arduino countdown

// Declaring the LEFT 7-segment LED display. Pins 0-6 (my arduino is running white wires for this)
// On the LED  =  A  B  C  D  E  F  G
int leftPins[] = {0, 1, 2, 3, 4, 5, 6};

// Declaring the RIGHT 7-segment LED display. Pins 7-13 (my arduino is running yellow wires for this)
// On the LED   =  A  B  C   D   E   F   G
int rightPins[] = {7, 8, 9, 10, 11, 12, 13};


void setup() {
	// Setting Pin 0-6 OUTPUT on the LEFT 7-segment LED display 
 	for (int i = 0; i < sizeof(leftPins); i++)  {
    	pinMode(leftPins[i], OUTPUT);      
  	}
	// Setting Pin 7-13 OUTPUT on the RIGHT 7-segment LED display 
	for(int i = 0; i < sizeof(rightPins); i++){
    	pinMode(rightPins[i], OUTPUT);
	}
}

void loop() {
	//just making a 8 to test the LED
	for(int i = 0 ; i < sizeof(leftPins); i++){
  		digitalWrite(leftPins[i], HIGH);
	}

	//just making a 8 to test the LED
  	for(int i = 0; i < sizeof(rightPins); i++){
    	digitalWrite(rightPins[i], HIGH);
  	}
}

