void Teste_Points(int placa)
{

  switch(placa)
  { 
    
    case 1:
      t1.setText("Teste Points Placa 1");
       delay(200);
       Read_ADC(1);


      if(volts1_0 >= 3.40)
      {
        TP1_1 = false;

        if(Debug==1)
        {
          Tfont.Set_background_color_bco(1248);
        }
      }
      else
      {
        TP1_1 = true;
        if(Debug==1)
        {
          Tfont.Set_background_color_bco(51200);
        }

      }

      if(volts1_1 >= 3.20 && digitalRead(Bat_1)==HIGH) 
      {
        TP4_1 = false;
        
        if(Debug==1)
        {
          Tbat.Set_background_color_bco(1248);
        }
      }
      else
      {
        TP4_1 = true;

        if(Debug==1)
        {
          Tbat.Set_background_color_bco(51200);
        }
      }

      if(volts1_2 >= 3.40)
      {
        TP5_1 = false;

        if(Debug==1)
        {
          Tout.Set_background_color_bco(1248);
        }
      }
      else
      {
        TP5_1 = true;
        if(Debug==1)
        {
          Tout.Set_background_color_bco(51200);
        }
      }

      if(volts1_3 < 0.20 )
      {
        TP6_1 = false;
        if(Debug==1)
        {
          Ttemp.Set_background_color_bco(1248);
        }
      }
      else
      {
        TP6_1 = true;
        if(Debug==1)
        {
          Ttemp.Set_background_color_bco(51200);
        }
      }

      
    break;

    case 2:
      t1.setText("Teste Points Placa 2");
      delay(200);
      Read_ADC(2);
     if(volts2_0 >= 3.40)
      {
        TP1_2 = false;

      }
      else
      {
        TP1_2 = true;
        
      }

      if(volts2_1 >= 3.20 && digitalRead(Bat_2)==HIGH) 
      {
        TP4_2 = false;
        
      }
      else
      {
        TP4_2 = true;
        
      }

      if(volts2_2 >= 3.40)
      {
        TP5_2 = false;

        
      }
      else
      {
        TP5_2 = true;
        
      }

      if(volts2_3 < 0.20 )
      {
        TP6_2 = false;
        
      }
      else
      {
        TP6_2 = true;
        
      } 

    break;

    case 3:
      t1.setText("Teste Points Placa 3");
      delay(200);
      Read_ADC(3);
     if(volts3_0 >= 3.40)
      {
        TP1_3 = false;

      }
      else
      {
        TP1_3 = true;
        
      }

      if(volts3_1 >= 3.50 && digitalRead(Bat_3)==HIGH ) 
      {
        TP4_3 = false;
        
      }
      else
      {
        TP4_3 = true;

      }

      if(volts3_2 >= 3.40)
      {
        TP5_3 = false;

        
      }
      else
      {
        TP5_3 = true;
        
      }

      if(volts3_3 < 0.20 )
      {
        TP6_3 = false;
        
      }
      else
      {
        TP6_3 = true;
        
      } 

    break;

    case 4:

      t1.setText("Teste Points Placa 4");
      delay(200);
      Read_ADC(4);
     if(volts4_0 >= 3.40)
      {
        TP1_4 = false;

      }
      else
      {
        TP1_4 = true;
        
      }

      if(volts4_1 >= 3.50 && digitalRead(Bat_4)==HIGH ) 
      {
        TP4_4 = false;
        
      }
      else
      {
        TP4_4 = true;

      }

      if(volts4_2 >= 3.40)
      {
        TP5_4 = false;

        
      }
      else
      {
        TP5_4 = true;
        
      }

      if(volts4_3 < 0.20 )
      {
        TP6_4 = false;
        
      }
      else
      {
        TP6_4 = true;
        
      } 
     

    break;
  }

}