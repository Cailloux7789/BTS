void affichage_version(void)  // Définition d'une fonction nommée "affichage_version" qui ne prend aucun argument en entrée et ne renvoie rien en sortie
{
   lcd.setCursor(3, 0) ;  // Place le curseur à la 4ème colonne de la 1ère ligne de l'afficheur LCD
   lcd.print("IRRIGATION" ) ;   // Affiche le texte "IRRIGATION" à la position du curseur précédemment définie
   
   lcd.setCursor(3, 1) ;   // Place le curseur à la 4ème colonne de la 2ème ligne de l'afficheur LCD
   lcd.print("version 1.0" ) ;   // Affiche le texte "version 1.0" à la position du curseur précédemment définie
   
   delay(2000);  // Attend 2 secondes
   lcd.clear();  // Efface l'afficheur LCD
}
