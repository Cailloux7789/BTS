
/*
 * retour
 * 0 = sec de 0 a 500
 * 1 = humide de 500 a 800
 * 2 = secheresse de 800 à 1023
 */

char lecture_capteur(void)
{
int sensorValue;
    sensorValue = analogRead(capteur); //lit la valeur de la tension sur la broche spécifié
  if(sensorValue < 500) return(0); //if (test vrai ), else (sinon)
  else { if(sensorValue > 800) return(2);
         else return(1);
       }
}


void etat_sol(char y) // trois états de sol possible, en fonction de la valeur x en sortie numérique
{
   lcd.clear();
   switch(y) 
  {
    case 0 :lcd.setCursor(4, 1); 
            lcd.print("SOL SEC");
            digitalWrite(LED_rouge_secheresse, HIGH);
            digitalWrite(LED_jaune_normal, LOW);
            digitalWrite(LED_verte_humide, LOW);
                                        
            break;
            
    case 1 :lcd.setCursor(3, 1);
            lcd.print("SOL DETREMPE");
            digitalWrite(LED_jaune_normal, HIGH);
            digitalWrite(LED_verte_humide, LOW);
            digitalWrite(LED_rouge_secheresse, LOW);
         
            break;
            
    case 2 :lcd.setCursor(3, 1);
            lcd.print("SOL HUMIDE") ;
            digitalWrite(LED_verte_humide, HIGH);
            digitalWrite(LED_jaune_normal, LOW);
            digitalWrite(LED_rouge_secheresse, LOW);

  }          
}

