/*
Author : Dharm Vashisth
Description: Implementing Buzzer interface with Arduino Nano
*/
int p=6;  //Buzzer is connected to pin number and ground.
void setup() {
  // put your setup code here, to run once:
  pinMode(p,OUTPUT);  //set pinMode
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(p,1);//power on the buzzer for 300ms.
  delay(300);
  digitalWrite(p,0);  //power off the buzzer and give a delay of 1s.
  delay(1000);
}
