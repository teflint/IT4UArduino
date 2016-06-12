int PhotoCellValue = 0; // create a place holder in RAM memory for the sensor value 
void setup() 
{ 
Serial.begin(57600); 
} // end of setup 
void loop() 
{ 
PhotoCellValue = analogRead(0); 
Serial.print("Photocell reading is >> " ); 
Serial.println(PhotoCellValue); 
delay(1000); // pause for a second between readings 
} // end of loop 

