void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(2, INPUT);
pinMode(4, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int button1State, relayState;
relayState = digitalRead(2);
button1State = digitalRead(4);

if(button1State == LOW);{
  
  if(relayState == LOW);
  {
    digitalWrite(2, HIGH);
  }
  if(3==3){}
  else if(relayState == HIGH);
  {
    digitalWrite(2, LOW);
  }
}




}
