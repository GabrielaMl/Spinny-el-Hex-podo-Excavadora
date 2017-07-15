//Primer paso de la camita
//Agregar F guarda el string en flash memory
void paso1(){
delay(250);

  //PATA 1 SE LEVANTA Y GIRA
  Serial.println(F("#8 P1500 T300"));//a
  Serial.println("#9 P1400 T300");//b
  Serial.println("#10 P1750 T300");//c

  //PATA 4 SE LEVANTA Y GIRA
  Serial.println("#24 P1500 T300");//a
  Serial.println("#25 P1600 T300");//b
  Serial.println("#26 P1750 T300");//c
  
  delay(250);

  //PATA 1 BAJA 
   Serial.println("#8 P2000 T300");//a
  Serial.println("#9 P1900 T300");//b
  Serial.println("#10 P1750 T300");//c

  //PATA 4 BAJA
    Serial.println("#24 P1000 T300");//a
  Serial.println("#25 P1100 T300");//b
  Serial.println("#26 P1750 T300");//c
}

