int pm=A6,prev,v;
void setup() {
  // put your setup code here, to run once:
  pinMode(pm,INPUT);//potentiometer
  pinMode(A1,INPUT);//btn
  Serial.begin(9600);
}
int input=0,output=1;
int val,p=0,f=1;
void loop() {
  // put your main code here, to run repeatedly:
  
  val=map(analogRead(pm),0,1023,0,11);
 if(f){
  switch(val){
    case 0:
  //1
  pinMode(A5,OUTPUT);//vcc
  pinMode(A4,OUTPUT);//gnd
  pinMode(A2,INPUT);//high Z
  pinMode(A3,INPUT);//high Z
  digitalWrite(A5,1);//vcc 1
  digitalWrite(A4,0);//gnd 0
  delay(p);
    break;

  case 1:
  //2
  pinMode(A5,OUTPUT);//vcc
  pinMode(A2,input);
  pinMode(A4,input);//
  pinMode(A3,output);
  digitalWrite(A3,0);
  delay(p);
    break;

   case 2:
  //3
  pinMode(A5,OUTPUT);//vcc
  pinMode(A4,input);
  pinMode(A3,input);  //prev gnd
  pinMode(A2,output); //new gnd
  digitalWrite(A2,0);
  delay(p);
    break;
    
    case 3:
  //4
  pinMode(A4,output); //new vcc
  pinMode(A5,input);  //previous vcc
  pinMode(A2,input);  //previous gnd
  pinMode(A3,output); //gnd
  digitalWrite(A4,1);
  digitalWrite(A3,0);
  delay(p);
      break;
    case 4:
    
  //5
  pinMode(A4,output);//vcc
  pinMode(A5,input);
  pinMode(A3,input);  //prev gnd
  pinMode(A2,output); //new gnd
  digitalWrite(A2,0);
  delay(p);
        break;

      case 5:
      
  //6
  
  pinMode(A4,output);//vcc
  pinMode(A3,input);
  pinMode(A2,input);  //prev gnd
  pinMode(A5,output); //new gnd
  digitalWrite(A5,0);
//btn code start
  v=digitalRead(A1);
  prev=v;
  Serial.println(v);
  if(!v){
      delay(50);
      v=digitalRead(A1);
      while(prev==v){
        prev=v;
        v=digitalRead(A1);
      }
      f=0;
      Serial.print("You Won");
    }
    //end code.
    delay(p);
      break;

      case 6:
  //7
  pinMode(A3,output); //new vcc
  pinMode(A4,input);  //previous vcc
  pinMode(A5,input);  //previous gnd
  pinMode(A2,output); //gnd
  digitalWrite(A3,1);
  digitalWrite(A2,0);
  delay(p);
        break;

        case 7:
  //8
  pinMode(A3,output);//vcc
  pinMode(A4,input);
  pinMode(A2,input);  //prev gnd
  pinMode(A5,output); //new gnd
  digitalWrite(A5,0);
  delay(p);

    break;

    case 8:
   //9
  pinMode(A3,output);//vcc
  pinMode(A2,input);
  pinMode(A5,input);  //prev gnd
  pinMode(A4,output); //new gnd
  digitalWrite(A4,0);
  delay(p);
    break;

    case 9:
  //10
  pinMode(A2,output); //new vcc
  pinMode(A3,input);  //previous vcc
  pinMode(A4,input);  //previous gnd
  pinMode(A5,output); //gnd
  digitalWrite(A2,1);
  digitalWrite(A5,0);
  delay(p);
      break;

    case 10:
  //11
  pinMode(A2,output); //vcc
  pinMode(A3,input);
  pinMode(A5,input);  //prev gnd
  pinMode(A4,output); //new gnd
  digitalWrite(A4,0);
  delay(p);

      break;
     
     case 11: 
   //12
    pinMode(A2,output);
    pinMode(A5,input);
    pinMode(A4,input);  //prev gnd
    pinMode(A3,output); //new gnd
    digitalWrite(A3,0);
    delay(p);
    break;
    
  }
 }//end if
 else
 {
    
    Serial.println("You Won");
    delay(3000);
    f=1;
 }
}
