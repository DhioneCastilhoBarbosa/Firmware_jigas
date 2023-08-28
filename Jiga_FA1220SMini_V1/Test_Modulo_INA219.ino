void Test_INA219()
{

  if (! ina219_1.begin()) {
    Serial.println("Falha no Modulo 1 INA219 (0x40)");
    while (1) { delay(10); }
  }

  if (! ina219_2.begin()) {
    Serial.println("Falha no Modulo 2 INA219 (0x41)");
    while (1) { delay(10); }
  }

  if (! ina219_3.begin()) {
    Serial.println("Falha no Modulo 3 INA219 (0x44)");
    while (1) { delay(10); }
  }

  if (! ina219_4.begin()) {
    Serial.println("Falha no Modulo 4 INA219 (0x45)");
    while (1) { delay(10); }
  }
 
}