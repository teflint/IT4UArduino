#define RedLED 11 // create a meaningful name for pin 11 - RedLED communicates much more than plain old 11. 

void setup() { 
pinMode(RedLED, OUTPUT); 
} // end of setup 

void loop() { 
digitalWrite(RedLED, HIGH); // Turn the RED LED ON 
delay(1000); // wait a second - 1000 milliseconds before switching the LED OFF 
digitalWrite(RedLED, LOW); // Turn the RED LED OFF 
delay(1000); // wait a second - 1000 milliseconds before switching the LED OFF 
} // end of loop 

