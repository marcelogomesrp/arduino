/*
  Blink_v2
  Turns on an LED on for one second, then off for one second, repeatedly.
  This example is based on Blink
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
// Time is the wait time.
int time = 1000;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, !digitalRead(led));   // turn the LED on (HIGH is the voltage level) or trun the Led off by Making the voltagem LOW
  delay(time);               // wait for a second
}
