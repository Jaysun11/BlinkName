
const pin_t LED = D7;


SYSTEM_THREAD(ENABLED);


void setup() {

	pinMode(LED, OUTPUT);
}


void loop() {
	// Letter J = .---
	digitalWrite(LED, HIGH);
	delay(300); //.
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters

	digitalWrite(LED, HIGH);
	delay(900); //-
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	
	digitalWrite(LED, HIGH);
	delay(900); //-
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	
	digitalWrite(LED, HIGH);
	delay(900); //-
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	
	// End Letter J
	
	// Letter A = .-
	
	digitalWrite(LED, HIGH);
	delay(300); //.
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters

	digitalWrite(LED, HIGH);
	delay(900); //-
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	
	
	// End Letter A
	
	
	// Letter S = ...
	
	digitalWrite(LED, HIGH);
	delay(300); //.
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	
	digitalWrite(LED, HIGH);
	delay(300); //.
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	
	digitalWrite(LED, HIGH);
	delay(300); //.
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	
	// End Letter S
	
	// Letter O = ---
	
	digitalWrite(LED, HIGH);
	delay(900); //-
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	
	digitalWrite(LED, HIGH);
	delay(900); //-
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	
	digitalWrite(LED, HIGH);
	delay(900); //-
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	// End Letter O
	
	// Letter N = -.
	
	digitalWrite(LED, HIGH);
	delay(900); //-
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	
	digitalWrite(LED, HIGH);
	delay(300); //.
	digitalWrite(LED, LOW);
	delay(300); // - one unit break between characters
	
	// End Letter N
	
}

