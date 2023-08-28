////////////////////////////////////////////Leitura Analógica///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
float leituraAnalogica(const int pinoLeitura)       
{
  unsigned long sumAvg = 0;
  unsigned int nLeitura = 0;
  for(int nAvg = 0; nAvg < samplesAvg; nAvg++)
  {
    nLeitura = analogRead(pinoLeitura);       //Valor que será lido varia entre 0 e 1023 (0V e 5V)
    //Serial.println(nLeitura);
    delay(1);
    sumAvg = sumAvg + nLeitura;               //Soma dos "nLeitura" valores lidos, para depois fazer uma média
  }
  delay(10);
  float analog = (sumAvg/(samplesAvg-1))*(5.100000/1024.0000);   //Transforma "bits" em "volts" (regra de 3, se 5 - 1023...V - leitura, V = 5*leitura/1023)
  return(analog);                                                 //Devolve resultado, em volts, da leitura analógica
}
