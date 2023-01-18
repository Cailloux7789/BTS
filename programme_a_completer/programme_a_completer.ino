#include <LiquidCrystal.h> // inclue la bibliotheque necessaire pour l'afficheur LCD
#include  "pins.h"         // variables

 LiquidCrystal lcd(RS, EN, LCD_4, LCD_5, LCD_6, LCD_7); // RS EN D4 D5 D6 D7
  
void setup() 
{
   lcd.begin(16, 2); //configure l'ecran du LCD (curseur)
   pinMode(RETRO, OUTPUT); //configure une broche en sortie 
   digitalWrite(RETRO, HIGH); //fait passer au niveau haut une sortie numerique 
   pinMode(LED_verte_pompe, OUTPUT); 
   pinMode(LED_verte_humide, OUTPUT); 
   pinMode(LED_jaune_normal, OUTPUT); 
   pinMode(LED_rouge_secheresse, OUTPUT); 
   affichage_version(); // code permettant de définir l'affichage de la version de l'irrigation
}

void loop() 
 { 
   char x = lecture_capteur();   
   etat_sol(x);
   gestion_pompe(x);   
   delay(3000);   
 }
 
 
