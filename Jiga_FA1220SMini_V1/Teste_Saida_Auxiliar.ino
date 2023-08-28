void saida_aux(int placa)
{
  switch(placa)
  {
    case 1:
      t1.setText("Teste saida Auxiliar Placa 1");
      digitalWrite(Carga1,HIGH);
      delay(500);
       
      Read_Modulo_INA219(1);

      if(current_mA_1 <=1000.0)
      { 
          Serial.println("Placa 1 aprovada teste Saida Auxilair-sem carga");
          Placa1=0;
          digitalWrite(Carga1,LOW);
          delay(500);
          Read_Modulo_INA219(1);
          delay(100);
          if(current_mA_1>=1750.0) //alterar para carga de 2A
          {
            Serial.println("Placa 1 aprovada teste Saida Auxilair-Com carga");
            OutAux.Set_background_color_bco(1248);
            Placa1=0;
            digitalWrite(Carga1,HIGH); // low
          }
          else
          {
             Serial.println("Placa 1 reprovada teste Saida Auxilair-com carga");
             OutAux.Set_background_color_bco(51200);
             Placa1=4;
            
          }
          P1 = true;
      }
      else
      {
          
          Serial.println("Placa 1 reprovada teste Saida Auxilair - sem carga");
          if(Debug==1)
          {
             OutAux.Set_background_color_bco(51200);
          }
          Placa1=4; // valor igual a 4, alterado para teste de display nextion
          P1 = true;
          delay(100);
      }
    break;

    case 2:
      t1.setText("Teste saida Auxiliar Placa 2");
      digitalWrite(Carga2,HIGH);
      delay(500);
       
      Read_Modulo_INA219(2);

      if(current_mA_2 <=1000.0)
      { 
          Serial.println("Placa 2 aprovada teste Saida Auxilair-sem carga");
          Placa2=0;
          digitalWrite(Carga2,LOW);
          delay(500);
          Read_Modulo_INA219(2);
          delay(100);
          if(current_mA_2>=1750.0)
          {
            Serial.println("Placa 1 aprovada teste Saida Auxilair-Com carga");
            Placa2=0;
            digitalWrite(Carga2,HIGH);
          }
          else
          {
            Serial.println("Placa 2 reprovada teste Saida Auxilair-com carga");
            Placa2=4;
          }
      }
      else
      {
          
          Serial.println("Placa 2 reprovada teste Saida Auxilair - sem carga");
          
          Placa1=2; // valor igual a 4, alterado para teste de display nextion
          delay(100);
      }
    break;
    case 3:
     t1.setText("Teste saida Auxiliar Placa 3");
      digitalWrite(Carga3,HIGH);
      delay(500);
       
      Read_Modulo_INA219(3);

      if(current_mA_3 <=1000.0)
      { 
          Serial.println("Placa 3 aprovada teste Saida Auxilair-sem carga");
          Placa3=0;
          digitalWrite(Carga3,LOW);
          delay(500);
          Read_Modulo_INA219(3);
          delay(100);
          if(current_mA_3>=1750.0)
          {
            Serial.println("Placa 3 aprovada teste Saida Auxilair-Com carga");
            Placa3=0;
            digitalWrite(Carga3,HIGH);
          }
          else
          {
             Serial.println("Placa 3 reprovada teste Saida Auxilair-com carga");
            Placa3=4;
          }
      }
      else
      {
          
          Serial.println("Placa 3 reprovada teste Saida Auxilair - sem carga");
         
          Placa3=4; // valor igual a 4, alterado para teste de display nextion
          delay(100);
      }
    break;
    case 4:
     t1.setText("Teste saida Auxiliar Placa 4");
      digitalWrite(Carga4,HIGH);
      delay(500);
       
      Read_Modulo_INA219(4);

      if(current_mA_4 <=1000.0)
      { 
          Serial.println("Placa 4 aprovada teste Saida Auxilair-sem carga");
          Placa4=0;
          digitalWrite(Carga4,LOW);
          delay(500);
          Read_Modulo_INA219(4);
          delay(100);
          if(current_mA_4>=1750.0)
          {
            Serial.println("Placa 4 aprovada teste Saida Auxilair-Com carga");
            Placa4=0;
            digitalWrite(Carga4,HIGH);
          }
          else
          {
             Serial.println("Placa 4 reprovada teste Saida Auxilair-com carga");
            Placa4=4;
          }
      }
      else
      {
          
          Serial.println("Placa 4 reprovada teste Saida Auxilair - sem carga");
         
          Placa4=4; // valor igual a 4, alterado para teste de display nextion
          delay(100);
      }
    break;
    default:
    break;
  }

}