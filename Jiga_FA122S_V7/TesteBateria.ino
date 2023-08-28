
////////////////////////////////////////////Testa chaveamento da bateria///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void testeBateria(const int chavbatPin, const int batPin)
{
//////////"Ativa o carregamento da bateria"//////////
  FLAGchavbat = 0;
  digitalWrite(chavbatPin,HIGH);
  delay(1000);
  BAT = digitalRead(batPin);
  

  if(BAT == LOW)  // tem Curto ou Sem tensão                
  { 
    FLAGchavbat = 1;
    for(unsigned int i = 0; i < 50000; i++)
    {
      BAT = digitalRead(batPin);
      if(BAT == HIGH)
      {
        FLAGchavbat = 0;
        
      }
      else FLAGchavbat = 1;
    }
  }
 
  if(BAT == HIGH)
  { 
    FLAGchavbat = 0;

    //////////"Desativa o chaveamento e checa se ta sem tensão no conector"////////
    digitalWrite(chavbatPin,LOW);
    delay(500);

    for(unsigned int i = 0; i < 50000; i++)
    {
      BAT = digitalRead(batPin);
      if(BAT == LOW)
      {
        FLAGchavbat = 0;
        
      }
      else FLAGchavbat = 1;
    }

  }

//////////"Força a desconecta bateria"////////
  digitalWrite(chavbatPin,LOW);
  delay(300);

}
