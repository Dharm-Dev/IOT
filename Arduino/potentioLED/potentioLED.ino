void setup() {
  // put your setup code here, to run once:
pinMode(A6,INPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);

Serial.begin(9600);
}
int v;
void loop() {
//  v=analogRead(A6);
//  Serial.println(v);
//  v=v/4;
  analogWrite(9,123);
  analogWrite(10,223);
  analogWrite(11,253);
  
  delay(20);
}
