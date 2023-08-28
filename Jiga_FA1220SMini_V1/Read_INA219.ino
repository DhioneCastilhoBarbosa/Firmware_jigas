void Read_Modulo_INA219(int modulo)
{
  switch(modulo)
  {
  
    case 1:
      shuntvoltage_1 = ina219_1.getShuntVoltage_mV();
      busvoltage_1 = ina219_1.getBusVoltage_V();
      current_mA_1 = ina219_1.getCurrent_mA();
      loadvoltage_1 = busvoltage_1 + (shuntvoltage_1 / 1000);

      Serial.println("----------------------------INA219-Modulo 1--------------------------------");
      Serial.print("Bus Voltage:   "); Serial.print(busvoltage_1); Serial.println(" V");
      Serial.print("Shunt Voltage: "); Serial.print(shuntvoltage_1); Serial.println(" mV");
      Serial.print("Load Voltage:  "); Serial.print(loadvoltage_1); Serial.println(" V");
      Serial.print("Current:       "); Serial.print(current_mA_1); Serial.println(" mA");
      Serial.println("");
    

      break;
    case 2:
      shuntvoltage_2 = ina219_2.getShuntVoltage_mV();
      busvoltage_2 = ina219_2.getBusVoltage_V();
      current_mA_2 = ina219_2.getCurrent_mA();
      loadvoltage_2 = busvoltage_2 + (shuntvoltage_2 / 1000);

      Serial.println("----------------------------INA219-Modulo 2--------------------------------");
      Serial.print("Bus Voltage:   "); Serial.print(busvoltage_2); Serial.println(" V");
      Serial.print("Shunt Voltage: "); Serial.print(shuntvoltage_2); Serial.println(" mV");
      Serial.print("Load Voltage:  "); Serial.print(loadvoltage_2); Serial.println(" V");
      Serial.print("Current:       "); Serial.print(current_mA_2); Serial.println(" mA");
      Serial.println("");
      

      break;
    
    case 3:
      shuntvoltage_3 = ina219_3.getShuntVoltage_mV();
      busvoltage_3 = ina219_3.getBusVoltage_V();
      current_mA_3 = ina219_3.getCurrent_mA();
      loadvoltage_3 = busvoltage_3 + (shuntvoltage_3 / 1000);

      Serial.println("----------------------------INA219-Modulo 3--------------------------------");
      Serial.print("Bus Voltage:   "); Serial.print(busvoltage_3); Serial.println(" V");
      Serial.print("Shunt Voltage: "); Serial.print(shuntvoltage_3); Serial.println(" mV");
      Serial.print("Load Voltage:  "); Serial.print(loadvoltage_3); Serial.println(" V");
      Serial.print("Current:       "); Serial.print(current_mA_3); Serial.println(" mA");
      Serial.println("");

      break;
    case 4:
      shuntvoltage_4 = ina219_4.getShuntVoltage_mV();
      busvoltage_4 = ina219_4.getBusVoltage_V();
      current_mA_4 = ina219_4.getCurrent_mA();
      loadvoltage_4 = busvoltage_4 + (shuntvoltage_4 / 1000);

      Serial.println("----------------------------INA219-Modulo 4--------------------------------");
      Serial.print("Bus Voltage:   "); Serial.print(busvoltage_4); Serial.println(" V");
      Serial.print("Shunt Voltage: "); Serial.print(shuntvoltage_4); Serial.println(" mV");
      Serial.print("Load Voltage:  "); Serial.print(loadvoltage_4); Serial.println(" V");
      Serial.print("Current:       "); Serial.print(current_mA_4); Serial.println(" mA");
      Serial.println("");
      delay(1000);
      break;
      default:
        break;
  }    
}