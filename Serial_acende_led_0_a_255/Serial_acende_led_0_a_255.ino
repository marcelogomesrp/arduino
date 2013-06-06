const byte LED = 13;
int valor = 100;

void setup() {                
  pinMode(LED, OUTPUT);     
  Serial.begin(9600);
  Serial.println("The serial port is open");
}

void loop() {
  //digitalWrite(LED,!digitalRead(LED));   // set the LED on
  //delay(100);              // wait for a second
}

void serialEvent(){
  char SerialData = (char) Serial.read();
  //int SerialData = (int) Serial();
  analogWrite(LED, SerialData);
  Serial.println("The serial was reading");
  valor+=10;
  Serial.println(valor);
  
  analogWrite(LED, valor);
}
