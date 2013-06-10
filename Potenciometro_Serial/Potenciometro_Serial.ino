/*
  Potenciomentro
  Send the potenciometro value to serial
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
  delay(1000);
  Serial.print(sensorValue);
}
