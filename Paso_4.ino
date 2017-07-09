//Propulsa todo el cuerpo de la arana hacia adelante
void paso4(){
     delay(250);
   //PATA 1 se levanta
 Serial.println("#8 P1500 T300");//a
  Serial.println("#9 P1250 T300");//b
  Serial.println("#10 P1750 T300");//c
  //PATA 4 se levanta
   Serial.println("#24 P1300 T300");//a
  Serial.println("#25 P1700 T300");//b
  Serial.println("#26 P1750 T300");//c
   delay(250);
   
   //PATA 1 se baja
 Serial.println("#8 P2000 T300");//a
  Serial.println("#9 P1400 T300");//b
  Serial.println("#10 P1750 T300");//c
  //PATA 4 se baja
   Serial.println("#24 P1700 T300");//a
  Serial.println("#25 P1350 T300");//b
  Serial.println("#26 P1750 T300");//c
  delay(250);
  
  //Pata 1
   Serial.println("#8 P2200 T300");//a
  Serial.println("#9 P1900 T300");//b
  //Pata 4
  Serial.println("#24 P1600 T300");//a
  Serial.println("#25 P1540 T300");//b
}

