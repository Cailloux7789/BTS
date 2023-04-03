void etat_sol(char y) // cette fonction prend en paramètre la valeur du capteur de sol
{
   lcd.clear(); // efface l'écran LCD
   switch(y) // selon la valeur du capteur
   {
      case 0: // si le sol est sec (valeur du capteur = 0)
         lcd.setCursor(4, 1); // place le curseur à la position (4,1) de l'écran LCD
         lcd.print("SOL SEC"); // affiche "SOL SEC" sur l'écran
         digitalWrite(LED_rouge_secheresse, HIGH); // allume la LED rouge indiquant une sécheresse du sol
         digitalWrite(LED_jaune_normal, LOW); // éteint la LED jaune indiquant un sol légèrement humide
         digitalWrite(LED_verte_humide, LOW); // éteint la LED verte indiquant un sol humide
         break; // termine la séquence switch

      case 1: // si le sol est légèrement humide (valeur du capteur = 1)
         lcd.setCursor(3, 1); // place le curseur à la position (3,1) de l'écran LCD
         lcd.print("SOL DETREMPE"); // affiche "SOL DETREMPE" sur l'écran
         digitalWrite(LED_jaune_normal, HIGH); // allume la LED jaune indiquant un sol légèrement humide
         digitalWrite(LED_verte_humide, LOW); // éteint la LED verte indiquant un sol humide
         digitalWrite(LED_rouge_secheresse, LOW); // éteint la LED rouge indiquant une sécheresse du sol
         break; // termine la séquence switch

      case 2: // si le sol est humide (valeur du capteur = 2)
         lcd.setCursor(3, 1); // place le curseur à la position (3,1) de l'écran LCD
         lcd.print("SOL HUMIDE"); // affiche "SOL HUMIDE" sur l'écran
         digitalWrite(LED_verte_humide, HIGH); // allume la LED verte indiquant un sol humide
         digitalWrite(LED_jaune_normal, LOW); // éteint la LED jaune indiquant un sol légèrement humide
         digitalWrite(LED_rouge_secheresse, LOW); // éteint la LED rouge indiquant une sécheresse du sol
         break; // termine la séquence switch
   }
}
