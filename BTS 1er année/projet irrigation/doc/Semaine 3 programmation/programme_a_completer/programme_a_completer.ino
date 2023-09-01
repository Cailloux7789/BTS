#include <LiquidCrystal.h> // inclue la bibliotheque necessaire pour l'afficheur LCD
#include  "pins.h"         // variables

LiquidCrystal lcd(RS, EN, LCD_4, LCD_5, LCD_6, LCD_7); // RS EN D4 D5 D6 D7

void setup()
{
    lcd.begin(16, 2); //configure l'ecran du LCD (curseur)
    pinMode(RETRO, OUTPUT); //configure la broche retro-eclairage en sortie
    pinMode(RETRO,HIGH); //fait passer au niveau haut la broche de rétro eclairage
    pinMode(LED_verte_pompe,...?...); //Mettre en sortie la led verte de la pompe
    pinMode(LED_verte_humide,...?...); //Mettre en sortie la led verte humide
    pinMode(LED_jaune_normal,...?...); //Mettre en sortie la led jaune
    pinMode(LED_verte_pompe,...?...); //Mettre en sortie la led verte de la pompe
    affichage_version(); // code permettant de définir l'affichage de la version de l'irrigation
}

void loop()
{
    char x = lecture_capteur();
    etat_sol(x);
    gestion_pompe(x);
    delay(3000);
}
