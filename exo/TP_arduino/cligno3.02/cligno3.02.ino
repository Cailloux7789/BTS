
const int led_rouge= 11;
const int led_vert= 12;
void setup() {
  pinMode(led_rouge, OUTPUT);
  pinMode(led_vert, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led_rouge, HIGH);
  digitalWrite(led_vert, HIGH);  
  delay(1000);                       
  digitalWrite(led_vert,LOW);
  delay(1000); 
  digitalWrite(led_rouge,LOW);
  delay(500);
  digitalWrite(led_vert,HIGH);
  delay(1000);
  digitalWrite(led_vert,LOW);
  delay(500);
}
