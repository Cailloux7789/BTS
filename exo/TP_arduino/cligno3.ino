
const int led_rouge= 11;
const int led_vert= 12;
void setup() {
  pinMode(led_rouge, OUTPUT);
  pinMode(led_vert, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led_rouge, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led_rouge, LOW);
  digitalWrite(led_vert,HIGH);// turn the LED off by making the voltage LOW
  delay(1000); 
  digitalWrite(led_vert,LOW);// wait for a second
}
