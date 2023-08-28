void testeTemporizador(const int relePin, const int fechPinA, const int fechPinB, const int comFechPinA, const int comFechPinB, const int analogPinA, const int analogPinB)
{
  FLAGchavfechA = 0;
  FLAGchavfechB = 0;
  FLAGfechA = 0;
  FLAGfechB = 0;
  digitalWrite(relePin, HIGH);
  delay(500); // 150 ms para placa com firmware antigo 
  digitalWrite(relePin, LOW);
  FECHA = digitalRead(fechPinA);
  FECHB = digitalRead(fechPinB);
  if(FECHA == LOW)
  {
    for(unsigned int i = 0; i < 50000; i++)
    {
      FECHA = digitalRead(fechPinA);
      if(FECHA == HIGH)
      {
        FLAGchavfechA = 0;
        break;
      }
      else FLAGchavfechA = 1;
    }
  }
  COMFECH = digitalRead(comFechPinA);
  if(COMFECH == LOW)  //Teste é feito no pino C (14,4V)   Identifica curto entre NA e Terra 
  {
    FLAGfechA = 1;
  }
  if(FECHB == LOW)
  {
    for(unsigned int i = 0; i < 50000; i++)
    {
      FECHB = digitalRead(fechPinB);
      if(FECHB == HIGH)
      {
        FLAGchavfechB = 0;
        break;
      }
      else FLAGchavfechB = 1;
    }
  }
  COMFECH = digitalRead(comFechPinB);
  if(COMFECH == LOW)  //Teste é feito no pino C (14,4V)   Identifica curto entre NA e Terra 
  {
    FLAGfechB = 1;
  }
  delay(1500);                      //espera pouco mais de 1 segundo para relé voltar
  FECHA = digitalRead(fechPinA);
  delay(10);
  FECHB = digitalRead(fechPinB);
  delay(10);
  if (FECHA == HIGH)                //Se relé não voltou de pois de pouco mais de 1 segundo (colou)
  {
    FLAGtimerA = 1;
  }
  if (FECHB == HIGH)                //Se relé não voltou de pois de pouco mais de 1 segundo (colou)
  {
    FLAGtimerB = 1;
  }
  
}
