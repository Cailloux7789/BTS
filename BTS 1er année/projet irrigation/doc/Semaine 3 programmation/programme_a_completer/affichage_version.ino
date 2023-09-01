void affichage_version(void)

{
   lcd.setCursor(3, 0) ;  
   lcd.print("IRRIGATION" ) ; 
   
   lcd.setCursor(3, 1) ; 
   lcd.print("version 1.0" ) ; 
   
   delay(2000);
   lcd.clear();         
}
