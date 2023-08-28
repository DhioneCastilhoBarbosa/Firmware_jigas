void Finalizar()
{
  digitalWrite(Carga1,HIGH);
  delay(200);
  digitalWrite(Carga2,HIGH);
  delay(200);
  digitalWrite(Carga3,HIGH);
  delay(200);
  digitalWrite(Carga4,HIGH);
  delay(200);

  digitalWrite(Rele_AC1,HIGH); // desligar alimentação das placas
  delay(200);
  digitalWrite(Rele_AC2,HIGH); // desligar alimentação das placas
  delay(200);
  digitalWrite(Rele_AC3,HIGH); // desligar alimentação das placas
  delay(200);
  digitalWrite(Rele_AC4,HIGH); // desligar alimentação das placas
  delay(500);

  //digitalWrite(pneumatica,HIGH);
  //Mesa_Fechada= false;

  while(digitalRead(Fim_de_Curso)==HIGH)
  {
      for(int i=0; i<=2;i++)
      {
        if(Debug==0)
        {
          
          botao_Debug.setValue(0);
          delay(100);
          botao_HomeDebug.setValue(0);
          delay(100);
          botao_HomeP1.setValue(0);
          delay(100);
          botao_IniciarP1.setValue(0);
          t1.setText("Teste Finalizado");
          if(IniciarP1==1)
          {
            if(Placa1==0)
            {
            
              g5.Set_background_color_bco(2016);
              g5.setText("Placa 1-Aprovada");
            }
            else
            {
              
              g5.Set_background_color_bco(51200);
              g5.setText("Placa 1-Reprovada");
            }
            
          }
          else
          {

            if(Placa1==0)
            {
            
              g1.Set_background_color_bco(2016);
              g1.setText("Placa 1-Aprovada");
            }
            else
            {
              
              g1.Set_background_color_bco(51200);
              g1.setText("Placa 1-Reprovada");
            }

            if(Placa2==0)
            {
              g2.Set_background_color_bco(2016);
              g2.setText("Placa 2-Aprovada");
            }
            else
            {
              g2.Set_background_color_bco(51200);
              g2.setText("Placa 2-Reprovada");
            }
            
            if(Placa3==0)
            {
              g3.Set_background_color_bco(2016);
              g3.setText("Placa 3-Aprovada");
            }
            else
            {
              g3.Set_background_color_bco(51200);
              g3.setText("Placa 3-Reprovada");
            }

            if(Placa4==0)
            {
              g4.Set_background_color_bco(2016);
              g4.setText("Placa 4-Aprovada");
            }
            else
            {
              g4.Set_background_color_bco(51200);
              g4.setText("Placa 4-Reprovada");
            }
          }

          //delay(500);
          //digitalWrite(pneumatica,HIGH);
          
        }
        else 
        {
          
          botao_Debug.setValue(0);
          delay(100);
          botao_HomeDebug.setValue(0);
          delay(100);
          botao_HomeP1.setValue(0);
          delay(100);
          botao_IniciarP1.setValue(0);
          
        }
      }

      delay(500);
      digitalWrite(pneumatica,HIGH); 

      
  }

 

}