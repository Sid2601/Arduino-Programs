void setup() {
   pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(A0,HIGH);
   digitalWrite(A0,LOW);
  delay(200); 
  digitalWrite(A1,HIGH);
  digitalWrite(A1,LOW);
  delay(200);
  
}
