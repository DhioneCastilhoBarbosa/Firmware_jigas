

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
// Inicializa o display no endereco 0x3F
LiquidCrystal_I2C lcd(0x27,16,2); //0x27

//LiquidCrystal_I2C lcd(0x3F,2,1,0,4,5,6,7,3,POSITIVE); //I2C biblioteca notebook do segmento
//LiquidCrystal_I2C lcd(0x3F,16,2);                     //I2C biblioteca PC Lucas
//LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3);

int INICIO = HIGH;
//-------------------------------------------------------------------------------
const int fech1Pin = 52;      // pino de leitura da tensão na fechadura
const int aux1Pin = 46;       // pino de leitura da tensão na saída auxiliar
const int bat1Pin = 48;       // pino de leitura da tensão na bateria
const int comFech1Pin = 50;   // pino de leitura de tensão no C do relé
const int connAux1Pin = 12;   // pino de leitura de tensão no conector da saída auxiliar
const int connTerra1Pin = 8;  // pino de leitura de tensão no Terra
const int analog1Pin = A15;
//-------------------------------------------------------------------------------
const int fech2Pin = 47;      // pino de leitura da tensão na fechadura
const int aux2Pin = 51;//51;       // pino de leitura da tensão na saída auxiliar   @JediLucasSkywalker 05/2021
const int bat2Pin = 53;       // pino de leitura da tensão na bateria
const int comFech2Pin = 49;   // pino de leitura de tensão no C do relé
const int connAux2Pin = 2;    // pino de leitura de tensão no conector da saída auxiliar
const int connTerra2Pin = 3;  // pino de leitura de tensão no Terra
const int analog2Pin = A14;
//-------------------------------------------------------------------------------
const int fech3Pin = 39;      // pino de leitura da tensão na fechadura
const int aux3Pin = 45;       // pino de leitura da tensão na saída auxiliar
const int bat3Pin = 43;       // pino de leitura da tensão na bateria
const int comFech3Pin = 41;   // pino de leitura de tensão no C do relé
const int connAux3Pin = A1;   // pino de leitura de tensão no conector da saída auxiliar
const int connTerra3Pin = A2; // pino de leitura de tensão no Terra
const int analog3Pin = A13;
//-------------------------------------------------------------------------------
const int fech4Pin = 44;      // pino de leitura da tensão na fechadura
const int aux4Pin = 38;       // pino de leitura da tensão na saída auxiliar
const int bat4Pin = 40;       // pino de leitura da tensão na bateria
const int comFech4Pin = 42;   // pino de leitura de tensão no C do relé
const int connAux4Pin = 23;   // pino de leitura de tensão no conector da saída auxiliar
const int connTerra4Pin = 25; // pino de leitura de tensão no Terra
const int analog4Pin = A12;
//-------------------------------------------------------------------------------
const int fech5Pin = 31;      // pino de leitura da tensão na fechadura
const int aux5Pin = A7;//33;       // pino de leitura da tensão na saída auxiliar   @JediLucasSkywalker 05/2021
const int bat5Pin = 35;       // pino de leitura da tensão na bateria
const int comFech5Pin = 37;   // pino de leitura de tensão no C do relé
const int connAux5Pin = 27;   // pino de leitura de tensão no conector da saída auxiliar
const int connTerra5Pin = 28; // pino de leitura de tensão no Terra
const int analog5Pin = A11;
//-------------------------------------------------------------------------------
const int fech6Pin = 36;      // pino de leitura da tensão na fechadura
const int aux6Pin = 30;       // pino de leitura da tensão na saída auxiliar
const int bat6Pin = 32;//32;       // pino de leitura da tensão na bateria
const int comFech6Pin = 34;   // pino de leitura de tensão no C do relé
const int connAux6Pin = 29;   // pino de leitura de tensão no conector da saída auxiliar
const int connTerra6Pin = A0; // pino de leitura de tensão no Terra
const int analog6Pin = A10;
//-------------------------------------------------------------------------------
const int chavfechPin = 9;    // pino do sensor de fechamento da tampa
//-------------------------------------------------------------------------------
const int chavbat1Pin = 14;   // pino que chaveia a bateria da placa 1
const int chavbat2Pin = 15;   // pino que chaveia a bateria da placa 2
const int chavbat3Pin = 16;   // pino que chaveia a bateria da placa 3
const int chavbat4Pin = 17;   // pino que chaveia a bateria da placa 4
const int chavbat5Pin = 18;   // pino que chaveia a bateria da placa 5
const int chavbat6Pin = 19;   // pino que chaveia a bateria da placa 6
//-------------------------------------------------------------------------------
const int rele1Pin = 26;      // pino que aciona os relés
const int rele2Pin = 24;      // pino que aciona os relés
const int rele3Pin = 22;      // pino que aciona os relés
//-------------------------------------------------------------------------------
const int  buttonPin = 11;    // botão para testar só placa 2
const int ledPin = 10;        // status para teste placa 2
//-------------------------------------------------------------------------------
//const int connTerraPin = 23;  // pino de leitura da saída auxiliar no conector (14,4V)
//const int connAuxPin = 25;    // pino de leitura da saída auxiliar no conector (14,4V)
//const int comFechPin = 27;    // pino de leitura do comum do relé no relé (14,4V)
//-------------------------------------------------------------------------------
const int samplesAvg = 50.0000;          //Quantidade de amostras para realizar média da leitura analógica
float leitura = 0;
float cte22R = 0.016000;            //Resistor padrão
//-------------------------------------------------------------------------------

