
/*
 * retour
 * 0 = sec de 0 a 500
 * 1 = normal de 500 a 800
 * 2 = humide de 800 à 1023
 */

char lecture_capteur(void)
{
int sensorValue;
    sensorValue = analogRead(capteur); //lit la valeur de la tension sur la broche spécifié
  if(capteur < ...?...) return(0); //if (test vrai ), else (sinon)
  else { if(sensorValue > ...?...) return(2);
         else return(1);
       }
}




