int echopin =8; //echo pin
int trigpin=9;  //Trigger pin

//motors
int lfwd=10;
int lrev=11;    
int rfwd=5;
int rrev=6;

int maximumRange=30;
long duration,distance;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,OUTPUT);
  pinMode(rfwd,OUTPUT);
  pinMode(lfwd,OUTPUT);
  pinMode(lrev,OUTPUT);
  pinMode(rrev,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(trigpin,LOW);
    delayMicroseconds(2);

    digitalWrite(trigpin,HIGH);
    delayMicroseconds(10);

    duration =pulseIn(echopin,HIGH);

    distance= duration/58.2;
    delay(50);
    Serial.println(distance); // to open the serial screen press ctrl + shift +m 

    if(distance>=30)
    {
        
        analogWrite(rfwd,120);
        analogWrite(lfwd,120);
        analogWrite(rrev,0);
        analogWrite(lrev,0);
        
    }
    else if(distance >=20 && distance <=30)
    {
        analogWrite(rfwd,0);
        analogWrite(lfwd,0);
        analogWrite(rrev,120);
        analogWrite(lrev,0);
    }
    else 
    {
        analogWrite(rfwd,0);
        analogWrite(lfwd,0);
        analogWrite(rrev,0);
        analogWrite(lrev,120);
    }
    
    }
