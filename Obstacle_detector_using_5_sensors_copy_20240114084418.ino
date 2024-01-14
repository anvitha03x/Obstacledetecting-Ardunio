
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue1 = analogRead(A0);
  int sensorValue2 = analogRead(A1);
  int sensorValue3 = analogRead(A2);
  int sensorValue4 = analogRead(A3);
  int sensorValue5 = analogRead(A4);
// print out the value you read:
if(sensorValue1<500)
  Serial.println("The obstacle is in extreme right position");
else if(sensorValue2<500)
  Serial.println("The obstacle is in right position");
else if(sensorValue3<500)
  Serial.println("The obstacle is in center position");
else if(sensorValue4<500)
  Serial.println("The obstacle is in extreme left position");
else if(sensorValue5<500)
  Serial.println("The obstacle is in extreme left position");
else
  Serial.println("No sensors detected");
delay(1000); // delay in between reads for stability
}
