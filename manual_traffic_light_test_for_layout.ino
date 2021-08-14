void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(4, INPUT);
pinMode(3, INPUT);
pinMode(2, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int button1State, button2State, button3State;
button1State = digitalRead(2);
button2State = digitalRead(3);
button3State = digitalRead(4);

if (button1State == LOW)
{
 digitalWrite(11, HIGH);
 digitalWrite(12, LOW);
 digitalWrite(13, LOW);
}
else if (button2State == LOW)
{
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  digitalWrite(13, LOW);
}
else if (button3State == LOW)
{
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
}
}
