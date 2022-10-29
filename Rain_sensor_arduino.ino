// ---------------------------------------------------------------- //
// ID OF USER: Rakeshtsg
// INTERFACE: Arduino 
// Using Arduino IDE 
// Using  with arduino - Rain sensor arduino
// Tested on N/A
//VCC – 3.3v – 5v.
//GND – GND.
//AO – A0 arduino analog value.
//DO –  digital D4.
// ---------------------------------------------------------------- //
void setup() {
  Serial.begin(9600);//enable serial monitor
  pinMode(4, OUTPUT);//define LED pin
}
void loop() 
{
  int value = analogRead(A0);//read value
  Serial.print("Value : ");
  Serial.println(value);
  if (value < 300) {//check condition
    digitalWrite(4, HIGH);
    Serial.print("Heavy rain  LED on ");
  } else {
    digitalWrite(4, LOW);
  }
}
