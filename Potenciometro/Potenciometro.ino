/*
  Potenciomentro
  Turns on an LED on for one second, then off for one second, repeatedly.
  This example is based on Blink
 
  This example code is in the public domain.
  This example is based on AnalogInput from Tom Igoe
*/

int sensor = A0; // select the input pin for the potenciomentro
int led = 13;    // select the pin for the LED
int sensorValue = 0;   // variable to store the value coming from the sensor

void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  sensorValue = analogRead(sensor);
  digitalWrite(led, !digitalRead(led));
  delay(sensorValue);
  Serial.print(sensorValue);
  Serial.print("\n");
}
