/*
    Author: Dharm Vashisth
    Description: Controlling intensity of RGB LEd's using Potentiometer.
*/
int r=9,g=10,b=11,pm=A6;
int c,c2,c3,val;
void setup() {
  // put your setup code here, to run once:
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(pm,INPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(pm);
  c=val/4;  //we can also use map().
  c2=c2?c+30:5;
  c3=c3?c+80:10;
  
  analogWrite(r,c);
  analogWrite(g,c2);
  analogWrite(b,c3);
  delay(20);
  
}
