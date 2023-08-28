void Placa_2()
{
  
      
      if(AC2==false)
      {   
        delay(500);
        digitalWrite(Rele_AC2,LOW); // alimenta a entrada AC 220V
        delay(500);

        Teste_Points(2);

          if(TP1_2==false && TP4_2==false && TP5_2==false && TP6_2==false)
          {
            Serial.println("Aprovada teste Medicao");
            delay(500);
            Teste_Rele(2);

            
          }
          else
          {
            Serial.println("Reprovada teste Medicao");
            Placa2=2;
            delay(500);
          }
          
      }
      else
      {
        Placa2=1;
        delay(500);
        Serial.println("Reprovada no teste de curto");
        
      }


}