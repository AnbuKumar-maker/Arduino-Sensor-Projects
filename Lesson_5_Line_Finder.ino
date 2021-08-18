//------------------------------------------------------------
//Name: Line finder digital mode
//Function: detect black line or white line
//Parameter:   When digital signal is HIGH, black line
//             When digital signal is LOW, white line
//-------------------------------------------------------------
int signalPin =  3;    // connected to digital pin 3
void setup()   {
  pinMode(signalPin, INPUT); // initialize the digital pin as an output:
  Serial.begin(9600);  // initialize serial communications at 9600 bps:
}
// the loop() method runs over and over again,
// as long as the Arduino has power
void loop()
{
  if(HIGH == digitalRead(signalPin))
    Serial.println("black");
  else  Serial.println("white");  // display the color
  delay(1000);                  // wait for a second
}
