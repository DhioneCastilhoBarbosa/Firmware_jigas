 void Read_ADC(int modulo)
{
  switch (modulo)
  {
    
    case 1:
      
      adc1_0 = ads1.readADC_SingleEnded(0);
      adc1_1 = ads1.readADC_SingleEnded(1);
      adc1_2 = ads1.readADC_SingleEnded(2);
      adc1_3 = ads1.readADC_SingleEnded(3);
      
      volts1_0 = ads1.computeVolts(adc1_0);
      volts1_1 = ads1.computeVolts(adc1_1);
      volts1_2 = ads1.computeVolts(adc1_2);
      volts1_3 = ads1.computeVolts(adc1_3);
      
      Serial.println("----------------------------ADC1115-Modulo 1-------------------------------");
      Serial.print("AIN0: "); Serial.print(adc1_0); Serial.print("  "); Serial.print(volts1_0); Serial.println("V");
      Serial.print("AIN1: "); Serial.print(adc1_1); Serial.print("  "); Serial.print(volts1_1); Serial.println("V");
      Serial.print("AIN2: "); Serial.print(adc1_2); Serial.print("  "); Serial.print(volts1_2); Serial.println("V");
      Serial.print("AIN3: "); Serial.print(adc1_3); Serial.print("  "); Serial.print(volts1_3); Serial.println("V");
      
     break;
    case 2:
      adc2_0 = ads2.readADC_SingleEnded(0);
      adc2_1 = ads2.readADC_SingleEnded(1);
      adc2_2 = ads2.readADC_SingleEnded(2);
      adc2_3 = ads2.readADC_SingleEnded(3);

      volts2_0 = ads2.computeVolts(adc2_0);
      volts2_1 = ads2.computeVolts(adc2_1);
      volts2_2 = ads2.computeVolts(adc2_2);
      volts2_3 = ads2.computeVolts(adc2_3);

      Serial.println("----------------------------ADC1115-Modulo 2-------------------------------");
      Serial.print("AIN0: "); Serial.print(adc2_0); Serial.print("  "); Serial.print(volts2_0); Serial.println("V");
      Serial.print("AIN1: "); Serial.print(adc2_1); Serial.print("  "); Serial.print(volts2_1); Serial.println("V");
      Serial.print("AIN2: "); Serial.print(adc2_2); Serial.print("  "); Serial.print(volts2_2); Serial.println("V");
      Serial.print("AIN3: "); Serial.print(adc2_3); Serial.print("  "); Serial.print(volts2_3); Serial.println("V");


     break;
    case 3:
      adc3_0 = ads3.readADC_SingleEnded(0);
      adc3_1 = ads3.readADC_SingleEnded(1);
      adc3_2 = ads3.readADC_SingleEnded(2);
      adc3_3 = ads3.readADC_SingleEnded(3);

      volts3_0 = ads3.computeVolts(adc3_0);
      volts3_1 = ads3.computeVolts(adc3_1);
      volts3_2 = ads3.computeVolts(adc3_2);
      volts3_3 = ads3.computeVolts(adc3_3);

      Serial.println("----------------------------ADC1115-Modulo 3-------------------------------");
      Serial.print("AIN0: "); Serial.print(adc3_0); Serial.print("  "); Serial.print(volts3_0); Serial.println("V");
      Serial.print("AIN1: "); Serial.print(adc3_1); Serial.print("  "); Serial.print(volts3_1); Serial.println("V");
      Serial.print("AIN2: "); Serial.print(adc3_2); Serial.print("  "); Serial.print(volts3_2); Serial.println("V");
      Serial.print("AIN3: "); Serial.print(adc3_3); Serial.print("  "); Serial.print(volts3_3); Serial.println("V");

     break;
    case 4:
      adc4_0 = ads4.readADC_SingleEnded(0);
      adc4_1 = ads4.readADC_SingleEnded(1);
      adc4_2 = ads4.readADC_SingleEnded(2);
      adc4_3 = ads4.readADC_SingleEnded(3);
      
      volts4_0 = ads4.computeVolts(adc4_0);
      volts4_1 = ads4.computeVolts(adc4_1);
      volts4_2 = ads4.computeVolts(adc4_2);
      volts4_3 = ads4.computeVolts(adc4_3);

      Serial.println("----------------------------ADC1115-Modulo 4-------------------------------");
      Serial.print("AIN0: "); Serial.print(adc4_0); Serial.print("  "); Serial.print(volts4_0); Serial.println("V");
      Serial.print("AIN1: "); Serial.print(adc4_1); Serial.print("  "); Serial.print(volts4_1); Serial.println("V");
      Serial.print("AIN2: "); Serial.print(adc4_2); Serial.print("  "); Serial.print(volts4_2); Serial.println("V");
      Serial.print("AIN3: "); Serial.print(adc4_3); Serial.print("  "); Serial.print(volts4_3); Serial.println("V");
     
      break;
    default:
      break;
  }
  
}