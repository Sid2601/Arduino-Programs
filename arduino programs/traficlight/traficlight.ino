int Redlight=13;
    int Greenlight=12;
    int Orangelight=11;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    pinMode(13,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(11,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Red();
  Green();
  Orange();
}
void Red()
{
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  delay(80);
}
void Green()
{
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(11,LOW);
  delay(80);
   
}
void Orange()
{
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,HIGH);
  delay(80);
  Red();
}
