void Teste_Placa_Position_2()
{
        lcd.begin(16,2);
        delay(100);
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("    TESTANDO    ");
        lcd.setCursor(0, 1);
        lcd.print("    PLACA 2     ");
        delay(5000);
        testePlaca(bat2Pin, fech2Pin, aux2Pin, connAux2Pin, comFech2Pin, connTerra2Pin);
        //Problema na bateria 2
        if (FLAGbat == 1)
        {
          FLAGbat2 = 1;
          FLAGbat = 0;
        }
        else FLAGbat2 = 0;
        //Problema na saída NF do relé 2
        if (FLAGfech == 1)
        {
          FLAGfech2 = 1;
          FLAGfech = 0;
        }
        else FLAGfech2 = 0;
        //Problema na saída auxiliar 2
        if (FLAGaux == 1)
        {
          FLAGaux2 = 1;
          FLAGaux = 0;
        }
        else FLAGaux2 = 0;
        INICIO = digitalRead(chavfechPin);
        
        //////////////////////////Temporizador2/////////////////////////////////////////////////
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TESTANDO        ");
        lcd.setCursor(1, 1);
        lcd.print("TEMPORIZADOR   ");
        testeTemporizador(rele1Pin, fech2Pin, fech2Pin, comFech2Pin, comFech2Pin, analog2Pin, analog2Pin);

        //Problema na saída NF do relé 2
        if (FLAGchavfechB == 1)
        {
          FLAGchavfech2 = 1;
          FLAGchavfechB = 0;
        }
        else FLAGchavfech2 = 0;
        //Problema na temporização 2
        if (FLAGtimerB == 1)
        {
          FLAGtimer2 = 1;
          FLAGtimerB = 0;
        }
        else FLAGtimer2 = 0;
        //Problema na saída NA do relé 2
        if (FLAGfechB == 1)
        {
          FLAGfech2 = 1;
          FLAGfechB = 0;
        }


        ////////////////////////////Bateria 2////////////////////////////////////////////////////
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TESTANDO        ");
        lcd.setCursor(1, 1);
        lcd.print("BATERIA        ");
        delay(200);
        
        testeBateria(chavbat2Pin, bat2Pin);
        //Problema na bateria 2
        
        if (FLAGchavbat == 1)
        {
          FLAGchavbat2 = 1;
          FLAGchavbat = 0;
        }
        else FLAGchavbat2 = 0;
        
        INICIO = digitalRead(chavfechPin);
        
        if (FLAGbat2 == 0 && FLAGfech2 == 0 && FLAGaux2 == 0 && FLAGchavbat2 == 0 && FLAGchavfech2 == 0 && FLAGtimer2 == 0)
        {
          FLAGplaca2 = 0;
        }
        else
        {
          FLAGplaca2 = 1;
        }
        testeOK = 1; 
}
