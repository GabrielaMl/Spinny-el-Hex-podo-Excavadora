void paso6(){
  //PASO 6
  delay(500);
  //Pata 1
  Serial.println("#8 P1600 T300");//a
  //Pata 6
  Serial.println("#16 P1400 T300");//a
  
  //Pata 2
  Serial.println("#6 P1100 T300");//a
  //Pata 5
  Serial.println("#22 P1900 T300");//a

  delay(500);
  //Pata 4
  Serial.println("#24 P1150 T300");//a
 
  //Pata 3
  Serial.println("#0 P1800 T300");//a

  delay(1000);
  //PATA 4 se levanta
  Serial.println("#24 P1500 T300");//a
  Serial.println("#25 P1800 T300");//b
  //Pata 1 se levanta
  Serial.println("#8 P1500 T300");//a
  Serial.println("#9 P1200 T300");//b
  delay(500);
  
  //Pata 4 baja
  Serial.println("#24 P1000 T300");//a
  Serial.println("#25 P1100 T300");//b  
  //Pata 1 baja
  Serial.println("#8 P2000 T300");//a
  Serial.println("#9 P1900 T300");//b
  delay(250);
  
  //PATA 3 se levanta
  Serial.println("#0 P1500 T300");//a
  Serial.println("#1 P1200 T300");//b
  //Pata 6 se levanta
  Serial.println("#16 P1700 T300");//a
  Serial.println("#17 P1900 T300");//b
  delay(500);
  
  //Pata 3 baja
  Serial.println("#0 P2000 T300");//a
  Serial.println("#1 P1900 T300");//b
  //Pata 6 baja
  Serial.println("#16 P1000 T300");//a
  Serial.println("#17 P1000 T300");//b

  delay(500);
  //Pata 5 y 2
  Serial.println("#21 P1800 T300");//a
  Serial.println("#22 P1500 T300");//b
  Serial.println("#5 P1550 T300");//a
  Serial.println("#6 P1500 T300");//b
  delay(500);
  Serial.println("#21 P1350 T300");//a
  Serial.println("#5 P2000 T300");//a
  delay(250);
}

