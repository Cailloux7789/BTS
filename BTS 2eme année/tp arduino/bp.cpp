int led = 11;
int BP1 = 12;
int BP2 = 13;
int lum = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(BP1, INPUT);
  pinMode(BP2, INPUT);
}

void loop() {
  if (digitalRead(BP1) == LOW) {
    if (digitalRead(BP1) == HIGH) {
      lum += 25.5;
      analogWrite(led, lum);
      if (lum > 255) {
        analogWrite(led, 255);
      }
    }
  }

  if (digitalRead(BP2) == LOW) {
    if (digitalRead(BP2) == HIGH) {
      lum -= 25.5;
      analogWrite(led, lum);
      if (lum < 0) {
        analogWrite(led, 0);
      }
    }
  }
}