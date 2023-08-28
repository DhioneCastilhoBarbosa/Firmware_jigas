void Teste_Rele(int placa)
{
  switch(placa)
  {
    case 1:
      t1.setText("Teste do Rele Placa 1");
      delay(300);

      if(digitalRead(Leitura_rele_1)==HIGH && digitalRead(Leitura_rele_1_NA)==LOW)
      {
        Rele_1=false;
        digitalWrite(Botueira_1,LOW);
        delay(500);
        digitalWrite(Botueira_1,HIGH);
        delay(300);

        if(digitalRead(Leitura_rele_1)==LOW && digitalRead(Leitura_rele_1_NA)==HIGH)
        {
          Rele_1 = false;
          Serial.println("Placa 1 aprovada teste Rele");
          if(Debug==1)
          {
            Rele.Set_background_color_bco(1248);
          }

          Placa1=0;
          delay(200);
          saida_aux(1);
        }
        else
        {
          Rele_1 = true;
          Serial.println("Placa 1 Reprovada teste Rele estagio 2");
          if(Debug==1)
          {
            Rele.Set_background_color_bco(51200);
          }

          P1 = true;
          Placa1=3;
          delay(100);
          
        }

      }
      else
      {
        Rele_1 = true;
        Serial.println("Placa 1 reprovada teste Rele estagio 1");
        if(Debug==1)
        {
          Rele.Set_background_color_bco(51200);
        }
        P1 = true;
        Placa1=3;
        delay(100);
      }

    break;

    case 2:
      t1.setText("Teste do Rele Placa 2");
      delay(300);

      if(digitalRead(Leitura_rele_2)==HIGH && digitalRead(Leitura_rele_2_NA)==LOW )
      {
        Rele_2=false;
        digitalWrite(Botueira_2,LOW);
        delay(500);
        digitalWrite(Botueira_2,HIGH);
        delay(300);

        if(digitalRead(Leitura_rele_2)==LOW && digitalRead(Leitura_rele_2_NA)==HIGH)
        {
          Rele_2 = false;
          Serial.println("Placa 2 aprovada teste Rele");
          Placa2=0;
          delay(200);
          saida_aux(2);
          
        }
        else
        {
          Rele_2 = true;
          Serial.println("Placa 2 reprovada teste Rele estagio 2");
          Placa2=3;
          delay(100);
          
        }

      }
      else
      {
        Rele_2 = true;
        Serial.println("Placa 2 reprovada teste Rele estagio 1");
        Placa2=3;
        delay(100);
      }
    break;

    case 3:
      t1.setText("Teste do Rele Placa 3");
      delay(300);

      if(digitalRead(Leitura_rele_3)==HIGH && digitalRead(Leitura_rele_3_NA)==LOW )
      {
        Rele_3=false;
        digitalWrite(Botueira_3,LOW);
        delay(500);
        digitalWrite(Botueira_3,HIGH);
        delay(300);

        if(digitalRead(Leitura_rele_3)==LOW && digitalRead(Leitura_rele_3_NA)==HIGH)
        {
          Rele_3 = false;
          Serial.println("Placa 3 aprovada teste Rele");
          Placa3=0;
          delay(200);
          saida_aux(3);
          
        }
        else
        {
          Rele_3 = true;
          Serial.println("Placa 3 reprovada teste Rele estagio 2");
          Placa3=3;
          delay(100);
          
        }

      }
      else
      {
        Rele_3 = true;
        Serial.println("Placa 3 reprovada teste Rele estagio 1");
        Placa3=3;
        delay(100);
      }
    break;

    case 4:
      t1.setText("Teste do Rele Placa 4");
      delay(300);

      if(digitalRead(Leitura_rele_4)==HIGH && digitalRead(Leitura_rele_4_NA)==LOW)
      {
        Rele_4=false;
        digitalWrite(Botueira_4,LOW);
        delay(500);
        digitalWrite(Botueira_4,HIGH);
        delay(300);

        if(digitalRead(Leitura_rele_4)==LOW && digitalRead(Leitura_rele_4_NA)==HIGH)
        {
          Rele_4 = false;
          Serial.println("Placa 4 aprovada teste Rele");
          Placa4=0;
          delay(200);
          saida_aux(4);
          
        }
        else
        {
          Rele_4 = true;
          Serial.println("Placa 4 reprovada teste Rele estagio 2");
          Placa4=3;
          delay(100);
        }

      }
      else
      {
        Rele_4 = true;
        Serial.println("Placa 4 reprovada teste Rele estagio 1");
        Placa4=3;
        delay(100);
      }
    break;
    default:
    break;
  }

}