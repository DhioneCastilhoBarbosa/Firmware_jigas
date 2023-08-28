void Placa_1()
{
  
      
      if(AC1==false )
      {   
        delay(500);
        digitalWrite(Rele_AC1,LOW); // alimenta a entrada AC 220V
        delay(500);
        Teste_Points(1);

        
          
          if(TP1_1==false && TP4_1==false && TP5_1==false && TP6_1==false)
          {
            Serial.println("Aprovada teste Medicao");
            delay(500);
            Teste_Rele(1);

            
          }
          else
          {
            Serial.println("Reprovada teste Medicao");
            Placa1=2;
            P1 = true;
            delay(500);

          }
          
      }
      else
      {
        Placa1=1;
        delay(500);
        Serial.println("Reprovada no teste de curto");
        
      }


}