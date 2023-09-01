
char lecture_capteur(void)// Définit la fonction "lecture_capteur" avec un type de retour "char", qui indique que la fonction renvoie une valeur de type caractère.
{
int sensorValue; // Déclare la variable "sensorValue" de type entier.
    sensorValue = analogRead(capteur); // Lit la valeur de la tension sur la broche spécifiée et la stocke dans la variable "sensorValue".
  if(sensorValue < 500) return(0); // Si la valeur lue est inférieure à 500, retourne 0.
  else // Sinon (valeur lue est supérieure ou égale à 500) :
  { if(sensorValue > 800) return(2);// Si la valeur lue est supérieure à 800, retourne 2.
         else return(1); // Sinon (valeur lue est comprise entre 500 et 800), retourne 1.
       }
}