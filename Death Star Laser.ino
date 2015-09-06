// Pot = 0;
// Laser = 11;
// But = 2;

void setup() {
 // put your setup code here, to run once:
pinMode(11, OUTPUT);
pinMode(2, INPUT);
pinMode(13, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int On, Off, Pot;


Pot = analogRead(0);
On = digitalRead(2);
Off = digitalRead(2);

if (On == LOW)

{
analogWrite(11, HIGH);
digitalWrite(13,LOW);


}
  else
  analogWrite(11, LOW);
  digitalWrite(13, HIGH);

}
