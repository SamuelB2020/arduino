void setup() {
  // put your setup code here, to run once
  pinMode(8, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(0);
  Serial.println(val);

  if(val < 10){
    noTone(8);
  }
  else{
  tone(8, val+200);
  }
}
