#include <LiquidCrystal.h> // inclut la bibliothèque nécessaire pour l'afficheur LCD
#include "pins.h"         // définit les variables pour les broches utilisées

LiquidCrystal lcd(RS, EN, LCD_4, LCD_5, LCD_6, LCD_7); // crée un objet de type LiquidCrystal pour l'afficheur LCD

void setup() 
{
   lcd.begin(16, 2); // initialise l'écran LCD en spécifiant le nombre de colonnes et de lignes
   pinMode(RETRO, OUTPUT); // configure la broche RETRO en sortie
   digitalWrite(RETRO, HIGH); // met la broche RETRO au niveau haut (active la rétroéclairage de l'écran)
   pinMode(LED_verte_pompe, OUTPUT); // configure la broche LED_verte_pompe en sortie
   pinMode(LED_verte_humide, OUTPUT); // configure la broche LED_verte_humide en sortie
   pinMode(LED_jaune_normal, OUTPUT); // configure la broche LED_jaune_normal en sortie
   pinMode(LED_rouge_secheresse, OUTPUT); // configure la broche LED_rouge_secheresse en sortie
   affichage_version(); // affiche la version de l'irrigation sur l'écran LCD
}

void loop() 
 { 
   char x = lecture_capteur(); // lit la valeur du capteur d'humidité et la stocke dans la variable x
   etat_sol(x); // vérifie l'état du sol en fonction de la valeur lue précédemment et allume la LED correspondante
   gestion_pompe(x); // active ou désactive la pompe en fonction de l'état du sol
   delay(3000); // attend 3 secondes avant de recommencer la boucle
 }
