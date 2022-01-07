//built in led can be used but I have used external LED attached to pin 9
int sensorPin = A0;//pin number to take the analog input
int ledPin = 9;      
int sensorValue = 0;//the value of voltage which is taken from the LDR by Voltage divider rule

void setup() {
  //declaring the led attached to pin 9 as output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from LDR
  sensorValue = analogRead(sensorPin);
  // turn the LED ON
  digitalWrite(ledPin, HIGH);
  // stop the program for <sensorValue> milliseconds:
  delay(sensorValue);
  // turn the LED OFF:
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
  delay(sensorValue);
}
