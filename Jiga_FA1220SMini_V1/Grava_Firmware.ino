void firmware()
{
  t1.setText("Gravando firmware aguardade ...");  
  if(Debug==1 || IniciarP1==1 ) // dispara apenas a gravação da placa posição 1
    {
      digitalWrite(GO1,LOW);
      delay(300);
      digitalWrite(GO1,HIGH);
      delay(5000);//delay para finalizar a gravação dos firmwares nas placas   

      if(AC1==false )
      {  
        if(digitalRead(PASS1)==HIGH && digitalRead(FAll1)==LOW)
        {
          Gfirm.Set_background_color_bco(1248);
          Serial.println("Debug || Placa_1- Gravacao do Firmware - OK");
          Placa_1();  
        }
        else
        { 
          Gfirm.Set_background_color_bco(51200);
          Serial.println("Debug || Placa_1 - Gravacao do Firmware - NOK");
          Placa1=1;
        }
      }
      else
      {
        digitalWrite(GO1,HIGH);
        Placa1=1;
      }
    }
    else
    {
    
       
        digitalWrite(GO1,LOW);
        //digitalWrite(GO2,LOW);
        //digitalWrite(GO3,LOW);
        //digitalWrite(GO4,LOW);
        delay(300);
        digitalWrite(GO1,HIGH);
        //digitalWrite(GO2,HIGH);
        //digitalWrite(GO3,HIGH);
        //digitalWrite(GO4,HIGH);

        delay(5000);//delay para finalizar a gravação dos firmwares nas placas 

    if(AC1==false )
      {   
        
          if(digitalRead(PASS1)==HIGH && digitalRead(FAll1)==LOW)
          {
            Serial.println("Gravacao do Firmware Placa 1 - OK");
            Placa_1();
          
          }
          else
          {
            Serial.println("Gravacao do Firmware Placa 1 - NOK");
            Placa1=1;
          }
        
      }
      else
      {
        
        digitalWrite(GO1,HIGH);
        Placa1=1;
      }



    if(AC2==false )
      {   
        
          if(digitalRead(PASS2)==HIGH && digitalRead(FAll2)==LOW)
          {
            Serial.println("Gravacao do Firmware Placa 2 - OK");
            Placa_2();  
          }
          else
          {
            Serial.println("Gravacao do Firmware Placa 2 - NOK");
            Placa2=1;
          }
        
      }
      else
      {
        
        digitalWrite(GO2,HIGH);
        Placa2=1;
      }


    if(AC3==false )
      {   
        
          if(digitalRead(PASS3)==HIGH && digitalRead(FAll3)==LOW)
          {
            Serial.println("Gravacao do Firmware Placa 3 - OK");
            Placa_3();  
          }
          else
          {
            Serial.println("Gravacao do Firmware Placa 3 - NOK");
            Placa3=1;
          }
        
      }
      else
      {
        
        digitalWrite(GO3,HIGH);
        Placa3=1;
      }


    if(AC4==false )
      {   
        
          if(digitalRead(PASS4)==HIGH && digitalRead(FAll4)==LOW)
          {
            Serial.println("Gravacao do Firmware Placa 4 - OK");
            Placa_4();  
          }
          else
          {
            Serial.println("Gravacao do Firmware Placa 4 - NOK");
            Placa4=1;
          }
        
      }
      else
      {
        
        digitalWrite(GO4,HIGH);
        Placa4=1;
      }

    }
}