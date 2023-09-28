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
  if (digitalRead(BP1) == HIGH) {
    if (digitalRead(BP1) == HIGH) {
      lum += 25.5;
      if (lum > 255) {
        analogWrite(led, lum);
      }
      while (digitalRead(BP1) == HIGH) {}
    }
  }

  if (digitalRead(BP2) == LOW) {
    if (digitalRead(BP2) == LOW) {
      lum -= 25.5;
      if (lum < 0) {
        analogWrite(led, lum);
      }
      while (digitalRead(BP2) == LOW) {}
    }
  }
}
