const int potD = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int D = analogRead(potD);

  if (D > 512) {
    int D1 = map(D, 512, 1023, 0, 255);
    Serial.println("Droite");
    Serial.println(D);
    Serial.println(D1);
  }

  if (D < 512) {
    int G1 = map(D, 0, 512, 255, 0);
    Serial.println("Gauche");
    Serial.println(D);
    Serial.println(G1);
  }
 
  if (D = 512) {
    Serial.println("Milieu");
  }
  
  Serial.println("");

  delay(500);
}