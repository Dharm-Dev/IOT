/*
Author: Dharm Vashisth
Description :Controlling Charlie Multiplexing LEds with 4 pins 
              without using Loop and glow leds with some delay 
              controlled by our Potentiometer. 
*/
int pm=A6;
void setup() {
  // put your setup code here, to run once:
  pinMode(pm,INPUT);//potentiometer
}
int input=0,output=1;
int p=0;
void loop() {
  // put your main code here, to run repeatedly:
  //reading value from potentiometer.
  val=map(analogRead(pm),0,1023,0,11);
  
  //1
  pinMode(A5,OUTPUT);//vcc
  pinMode(A4,OUTPUT);//gnd
  pinMode(A2,INPUT);//high Z
  pinMode(A3,INPUT);//high Z
  digitalWrite(A5,1);//vcc 1
  digitalWrite(A4,0);//gnd 0
  delay(p);
  
  //2
  pinMode(A5,OUTPUT);//vcc
  pinMode(A2,input);
  pinMode(A4,input);//
  pinMode(A3,output);
  digitalWrite(A3,0);
  delay(p);
  
  //3
  pinMode(A5,OUTPUT);//vcc
  pinMode(A4,input);
  pinMode(A3,input);  //prev gnd
  pinMode(A2,output); //new gnd
  digitalWrite(A2,0);
  delay(p);
  
  //4
  pinMode(A4,output); //new vcc
  pinMode(A5,input);  //previous vcc
  pinMode(A2,input);  //previous gnd
  pinMode(A3,output); //gnd
  digitalWrite(A4,1);
  digitalWrite(A3,0);
  delay(p);
     
  //5
  pinMode(A4,output);//vcc
  pinMode(A5,input);
  pinMode(A3,input);  //prev gnd
  pinMode(A2,output); //new gnd
  digitalWrite(A2,0);
  delay(p);
      
  //6
  pinMode(A4,output);//vcc
  pinMode(A3,input);
  pinMode(A2,input);  //prev gnd
  pinMode(A5,output); //new gnd
  digitalWrite(A5,0);
  delay(p);
  
  //7
  pinMode(A3,output); //new vcc
  pinMode(A4,input);  //previous vcc
  pinMode(A5,input);  //previous gnd
  pinMode(A2,output); //gnd
  digitalWrite(A3,1);
  digitalWrite(A2,0);
  delay(p);

  //8
  pinMode(A3,output);//vcc
  pinMode(A4,input);
  pinMode(A2,input);  //prev gnd
  pinMode(A5,output); //new gnd
  digitalWrite(A5,0);
  delay(p);
 //9
  pinMode(A3,output);//vcc
  pinMode(A2,input);
  pinMode(A5,input);  //prev gnd
  pinMode(A4,output); //new gnd
  digitalWrite(A4,0);
  delay(p);
  
  //10
  pinMode(A2,output); //new vcc
  pinMode(A3,input);  //previous vcc
  pinMode(A4,input);  //previous gnd
  pinMode(A5,output); //gnd
  digitalWrite(A2,1);
  digitalWrite(A5,0);
  delay(p);

  //11
  pinMode(A2,output); //vcc
  pinMode(A3,input);
  pinMode(A5,input);  //prev gnd
  pinMode(A4,output); //new gnd
  digitalWrite(A4,0);
  delay(p);
 
   //12
    pinMode(A2,output);
    pinMode(A5,input);
    pinMode(A4,input);  //prev gnd
    pinMode(A3,output); //new gnd
    digitalWrite(A3,0);
    delay(p);
}
