void gestion_pompe(char etat) //appelle fonction permettant de demarrer la pompe lorsque le sol est sec
{
 if(etat==0) 
 { 
     digitalWrite(LED_verte_pompe, HIGH); 
     digitalWrite(POMPE, HIGH); 
 } 
 else 
 { 
     digitalWrite(LED_verte_pompe, LOW); 
     digitalWrite(POMPE, LOW);  
 } 
}

