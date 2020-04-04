int red=13;
int green=12;
int blue=11;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13,OUTPUT);   //pinMode(A0,OUTPUT);
  pinMode(12,OUTPUT);   //pinMode(A1,OUTPUT);
  pinMode(11,OUTPUT);   //pinMode(A2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  all();
  c1();
  c2();
  c3();
  c4();
  c5();
  c6();  
}
void all()
{
    digitalWrite(13,HIGH);   //analogWrite(A0,OUTPUT);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    delay(1000);
}
void c1()
{
   digitalWrite(13,HIGH);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    delay(1000);
 
}
void c2()
{
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    delay(1000);

}
void c3()
{
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,HIGH);
    delay(1000);

}
void c4()
{
    digitalWrite(13,HIGH);
    digitalWrite(12,LOW);
    digitalWrite(11,LOW);
    delay(1000);

}
void c5()
{
    digitalWrite(13,LOW);
    digitalWrite(12,HIGH);
    digitalWrite(11,LOW);
    delay(1000);

}
void c6()
{
    digitalWrite(13,LOW);
    digitalWrite(12,LOW);
    digitalWrite(11,HIGH);
    delay(1000);

}
