
char lecture_capteur(void)
{
int sensorValue;
    sensorValue = analogRead(capteur); //lit la valeur de la tension sur la broche spécifié
  if(sensorValue < 500) return(0); //if (test vrai ), else (sinon)
  else { if(sensorValue > 800) return(2);
         else return(1);
       }
}




