/*
Author : Dharm Vashisth
Date : 03/01/20
Description: Displaying numbers on 7 segnment Common Cathod.
*/
#define a 16
#define b 5
#define c 4
#define d 0
#define e 2
#define f 14
#define g 12
#define n 10
String ar[]={// pattern array
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
int tp=7,dl=500;//total pins and delay of 500ms.
int p[]={a,b,c,d,e,f,g};  //pin numbers
String tmp; //storing string
void setup(){
  for(int i=0;i<tp;i++){
    pinMode(p[i],OUTPUT);
    digitalWrite(p[i],1);    
  }
}
void loop(){
  for(int j=0;j<n;j++){
    delay(dl);
    tmp=ar[j];
    for(int k=0;tmp[k]!='\0';k++){
          if(tmp[k]=='1')
            digitalWrite(p[k],0); //on
          else
            digitalWrite(p[k],1); //off
    }
  }
}
