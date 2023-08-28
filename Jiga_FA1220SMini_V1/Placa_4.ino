void Placa_4()
{
  
      
      if(AC4==false)
      {   
        delay(500);
        digitalWrite(Rele_AC4,LOW); // alimenta a entrada AC 220V
        delay(500);

        Teste_Points(4);

          if(TP1_4==false && TP4_4==false && TP5_4==false && TP6_4==false)
          {
            Serial.println("Aprovada teste Medicao");
            delay(500);
            Teste_Rele(4);

            
          }
          else
          {
            Serial.println("Reprovada teste Medicao");
            Placa4=2;
            delay(500);
          }
          
      }
      else
      {
        
        Placa4=1;
        delay(500);
        Serial.println("Reprovada no teste de curto");
        
      }

}