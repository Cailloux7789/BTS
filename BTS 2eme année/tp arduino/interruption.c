#include <avr/io.h>
#include <avr/interrupt.h>

// Fonction d'interruption
void timer1_ovf_isr(void) {
  // Inverser l'état de la LED
  PORTB ^= _BV(PB2);
}

int main(void) {
  // Choisir la LED intégrée
  DDRB |= _BV(PB2);

  // Allumer la LED
  PORTB |= _BV(PB2);

  // Configurer le timer 1 pour compter 16 384 impulsions
  TCCR1A = 0;
  TCCR1B = _BV(CS10);
  TCNT1 = 0;
  TCCR1B |= _BV(CS12) | _BV(CS10);

  // Activer l'interruption
  TIMSK1 |= _BV(TOIE1);

  sei();

  // Ne rien faire
  while (1) {
  }
}
