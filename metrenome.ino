void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue;
sensorValue = analogRead(0);
digitalWrite(13, HIGH);
digitalWrite(12,HIGH);
delay(sensorValue);
digitalWrite(12,LOW);
digitalWrite(13, LOW);
delay(sensorValue);
}
