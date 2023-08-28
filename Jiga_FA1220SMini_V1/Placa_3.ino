void Placa_3()
{
  
      
      if(AC3==false )
      { 
        delay(500);  
        digitalWrite(Rele_AC3,LOW); // alimenta a entrada AC 220V
        delay(500);

        Teste_Points(3);

          if(TP1_3==false && TP4_3==false && TP5_3==false && TP6_3==false)
          {
            Serial.println("Aprovada teste Medicao");
            delay(500);
            Teste_Rele(3);

            
          }
          else
          {
            Serial.println("Reprovada teste Medicao");
            Placa3=2;
            delay(500);
          }
          
      }
      else
      {
        Placa3=1;
        delay(500);
        Serial.println("Reprovada no teste de curto");
        
      }

}