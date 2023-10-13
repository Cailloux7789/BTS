const int potD = A0;
const int potG = A1;
const int LED1 = 11;
const int LED2 = 10;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int D = analogRead(potD);
  int G = analogRead(potG);

  Serial.println("---------------------------");

  if (D > 512) {
    int D1 = map(D, 512, 1023, 0, 255);
    Serial.println("Droite");
    Serial.println(D1);
    analogWrite(LED1, D1);
  }

  if (D < 512) {
    int G1 = map(D, 0, 512, 255, 0);
    Serial.println("Gauche");
    Serial.println(G1);
    analogWrite(LED1, G1);
  }

  if (G > 512) {
    int D2 = map(G, 512, 1023, 0, 255);
    Serial.println("Haut");
    Serial.println(D2);
    analogWrite(LED2, D2);
  }

  if (G < 512) {
    int G2 = map(G, 0, 512, 255, 0);
    Serial.println("Bas");
    Serial.println(G2);
    analogWrite(LED2, G2);
  }
 
  
  Serial.println("");

  delay(500);
}