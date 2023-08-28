void testePlaca(const int batPin, const int fechPin, const int auxPin, const int connAuxPin, const int comFechPin, const int connTerraPin)
{
  BAT = digitalRead(batPin);
  delay(10);
  FECH = digitalRead(fechPin);
  delay(10);
  AUX = digitalRead(auxPin);
  delay(10);
  CONNAUX = digitalRead(connAuxPin);      
  delay(10);
  COMFECH = digitalRead(comFechPin);       
  delay(10);
  CONNTERRA = digitalRead(connTerraPin);       
  delay(10);
  FLAGbat = 0;
  FLAGaux = 0;
  FLAGfech = 0;
  if(BAT == HIGH)     //Teste é feito no divisor resistivo da fonte (5V)
  {
    FLAGbat = 1;
  }
  
  if(FECH == HIGH)    //Teste é feito no pino NA (0V)
  {
    FLAGfech = 1;
  }
  if(COMFECH == LOW)  //Teste é feito no pino C (14,4V)   Identifica curto entre NF e Terra 
  {
    FLAGfech = 1;
  }
  if(AUX == LOW)      //Teste é feito no divisor resistivo da fonte (5V)
  {
    FLAGaux = 1;
  }
  if(CONNAUX == LOW)  //Teste é feito no pino AUX+ (14,4V) Identifica curto entre AUX+ e Terra 
  {
    FLAGaux = 1;
  }
  if(CONNTERRA == HIGH)//Teste é feito no pino Terra (0V) Identifica curto entre Terra e qualquer outro pino 
  {
    FLAGaux = 1;
  }
}
