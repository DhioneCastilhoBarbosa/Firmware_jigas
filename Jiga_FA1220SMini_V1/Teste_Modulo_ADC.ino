void Test_ADC()
{

  if (!ads1.begin(0x48)) {
    Serial.println("Falha no Modulo 1 ADC (0x48)");
    while (1){ delay(10); }
  }
  
   if (!ads2.begin(0x49)) {
    Serial.println("Falha no Modulo 2 ADC (0x49)");
    while (1){ delay(10); }
  }
   
   if (!ads3.begin(0x4A)) {
    Serial.println("Falha no Modulo 3 ADC (0x4A)");
    while (1){ delay(10); }
  } 

   if (!ads4.begin(0x4B)) {
    Serial.println("Falha no Modulo 4 ADC (0x4B)");
    while (1){ delay(10); }
  }

}