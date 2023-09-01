void gestion_pompe(char etat) // définit une fonction prenant en entrée un caractère etat
{
    if (etat == 0) // si l'état est 0 (le sol est sec)
    {
        digitalWrite(LED_verte_pompe, HIGH); // allume la LED verte de la pompe
        digitalWrite(POMPE, HIGH); // active la pompe
    }
    else // sinon (le sol est humide)
    {
        digitalWrite(LED_verte_pompe, LOW); // éteint la LED verte de la pompe
        digitalWrite(POMPE, LOW); // désactive la pompe
    }
}
