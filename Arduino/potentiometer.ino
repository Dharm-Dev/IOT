int Pvalue=0,tmp;
int ar[]={A6,A1}; //pin numbers
void setup() {
  // put your setup code here, to run once:
  pinMode(ar[0],INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Pvalue=analogRead(ar[0]);
  Serial.println(Pvalue);
  while(1){
    delay(500);
    tmp=analogRead(ar[0]);
    if(Pvalue!=tmp)
      break;
    Pvalue=tmp;
  }
  
}
