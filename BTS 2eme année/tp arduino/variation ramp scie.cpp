void setup() {
  pinMode(11, OUTPUT);
}

void loop() {
  analogWrite(11, 51);
  delay(200);
  analogWrite(11, 0);
  delay(800);
}