
int SR04_Echo = 6; // Echo returned from range detection 
int SR04_Trigger = 7; // Trigger a pulse-echo range detection 
long distance = 0; 
long cm = 0; 
void setup(){ 
pinMode(SR04_Echo, INPUT); 
pinMode(SR04_Trigger, OUTPUT); 
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);
Serial.begin(57600); // Set the USB serial port to 57600 bits per second 
} // end of setup 
void loop() 
{ 
digitalWrite(SR04_Trigger, LOW); // Send a trigger pulse 
delayMicroseconds(2); 
digitalWrite(SR04_Trigger, HIGH); 
delayMicroseconds(10); 
digitalWrite(SR04_Trigger, LOW); 
distance = pulseIn(SR04_Echo, HIGH); // the distance is proportional to the time interval of the ECHO pulse 
cm = distance / 58; // Convert time to distance - 58 from data sheet 
Serial.print("Distance to object (cm) >> "); 
Serial.println(cm); 
int waitTime = cm;
digitalWrite(10,1);
digitalWrite(11,1);
delay(waitTime * 10);
digitalWrite(10,0);
digitalWrite(11,0);
delay(waitTime * 10);
}
