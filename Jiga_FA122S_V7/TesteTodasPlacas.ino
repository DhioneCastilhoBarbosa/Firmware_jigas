void Teste_Todas_Placas()
{
       INICIO = digitalRead(chavfechPin);
        lcd.init();
        delay(100);
        ////////////////////////////Placa 1//////////////////////////////////////////////////////
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TESTANDO        ");
        lcd.setCursor(0, 1);
        lcd.print("PLACA 1         ");
        delay(5000); // 6000
        testePlaca(bat1Pin, fech1Pin, aux1Pin, connAux1Pin, comFech1Pin, connTerra1Pin);
        //Problema na bateria 1
        if (FLAGbat == 1)
        {
          FLAGbat1 = 1;
          FLAGbat = 0;
        }
        //Problema na saída NF do relé 1
        if (FLAGfech == 1)
        {
          FLAGfech1 = 1;
          FLAGfech = 0;
        }
        //Problema na saída auxiliar 1
        if (FLAGaux == 1)
        {
          FLAGaux1 = 1;
          FLAGaux = 0;
        }
        INICIO = digitalRead(chavfechPin);
        ////////////////////////////Placa 2//////////////////////////////////////////////////////
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TESTANDO        ");
        lcd.setCursor(0, 1);
        lcd.print("PLACA 2         ");
        delay(250);
        testePlaca(bat2Pin, fech2Pin, aux2Pin, connAux2Pin, comFech2Pin, connTerra2Pin);
        //Problema na bateria 2
        if (FLAGbat == 1)
        {
          FLAGbat2 = 1;
          FLAGbat = 0;
        }
        //Problema na saída NF do relé 2
        if (FLAGfech == 1)
        {
          FLAGfech2 = 1;
          FLAGfech = 0;
        }
        //Problema na saída auxiliar 2
        if (FLAGaux == 1)
        {
          FLAGaux2 = 1;
          FLAGaux = 0;
        }
        INICIO = digitalRead(chavfechPin);
        ////////////////////////////Placa 3//////////////////////////////////////////////////////
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TESTANDO        ");
        lcd.setCursor(0, 1);
        lcd.print("PLACA 3         ");
        delay(250);
        testePlaca(bat3Pin, fech3Pin, aux3Pin, connAux3Pin, comFech3Pin, connTerra3Pin);
        //Problema na bateria 3
        if (FLAGbat == 1)
        {
          FLAGbat3 = 1;
          FLAGbat = 0;
        }
        //Problema na saída NF do relé 3
        if (FLAGfech == 1)
        {
          FLAGfech3 = 1;
          FLAGfech = 0;
        }
        //Problema na saída auxiliar 3
        if (FLAGaux == 1)
        {
          FLAGaux3 = 1;
          FLAGaux = 0;
        }
        INICIO = digitalRead(chavfechPin);
        ////////////////////////////Placa 4//////////////////////////////////////////////////////
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TESTANDO        ");
        lcd.setCursor(0, 1);
        lcd.print("PLACA 4         ");
        delay(250);
        testePlaca(bat4Pin, fech4Pin, aux4Pin, connAux4Pin, comFech4Pin, connTerra4Pin);
        //Problema na bateria 4
        if (FLAGbat == 1)
        {
          FLAGbat4 = 1;
          FLAGbat = 0;
        }
        //Problema na saída NF do relé 4
        if (FLAGfech == 1)
        {
          FLAGfech4 = 1;
          FLAGfech = 0;
        }
        //Problema na saída auxiliar 4
        if (FLAGaux == 1)
        {
          FLAGaux4 = 1;
          FLAGaux = 0;
        }
        INICIO = digitalRead(chavfechPin);
        ////////////////////////////Placa 5//////////////////////////////////////////////////////
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TESTANDO        ");
        lcd.setCursor(0, 1);
        lcd.print("PLACA 5         ");
        delay(250);
        testePlaca(bat5Pin, fech5Pin, aux5Pin, connAux5Pin, comFech5Pin, connTerra5Pin);
        //Problema na bateria 5
        if (FLAGbat == 1)
        {
          FLAGbat5 = 1;
          FLAGbat = 0;
        }
        //Problema na saída NF do relé 5
        if (FLAGfech == 1)
        {
          FLAGfech5 = 1;
          FLAGfech = 0;
        }
        //Problema na saída auxiliar 5
        if (FLAGaux == 1)
        {
          FLAGaux5 = 1;
          FLAGaux = 0;
        }
        INICIO = digitalRead(chavfechPin);
        ////////////////////////////Placa 6//////////////////////////////////////////////////////
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TESTANDO        ");
        lcd.setCursor(0, 1);
        lcd.print("PLACA 6         ");
        delay(250);
        testePlaca(bat6Pin, fech6Pin, aux6Pin, connAux6Pin, comFech6Pin, connTerra6Pin);
        //Problema na bateria 6
        if (FLAGbat == 1)
        {
          FLAGbat6 = 1;
          FLAGbat = 0;
        }
        //Problema na saída NF do relé 6
        if (FLAGfech == 1)
        {
          FLAGfech6 = 1;
          FLAGfech = 0;
        }
        //Problema na saída auxiliar 6
        if (FLAGaux == 1)
        {
          FLAGaux6 = 1;
          FLAGaux = 0;
        }
        INICIO = digitalRead(chavfechPin);
        /////////////////////////////////////////////////////////////////////////////////////////
        //lcd.clear();
        // troca teste bateria depois do temporizador 
        ////////////////////////////////////////////////////////////////////////////////////////
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("TESTANDO        ");
        lcd.setCursor(0, 1);
        lcd.print("TEMPORIZADOR    ");
        ////////////////////////////Temporizador 1 e 2//////////////////////////////////////////
        testeTemporizador(rele1Pin, fech1Pin, fech2Pin, comFech1Pin, comFech2Pin, analog1Pin, analog2Pin);
        //Problema na saída NF do relé 1
        if (FLAGchavfechA == 1)
        {
          FLAGchavfech1 = 1;
          FLAGchavfechA = 0;
        }
        else FLAGchavfech1 = 0;
        //Problema na temporização 1
        if (FLAGtimerA == 1)
        {
          FLAGtimer1 = 1;
          FLAGtimerA = 0;
        }
        //Problema na saída NA do relé 1
        if (FLAGfechA == 1)
        {
          FLAGfech1 = 1;
          FLAGfechA = 0;
        }
        else FLAGfech1 = 0;
        
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
        else FLAGfech2 = 0;

        ////////////////////////////Temporizador 3 e 4//////////////////////////////////////////
        testeTemporizador(rele2Pin, fech3Pin, fech4Pin, comFech3Pin, comFech4Pin, analog3Pin, analog4Pin);
        //Problema na saída NF do relé 1
        if (FLAGchavfechA == 1)
        {
          FLAGchavfech3 = 1;
          FLAGchavfechA = 0;
        }
        else FLAGchavfech3 = 0;
        //Problema na temporização 3
        if (FLAGtimerA == 1)
        {
          FLAGtimer3 = 1;
          FLAGtimerA = 0;
        }
        else FLAGtimer3 = 0;
        //Problema na saída NA do relé 1
        if (FLAGfechA == 1)
        {
          FLAGfech3 = 1;
          FLAGfechA = 0;
        }
        else FLAGfech3 = 0;
        
        //Problema na saída NF do relé 2
        if (FLAGchavfechB == 1)
        {
          FLAGchavfech4 = 1;
          FLAGchavfechB = 0;
        }
        else FLAGchavfech4 = 0;
        //Problema na temporização 4
        if (FLAGtimerB == 1)
        {
          FLAGtimer4 = 1;
          FLAGtimerB = 0;
        }
        else FLAGtimer4 = 0;
        //Problema na saída NA do relé 2
        if (FLAGfechB == 1)
        {
          FLAGfech4 = 1;
          FLAGfechB = 0;
        }
        else FLAGfech4 = 0;

        ////////////////////////////Temporizador 5 e 6//////////////////////////////////////////  
        testeTemporizador(rele3Pin, fech5Pin, fech6Pin, comFech5Pin, comFech6Pin, analog5Pin, analog6Pin);
        //Problema na saída NF do relé 1
        if (FLAGchavfechA == 1)
        {
          FLAGchavfech5 = 1;
          FLAGchavfechA = 0;
        }
        else FLAGchavfech5 = 0;
        //Problema na temporização 5
        if (FLAGtimerA == 1)
        {
          FLAGtimer5 = 1;
          FLAGtimerA = 0;
        }
        else FLAGtimer5 = 0;
        //Problema na saída NA do relé 1
        if (FLAGfechA == 1)
        {
          FLAGfech5 = 1;
          FLAGfechA = 0;
        }
        else FLAGfech5 = 0;
        
        //Problema na saída NF do relé 2
        if (FLAGchavfechB == 1)
        {
          FLAGchavfech6 = 1;
          FLAGchavfechB = 0;
        }
        else FLAGchavfech6 = 0;
        //Problema na temporização 6
        if (FLAGtimerB == 1)
        {
          FLAGtimer6 = 1;
          FLAGtimerB = 0;
        }
        else FLAGtimer6 = 0;
        //Problema na saída NA do relé 2
        if (FLAGfechB == 1)
        {
          FLAGfech6 = 1;
          FLAGfechB = 0;
        }
        else FLAGfech6 = 0;
        
        INICIO = digitalRead(chavfechPin);
      
        lcd.setCursor(0, 0);
        lcd.print("TESTANDO        ");
        lcd.setCursor(0, 1);
        lcd.print("BATERIAS        ");
        delay(200);
        ////////////////////////////Bateria 1////////////////////////////////////////////////////
        testeBateria(chavbat1Pin, bat1Pin);
        //Problema na bateria 1
        if (FLAGchavbat == 1)
        {
          FLAGchavbat1 = 1;
          FLAGchavbat = 0;
        }
        else FLAGchavbat1 = 0;
        ////////////////////////////Bateria 2////////////////////////////////////////////////////
        testeBateria(chavbat2Pin, bat2Pin);
        //Problema na bateria 2
        if (FLAGchavbat == 1)
        {
          FLAGchavbat2 = 1;
          FLAGchavbat = 0;
        }
        else FLAGchavbat2 = 0;
        ////////////////////////////Bateria 3////////////////////////////////////////////////////
        testeBateria(chavbat3Pin, bat3Pin);
        //Problema na bateria 3
        if (FLAGchavbat == 1)
        {
          FLAGchavbat3 = 1;
          FLAGchavbat = 0;
        }
        else FLAGchavbat3 = 0;
        ////////////////////////////Bateria 4////////////////////////////////////////////////////
        testeBateria(chavbat4Pin, bat4Pin);
        //Problema na bateria 4
        if (FLAGchavbat == 1)
        {
          FLAGchavbat4 = 1;
          FLAGchavbat = 0;
        }
        else FLAGchavbat4 = 0;
        ////////////////////////////Bateria 5////////////////////////////////////////////////////
        testeBateria(chavbat5Pin, bat5Pin);
        //Problema na bateria 5
        if (FLAGchavbat == 1)
        {
          FLAGchavbat5 = 1;
          FLAGchavbat = 0;
        }
        else FLAGchavbat5 = 0;
        ////////////////////////////Bateria 6////////////////////////////////////////////////////
        testeBateria(chavbat6Pin, bat6Pin);
        //Problema na bateria 6
        if (FLAGchavbat == 1)
        {
          FLAGchavbat6 = 1;
          FLAGchavbat = 0;
        }
        else FLAGchavbat6 = 0;

        
        INICIO = digitalRead(chavfechPin);

        if (FLAGbat1 == 0 && FLAGfech1 == 0 && FLAGaux1 == 0 && FLAGchavbat1 == 0 && FLAGchavfech1 == 0 && FLAGtimer1 == 0)
        {
          FLAGplaca1 = 0;
        }
        else FLAGplaca1 = 1;
        if (FLAGbat2 == 0 && FLAGfech2 == 0 && FLAGaux2 == 0 && FLAGchavbat2 == 0 && FLAGchavfech2 == 0 && FLAGtimer2 == 0)
        {
          FLAGplaca2 = 0;
        }
        else FLAGplaca2 = 1;
        if (FLAGbat3 == 0 && FLAGfech3 == 0 && FLAGaux3 == 0 && FLAGchavbat3 == 0 && FLAGchavfech3 == 0 && FLAGtimer3 == 0)
        {
          FLAGplaca3 = 0;
        }
        else FLAGplaca3 = 1;
        if (FLAGbat4 == 0 && FLAGfech4 == 0 && FLAGaux4 == 0 && FLAGchavbat4 == 0 && FLAGchavfech4 == 0 && FLAGtimer4 == 0)
        {
          FLAGplaca4 = 0;
        }
        else FLAGplaca4 = 1;
        if (FLAGbat5 == 0 && FLAGfech5 == 0 && FLAGaux5 == 0 && FLAGchavbat5 == 0 && FLAGchavfech5 == 0 && FLAGtimer5 == 0)
        {
          FLAGplaca5 = 0;
        }
        else FLAGplaca5 = 1;
        if (FLAGbat6 == 0 && FLAGfech6 == 0 && FLAGaux6 == 0 && FLAGchavbat6 == 0 && FLAGchavfech6 == 0 && FLAGtimer6 == 0)
        {
          FLAGplaca6 = 0;
        }
        else FLAGplaca6 = 1;
        testeOK = 1;
}