int buttonState = HIGH;       // current state of the button
int testStatus = HIGH;
//-------------------------------------------------------------------------------
int l = 0, c = 0;         //l=linha, c=coluna
//-------------------------------------------------------------------------------
int BAT = 0;
int FECH = 0;
int FECHA = 0;
int FECHB = 0;
int AUX = 0;
int CONNTERRA = 0;
int CONNAUX = 0;
int COMFECH = 0;
//-------------------------------------------------------------------------------
int FLAGbat = 0;
int FLAGfech = 0;
int FLAGaux = 0;
int FLAGchavbat = 0;
int FLAGchavfechA = 0;
int FLAGchavfechB = 0;
int FLAGfechA = 0;
int FLAGfechB = 0;
int FLAGtimerA = 0;
int FLAGtimerB = 0;
////////PLACA 1////////
int FLAGplaca1 = 0;
int FLAGbat1 = 0;
int FLAGfech1 = 0;
int FLAGaux1 = 0;
int FLAGchavbat1 = 0;
int FLAGchavfech1 = 0;
int FLAGtimer1 = 0;
////////PLACA 2////////
int FLAGplaca2 = 0;
int FLAGbat2 = 0;
int FLAGfech2 = 0;
int FLAGaux2 = 0;
int FLAGchavbat2 = 0;
int FLAGchavfech2 = 0;
int FLAGtimer2 = 0;
////////PLACA 3////////
int FLAGplaca3 = 0;
int FLAGbat3 = 0;
int FLAGfech3 = 0;
int FLAGaux3 = 0;
int FLAGchavbat3 = 0;
int FLAGchavfech3 = 0;
int FLAGtimer3 = 0;
////////PLACA 4////////
int FLAGplaca4 = 0;
int FLAGbat4 = 0;
int FLAGfech4 = 0;
int FLAGaux4 = 0;
int FLAGchavbat4 = 0;
int FLAGchavfech4 = 0;
int FLAGtimer4 = 0;
////////PLACA 5////////
int FLAGplaca5 = 0;
int FLAGbat5 = 0;
int FLAGfech5 = 0;
int FLAGaux5 = 0;
int FLAGchavbat5 = 0;
int FLAGchavfech5 = 0;
int FLAGtimer5 = 0;
////////PLACA 6////////
int FLAGplaca6 = 0;
int FLAGbat6 = 0;
int FLAGfech6 = 0;
int FLAGaux6 = 0;
int FLAGchavbat6 = 0;
int FLAGchavfech6 = 0;
int FLAGtimer6 = 0;

