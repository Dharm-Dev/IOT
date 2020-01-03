/*
  Author:Dharm Vashisth
  Description: Illustrate PWM on LED controlled by Potentiometer.
*/
void setup() {
  // put your setup code here, to run once:
pinMode(A6,INPUT);
pinMode(9,OUTPUT);
}
int v;
void loop() {
  v=map(analogRead(A6),0,1023,0,255);
  analogWrite(9,v);
  delay(20);
}
