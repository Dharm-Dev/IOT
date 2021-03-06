/*
Author : Dharm Vashisth
Date : 03/01/20
Description: Performing pin Multiplexing in the case of 7 segnments Common Cathod.
*/
#define a 16
#define b 5
#define c 4
#define d 0
#define e 2
#define f 14
#define g 12
#define one 13   //first segnment
#define two 15  //second segnment
#define n 10   //different states of a segnment display.
String ar[]={//common annode
  "1111110",//0
  "0110000",//1
  "1101101",//2
  "1111001",//3
  "0110011",//4
  "1011011",//5
  "1011111",//6
  "1110000",//7
  "1111111",//8
  "1111011"//9
};
int tp=7;//total pins
int p[]={a,b,c,d,e,f,g};
String tmp; //storing string from an array.
int dl=2;//2 ms delay
int k,i=0,j=-1,main_Delay; //j=-1 so that counter starts form 00.else 01.

void setup(){
  Serial.begin(9600);
  pinMode(one,OUTPUT);
  pinMode(two,OUTPUT);
  for(int i=0;i<tp;i++){
    pinMode(p[i],OUTPUT);
    digitalWrite(p[i],1);//assigning 1 to all as it is common annode means 1 set all to off.    
  }
}
void loop(){
    j++;  //increment j every time
    if(j>=n)
    {    
      j=0;   //if j exceed index value of an array reset it to initial value.
      i++;   //increment i once j set to initial position.
      if(i>=n)
        i=0; //if i exceed index value of an array reset it to initial value.
    }
  main_Delay = millis();
 while(millis() - main_Delay < 1000) {  
  digitalWrite(two,LOW); //deactivate second.
  /*assigning signals for first*/ 
  tmp=ar[i];
  for(k=0;tmp[k]!='\0';k++){
          if(tmp[k]=='1')
            digitalWrite(p[k],0); //on
          else
            digitalWrite(p[k],1); //off

      }  
   digitalWrite(one,HIGH);  //enabling first 
  delay(dl);
  
  digitalWrite(one,LOW);  //deactivate first
  /*assinging points for second*/
  tmp=ar[j];
  for(k=0;tmp[k]!='\0';k++){
          //delay(dl);
          if(tmp[k]=='1')
            digitalWrite(p[k],0); //on
          else
            digitalWrite(p[k],1); //off
   }
   digitalWrite(two,HIGH);  //activate second. 
   delay(dl);
   
  }/*Exit if time exceed 1 second*/
}
/*
End of the loop
*/
