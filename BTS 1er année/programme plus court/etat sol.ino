void etat_sol(char y) {
  const char* messages[] = {"SOL SEC", "SOL DETREMPE", "SOL HUMIDE"};
  const int leds[][3] = {{1, 0, 0}, {0, 1, 0}, {0, 0, 1}};
  lcd.clear();
  lcd.setCursor(3, 1);
  lcd.print(messages[y]);
  digitalWrite(LED_rouge_secheresse, leds[y][0]);
  digitalWrite(LED_jaune_normal, leds[y][1]);
  digitalWrite(LED_verte_humide, leds[y][2]);
}
