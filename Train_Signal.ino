int trainsInBlock = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(2, OUTPUT);
pinMode(13, INPUT);
pinMode(3, OUTPUT);
pinMode(12, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

int track1 = digitalRead(12);
int track2 = digitalRead(13);
if (track1 == HIGH) {
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
}
if (track2 == HIGH) {
  digitalWrite(3,HIGH);
  digitalWrite(2, LOW);
}





}
