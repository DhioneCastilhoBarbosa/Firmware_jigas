void imprimeResultados(void)
{
  lcd.begin(16,2);
  delay(100);
  INICIO = digitalRead(chavfechPin);
  if (INICIO == HIGH)
  {
    testeOK = 0;
  }
  if (testStatus == HIGH)
  {
    /////////////Só Placa2/////////////////
    if (FLAGplaca2 == 0)
    {
      //lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("   PLACA 2 OK   ");
      lcd.setCursor(0, 1);
      lcd.print("                ");
    }
    else
    {
      if (FLAGbat2 == 1)
      {
        l = 0;
        c = 0;
        lcd.setCursor(c, l);
        lcd.print("BAT2 ");
        
      }
      else
      {
        l = 0;
        c = 0;
        lcd.setCursor(c, l);
        lcd.print("     ");
        
      }
      if (FLAGfech2 == 1)
      {
        l = 0;
        c = 5;
        lcd.setCursor(c, l);
        lcd.print("FECH2 ");
      }
      else
      {
        l = 0;
        c = 5;
        lcd.setCursor(c, l);
        lcd.print("      ");
      }
      if (FLAGaux2 == 1)
      {
        l = 0;
        c = 11;
        lcd.setCursor(c, l);
        lcd.print("AUX2 ");
      }
      else
      {
        l = 0;
        c = 11;
        lcd.setCursor(c, l);
        lcd.print("     ");
      }
      if (FLAGchavbat2 == 1)
      {
        l = 1;
        c = 0;
        lcd.setCursor(c, l);
        lcd.print("CBT2 ");
      }
      else
      {
        l = 1;
        c = 0;
        lcd.setCursor(c, l);
        lcd.print("     ");
      }
      if (FLAGchavfech2 == 1)
      {
        l = 1;
        c = 5;
        lcd.setCursor(c, l);
        lcd.print("CFCH2 ");
      }
      else
      {
        l = 1;
        c = 5;
        lcd.setCursor(c, l);
        lcd.print("      ");
      }
      if (FLAGtimer2 == 1)
      {
        l = 1;
        c = 11;
        lcd.setCursor(c, l);
        lcd.print("TIME2");
      }
      else
      {
        l = 1;
        c = 11;
        lcd.setCursor(c, l);
        lcd.print("     ");
      }
    }
    INICIO = digitalRead(chavfechPin);
    if (INICIO == HIGH)
    {
      testeOK = 0;
    }
    delay(1500);
  }
  else
  {
    INICIO = digitalRead(chavfechPin);
    if (INICIO == HIGH)
    {
      testeOK = 0;
      zeraFLAGS();
    }
    if (!FLAGplaca1 && !FLAGplaca2 && !FLAGplaca3 && !FLAGplaca4 && !FLAGplaca5 && !FLAGplaca6) //Se nennhuma placa deu problema, imprime todas as placas OK
    {
      lcd.setCursor(0, 0);
      lcd.print("   TODAS AS     ");
      lcd.setCursor(0, 1);
      lcd.print("   PLACAS OK    ");
      delay(1500);
    }
    else                                                                                          //Senão.....
    {
      /////////////Placa1/////////////////
      if (FLAGplaca1 == 0)                                                                          //Se placa 1 não deu problema, imprime Placa 1 OK
      {
//        lcd.clear();
//        lcd.setCursor(3, 0);
//        lcd.print("PLACA 1 OK");
      }
      else                                                                                          //Senão, imprime os erros da placa 1 (repete para todas as placas)
      {
        if (FLAGbat1 == 1)
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("BAT1 ");
        }
        else
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGfech1 == 1)
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("FECH1 ");
        }
        else
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGaux1 == 1)
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("AUX1 ");
        }
        else
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavbat1 == 1)
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("CBT1 ");
        }
        else
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavfech1 == 1)
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("CFCH1 ");
        }
        else
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGtimer1 == 1)
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("TIME1");
        }
        else
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
      delay(1500);
      }
      INICIO = digitalRead(chavfechPin);
      if (INICIO == HIGH)
      {
        testeOK = 0;
      }

      /////////////Placa2/////////////////
      if (FLAGplaca2 == 0)
      {
//        lcd.clear();
//        lcd.setCursor(3, 0);
//        lcd.print("PLACA 2 OK");
      }
      else
      {
        if (FLAGbat2 == 1)
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("BAT2 ");
        }
        else
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGfech2 == 1)
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("FECH2 ");
        }
        else
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGaux2 == 1)
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("AUX2 ");
        }
        else
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavbat2 == 1)
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("CBT2 ");
        }
        else
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavfech2 == 1)
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("CFCH2 ");
        }
        else
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGtimer2 == 1)
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("TIME2");
        }
        else
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
      delay(1500);
      }
      INICIO = digitalRead(chavfechPin);
      if (INICIO == HIGH)
      {
        testeOK = 0;
      }
      ///////////////////////////////////
      /////////////Placa3/////////////////
      if (FLAGplaca3 == 0)
      {
//        lcd.clear();
//        lcd.setCursor(3, 0);
//        lcd.print("PLACA 3 OK");
      }
      else
      {
        if (FLAGbat3 == 1)
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("BAT3 ");
        }
        else
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGfech3 == 1)
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("FECH3 ");
        }
        else
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGaux3 == 1)
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("AUX3 ");
        }
        else
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavbat3 == 1)
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("CBT3 ");
        }
        else
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavfech3 == 1)
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("CFCH3 ");
        }
        else
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGtimer3 == 1)
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("TIME3");
        }
        else
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
      delay(1500);
      }
      INICIO = digitalRead(chavfechPin);
      if (INICIO == HIGH)
      {
        testeOK = 0;
      }
      ////////////////////////////////////
      /////////////Placa4/////////////////
      if (FLAGplaca4 == 0)
      {
//        lcd.clear();
//        lcd.setCursor(3, 0);
//        lcd.print("PLACA 4 OK");
      }
      else
      {
        if (FLAGbat4 == 1)
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("BAT4 ");
        }
        else
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGfech4 == 1)
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("FECH4 ");
        }
        else
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGaux4 == 1)
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("AUX4 ");
        }
        else
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavbat4 == 1)
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("CBT4 ");
        }
        else
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavfech4 == 1)
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("CFCH4 ");
        }
        else
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGtimer4 == 1)
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("TIME4");
        }
        else
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
      delay(1500);
      }
      INICIO = digitalRead(chavfechPin);
      if (INICIO == HIGH)
      {
        testeOK = 0;
      }
      ////////////////////////////////////
      /////////////Placa5/////////////////
      if (FLAGplaca5 == 0)
      {
//        lcd.clear();
//        lcd.setCursor(3, 0);
//        lcd.print("PLACA 5 OK");
      }
      else
      {
        if (FLAGbat5 == 1)
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("BAT5 ");
        }
        else
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGfech5 == 1)
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("FECH5 ");
        }
        else
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGaux5 == 1)
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("AUX5 ");
        }
        else
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavbat5 == 1)
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("CBT5 ");
        }
        else
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavfech5 == 1)
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("CFCH5 ");
        }
        else
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGtimer5 == 1)
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("TIME5");
        }
        else
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
      delay(1500);
      }
      INICIO = digitalRead(chavfechPin);
      if (INICIO == HIGH)
      {
        testeOK = 0;
      }
      ////////////////////////////////////
      /////////////Placa6/////////////////
      if (FLAGplaca6 == 0)
      {
//        lcd.clear();
//        lcd.setCursor(3, 0);
//        lcd.print("PLACA 6 OK");
      }
      else
      {
        if (FLAGbat6 == 1)
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("BAT6 ");
        }
        else
        {
          l = 0;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGfech6 == 1)
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("FECH6 ");
        }
        else
        {
          l = 0;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGaux6 == 1)
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("AUX6 ");
        }
        else
        {
          l = 0;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavbat6 == 1)
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("CBT6 ");
        }
        else
        {
          l = 1;
          c = 0;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
        if (FLAGchavfech6 == 1)
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("CFCH6 ");
        }
        else
        {
          l = 1;
          c = 5;
          lcd.setCursor(c, l);
          lcd.print("      ");
        }
        if (FLAGtimer6 == 1)
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("TIME6");
        }
        else
        {
          l = 1;
          c = 11;
          lcd.setCursor(c, l);
          lcd.print("     ");
        }
      delay(1500);
      }
      INICIO = digitalRead(chavfechPin);
      if (INICIO == HIGH)
      {
        testeOK = 0;
      }
    }
  }      
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("FIM DOS");
  lcd.setCursor(1, 1);
  lcd.print("TESTES");
  delay(1000);
  INICIO = digitalRead(chavfechPin);
  if (INICIO == HIGH)
  {
    testeOK = 0;
    zeraFLAGS();
  }
}
