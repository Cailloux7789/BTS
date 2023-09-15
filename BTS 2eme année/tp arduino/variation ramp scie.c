int led = 11;
int lum = 0;

void setup() {
  pinMode(led, OUTPUT);
}


void loop() {
  for(lum=0; lum<= 255; lum+=51){
    analogWrite(led, lum);
    delay(143);
  }
  for(lum=255; lum>=255; lum++)
  analogWrite(led, 0);
  delay(0);
}