int testeOK = 0;
//-------------------------------------------------------------------------------
void setup()
{
  pinMode(44, OUTPUT);
  //-----------------------------------------------------------------------------
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  //-----------------------------------------------------------------------------
  pinMode(fech1Pin, INPUT);
  pinMode(aux1Pin, INPUT);
  pinMode(bat1Pin, INPUT);
  pinMode(comFech1Pin, INPUT);
  pinMode(connAux1Pin, INPUT);
  pinMode(connTerra1Pin, INPUT);
  pinMode(analog1Pin, INPUT);
  //-----------------------------------------------------------------------------
  pinMode(fech2Pin, INPUT);
  pinMode(aux2Pin, INPUT);
  pinMode(bat2Pin, INPUT); 
  pinMode(comFech2Pin, INPUT);
  pinMode(connAux2Pin, INPUT);
  pinMode(connTerra2Pin, INPUT);
  pinMode(analog2Pin, INPUT);
  //-----------------------------------------------------------------------------
  pinMode(fech3Pin, INPUT);
  pinMode(aux3Pin, INPUT);
  pinMode(bat3Pin, INPUT);
  pinMode(comFech3Pin, INPUT);
  pinMode(connAux3Pin, INPUT);
  pinMode(connTerra3Pin, INPUT);
  pinMode(analog3Pin, INPUT);
  //-----------------------------------------------------------------------------
  pinMode(fech4Pin, INPUT);
  pinMode(aux4Pin, INPUT);
  pinMode(bat4Pin, INPUT);
  pinMode(comFech4Pin, INPUT);
  pinMode(connAux4Pin, INPUT);
  pinMode(connTerra4Pin, INPUT);
  pinMode(analog4Pin, INPUT);
  //-----------------------------------------------------------------------------
  pinMode(fech5Pin, INPUT);
  pinMode(aux5Pin, INPUT);
  pinMode(bat5Pin, INPUT);
  pinMode(comFech5Pin, INPUT);
  pinMode(connAux5Pin, INPUT);
  pinMode(connTerra5Pin, INPUT);
  pinMode(analog5Pin, INPUT);
  //-----------------------------------------------------------------------------
  pinMode(fech6Pin, INPUT);
  pinMode(aux6Pin, INPUT);
  pinMode(bat6Pin, INPUT);
  pinMode(comFech6Pin, INPUT);
  pinMode(connAux6Pin, INPUT);
  pinMode(connTerra6Pin, INPUT);
  pinMode(analog6Pin, INPUT);
  //-----------------------------------------------------------------------------
  pinMode(chavfechPin, INPUT_PULLUP);
  //-----------------------------------------------------------------------------
  pinMode(chavbat1Pin, OUTPUT);
  pinMode(chavbat2Pin, OUTPUT);
  pinMode(chavbat3Pin, OUTPUT);
  pinMode(chavbat4Pin, OUTPUT);
  pinMode(chavbat5Pin, OUTPUT);
  pinMode(chavbat6Pin, OUTPUT);
  
  //LOW habilita transistor Q4 que desabilita mosfet Q2, ou seja, desliga a recarga da bateria.
  digitalWrite(chavbat1Pin, LOW); 
  digitalWrite(chavbat2Pin, LOW);
  digitalWrite(chavbat3Pin, LOW);
  digitalWrite(chavbat4Pin, LOW);
  digitalWrite(chavbat5Pin, LOW);
  digitalWrite(chavbat6Pin, LOW);
  //-----------------------------------------------------------------------------
  pinMode(rele1Pin, OUTPUT);
  pinMode(rele2Pin, OUTPUT);
  pinMode(rele3Pin, OUTPUT);
  //-----------------------------------------------------------------------------
  delay(100);
  digitalWrite(rele1Pin, LOW);
  digitalWrite(rele2Pin, LOW);
  digitalWrite(rele3Pin, LOW);
  //-----------------------------------------------------------------------------
   lcd.init(); // set up the LCD's number of columns and rows:
  delay(100);
  lcd.backlight();
  testStatus = LOW;  // mudar o estado de ledPin
  digitalWrite(ledPin, testStatus); // liga ou desliga o LED
  
}

void loop()
{
  INICIO = digitalRead(chavfechPin);
  buttonState = digitalRead(buttonPin);
  lcd.init();                        //Reset do LCD!!!
  delay(100);
  if(INICIO == HIGH)
  {
    while (INICIO == HIGH) //Tampa aberta
    {
      INICIO = digitalRead(chavfechPin);
      buttonState = digitalRead(buttonPin);
      if (buttonState == LOW)
      {
       
        testStatus = !testStatus;  // mudar o estado de ledPin
        digitalWrite(ledPin, testStatus); // liga ou desliga o LED
        while(buttonState == LOW)
        {
          buttonState = digitalRead(buttonPin);
        }
      }
      if (testStatus == HIGH)
      {
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("   FA 1220S     ");
        lcd.setCursor(0, 1);
        lcd.print(" TESTA PLACA 2  ");
        
      }
      else
      {
        //lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("   FA 1220S     ");
        lcd.setCursor(0, 1);
        lcd.print("TODAS AS PLACAS ");
        
      }
      INICIO = digitalRead(chavfechPin);
      delay(200);
    }
  }
  if (INICIO == LOW)   //Se tampa fechou
  {
     
    lcd.init();                   
    delay(100);
    while (INICIO == LOW)                 //Teste acontece enquanto tampa estiver fechada
    {
      INICIO = digitalRead(chavfechPin);
      if (testStatus == HIGH)             
      {
       
        Teste_Placa_Position_2();
      }
      else
      {
        
        Teste_Todas_Placas();
      }
      
      while (testeOK == 1)
      {
        INICIO = digitalRead(chavfechPin);
        imprimeResultados();
        if (INICIO == HIGH)
        {
          testeOK = 0;
          zeraFLAGS();
        }
      }
      zeraFLAGS();
    }
  }
}
///////////////////FIM DO CÓDIGO PRINCIPAL/////////////////////////////////////
