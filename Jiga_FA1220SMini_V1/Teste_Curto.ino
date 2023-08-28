void Test_Curto()
{ 
  Serial.println("teste de Curto");

  delay(100);
 
    if(Debug==1 || IniciarP1==1 ) // dispara apenas a gravação da placa posição 1
    {
      //Serial.println("Teste de Curto Placa 1");
      t1.setText("Teste de curto circuito Placa 1");
      delay(200);
      Entrada_AC= digitalRead(AC_F1);
      if(Entrada_AC == HIGH)
      {
        AC1 = false;
        if(Debug==1)
        {
          AC.Set_background_color_bco(1248);
        }
        delay(100);
      }
      else
      {
        AC1 = true;

        if(Debug==1)
        {
          AC.Set_background_color_bco(51200);
        }

      
      }
    }
    else
    {

      // Serial.println("Teste de Curto Placa 1");
      t1.setText("Teste de curto circuito Placa 1");
      delay(200);
      Entrada_AC= digitalRead(AC_F1);
      if(Entrada_AC == HIGH)
      {
        AC1 = false;

        delay(100);
      }
      else
      {
        AC1 = true;

      }


     // Serial.println("Teste de Curto Placa 2");
      t1.setText("Teste de curto circuito Placa 2");
      delay(200);

      Entrada_AC2 = digitalRead(AC_F2);
      Serial.print(Entrada_AC2);
      if(Entrada_AC2 == HIGH)
      {
        AC2 = false;
       
       delay(100);
      }
      
      if(Entrada_AC2 == LOW)
      {
        AC2 = true;
      }

      //Serial.println("Teste de Curto Placa 3");
      t1.setText("Teste de curto circuito Placa 3");
      delay(200);

      Entrada_AC3 = digitalRead(AC_F3);

      if(Entrada_AC3 == HIGH)
      {
        AC3 = false;
  
        delay(100);
      }
      else
      {
        AC3 = true;


      }


      //Serial.println("Teste de Curto Placa 4");
      t1.setText("Teste de curto circuito Placa 4");
      delay(200);
      Entrada_AC4 = digitalRead(AC_F4);

      if(Entrada_AC4 == HIGH)
      {
        AC4 = false;
  
        delay(100);
      }
      else
      {
        AC4 = true;


      }

    }  
   

  
}