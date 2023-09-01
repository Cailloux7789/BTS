#define led_rouge 11
void setup() {
  pinMode(led_rouge, OUTPUT);
}
void loop() {
  digitalWrite(led_rouge, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(0.05);                       // wait for a second
  digitalWrite(led_rouge, LOW);
  delay(0.01)
 // turn the LED off by making
