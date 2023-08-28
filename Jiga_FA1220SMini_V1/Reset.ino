void Reset()
{
    botao_Debug.setValue(0);
    delay(100);
    botao_IniciarP1.setValue(0);
    delay(100);
    
    //IniciarP1 = 0;
    //Iniciar = 0;
    
    g1.Set_background_color_bco(65535);
    g2.Set_background_color_bco(65535);
    g3.Set_background_color_bco(65535);
    g4.Set_background_color_bco(65535);
    g5.Set_background_color_bco(65535);
    AC.Set_background_color_bco(65535);
    Gfirm.Set_background_color_bco(65535);
    Tfont.Set_background_color_bco(65535);
    Tbat.Set_background_color_bco(65535);
    Tout.Set_background_color_bco(65535);
    Ttemp.Set_background_color_bco(65535);
    Rele.Set_background_color_bco(65535);
    OutAux.Set_background_color_bco(65535);
    
    t1.setText("Porta Aberta!");
    g1.setText("Placa 1");
    g2.setText("Placa 2");
    g3.setText("Placa 3");
    g4.setText("Placa 4");
    g5.setText("Placa 1");
    //Debug=0;
    delay(100);
} 