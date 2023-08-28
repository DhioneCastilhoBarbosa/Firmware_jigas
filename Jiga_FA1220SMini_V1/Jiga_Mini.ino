
#include "Nextion.h"
#include <Wire.h>
#include <Adafruit_ADS1X15.h>
#include <Adafruit_INA219.h>
#include <LiquidCrystal_I2C.h>



#define   ADC_16BIT_MAX   65536
/*--------------------------------------------Config.ADS1115-----------------------------------*/
Adafruit_ADS1115 ads1;
Adafruit_ADS1115 ads2;
Adafruit_ADS1115 ads3;
Adafruit_ADS1115 ads4;

int16_t adc1_0, adc1_1, adc1_2, adc1_3;
int16_t adc2_0, adc2_1, adc2_2, adc2_3;
int16_t adc3_0, adc3_1, adc3_2, adc3_3;
int16_t adc4_0, adc4_1, adc4_2, adc4_3;

float volts1_0, volts1_1, volts1_2, volts1_3;
float volts2_0, volts2_1, volts2_2, volts2_3;
float volts3_0, volts3_1, volts3_2, volts3_3;
float volts4_0, volts4_1, volts4_2, volts4_3;
/*--------------------------------------------Config.Ina219-----------------------------------*/

Adafruit_INA219 ina219_1(0x40);
Adafruit_INA219 ina219_2(0x41);
Adafruit_INA219 ina219_3(0x44);
Adafruit_INA219 ina219_4(0x45);


float current_mA_1 = 0;
float loadvoltage_1 = 0;
float shuntvoltage_1 = 0;
float busvoltage_1 = 0;

float current_mA_2 = 0;
float loadvoltage_2 = 0;
float shuntvoltage_2 = 0;
float busvoltage_2 = 0;

float current_mA_3 = 0;
float loadvoltage_3 = 0;
float shuntvoltage_3 = 0;
float busvoltage_3 = 0;

float current_mA_4 = 0;
float loadvoltage_4 = 0;
float shuntvoltage_4 = 0;
float busvoltage_4 = 0;

/*-------------------------------------------configurações Placa 1---------------------------------------------------*/

#define AC_F1 22
#define Bat_1 24
#define Botueira_1 36
#define Leitura_rele_1 32
#define Leitura_rele_1_NA 30
#define Rele_AC1 34
#define Carga1 26
#define GO1 54
#define FAll1 62
#define PASS1 58

bool AC1 = false;
bool BAT1 = false;
bool AUX1 = false;
bool BOTAO1 = false;

bool TP1_1 = false; // Tensão da fonte 
bool TP4_1 = false; // Tensão da Bateria
bool TP5_1 = false; // Tensão da saida auxiliar 
bool TP6_1 = false; // Temporizador 
bool Rele_1 = false;
bool Tensao_Aux1 = false;
bool P1 = false;

int Entrada_AC;
int Bateria;
int Saida_aux;
int button;


/*---------------------------------------------configuração Placa 2-----------------------------------------------*/

#define AC_F2 40
#define Bat_2 42
#define Botueira_2 48
#define Leitura_rele_2 50
#define Leitura_rele_2_NA 46
#define Rele_AC2 52
#define Carga2 27
#define GO2 55
#define FAll2 63
#define PASS2 59

bool AC2 = false;
bool BAT2 = false;
bool AUX2 = false;
bool BOTAO2 = false;

bool TP1_2 = false; // Tensão da fonte 
bool TP4_2 = false; // Tensão da Bateria
bool TP5_2 = false; // Tensão da saida auxiliar 
bool TP6_2 = false; // Temporizador 
bool Rele_2 = false;
bool Tensao_Aux2 = false;

int Entrada_AC2;
int Bateria2;
int Saida_aux2;
int button2;

/*---------------------------------------------configuração Placa 3-----------------------------------------------*/

#define AC_F3 23
#define Bat_3 25
#define Botueira_3 31
#define Leitura_rele_3 33
#define Leitura_rele_3_NA 37
#define Rele_AC3 35
#define Carga3 28
#define GO3 56
#define FAll3 64
#define PASS3 60

bool AC3 = false;
bool BAT3 = false;
bool AUX3 = false;
bool BOTAO3 = false;

bool TP1_3 = false; // Tensão da fonte 
bool TP4_3 = false; // Tensão da Bateria
bool TP5_3 = false; // Tensão da saida auxiliar 
bool TP6_3 = false; // Temporizador 
bool Rele_3 = false;
bool Tensao_Aux3 = false;

int Entrada_AC3;
int Bateria3;
int Saida_aux3;
int button3;

/*---------------------------------------------configuração Placa 4-----------------------------------------------*/
#define AC_F4 39
#define Bat_4 41
#define Botueira_4 47
#define Leitura_rele_4 49
#define Leitura_rele_4_NA 53
#define Rele_AC4 51
#define Carga4 29
#define GO4 57
#define FAll4 65
#define PASS4 61


bool AC4 = false;
bool BAT4 = false;
bool AUX4 = false;
bool BOTAO4 = false;

bool TP1_4 = false; // Tensão da fonte 
bool TP4_4 = false; // Tensão da Bateria
bool TP5_4 = false; // Tensão da saida auxiliar 
bool TP6_4 = false; // Temporizador 
bool Rele_4 = false;
bool Tensao_Aux4 = false;

int Entrada_AC4;
int Bateria4;
int Saida_aux4;
int button4;

int Valor_Analogico_High = 51;
int Valor_Analogico_Low = 0;
/*---------------------------------------------configuração geral-------------------------------------------------*/


bool Mesa_Fechada = false;
#define Fim_de_Curso 17
#define Baixar_Mesa 12
#define pneumatica 10
#define Sensor_Mesa 6
#define ICP 9

int Placa1 = 0;
int Placa2 = 0;
int Placa3 = 0;
int Placa4 = 0;

 

uint32_t Iniciar;
uint32_t IniciarP1;
uint32_t Debug;
uint32_t Debug_Ativo =0;
uint32_t IniciarP1_Ativo =0;
uint32_t Iniciar_Ativo =0;


volatile byte state = LOW;

NexDSButton botao_IniciarP1 = NexDSButton(0, 9, "bt5"); //(2, 3, "bt6")
NexDSButton botao_Debug = NexDSButton(0, 8, "bt2");//(1, 1, "bt1")
NexDSButton botao_HomeDebug = NexDSButton(1, 13, "bt3");
NexDSButton botao_HomeP1 = NexDSButton(2, 3, "bt7");


NexText t1 = NexText(0, 7, "t1");

NexScrolltext g1 = NexScrolltext(0, 1, "g0");
NexScrolltext g2 = NexScrolltext(0, 2, "g1");
NexScrolltext g3 = NexScrolltext(0, 3, "g2");
NexScrolltext g4 = NexScrolltext(0, 4, "g3");
NexScrolltext g5 = NexScrolltext(2, 5, "g4");

NexCheckbox AC = NexCheckbox(1, 5, "c0");
NexCheckbox Tfont = NexCheckbox(1, 14, "c4");
NexCheckbox Tbat = NexCheckbox(1, 16, "c5");
NexCheckbox Tout = NexCheckbox(1, 18, "c6");
NexCheckbox Ttemp = NexCheckbox(1, 20, "c7");
NexCheckbox Rele = NexCheckbox(1, 22, "c8");
NexCheckbox OutAux = NexCheckbox(1, 24, "c9");
NexCheckbox Gfirm = NexCheckbox(1, 19, "c1");


NexPage page0    = NexPage(0, 0, "page0");
NexPage page1    = NexPage(1, 0, "page1");
NexPage page2    = NexPage(2, 0, "page2");
NexPage page3    = NexPage(3, 0, "page3");



char buffer[100] = {0};

NexTouch *nex_listen_list[] = 
{   &botao_IniciarP1,
    &botao_Debug,
    &botao_HomeDebug,
    &botao_HomeP1,
    &page0,
    &page1,
    &page2,
    &page3,
    NULL
};


void t1PopCallback(void *ptr)
{
  dbSerialPrintln("t1PopCallback");     
}

void page0PopCallback(void *ptr)
{
 dbSerialPrintln("page0PopCallback");
 page0.show();
}

void page3PopCallback(void *ptr)
{
 dbSerialPrintln("page3PopCallback");
 page3.show();
}



void setup() {

  // configuração inicial dos pinos de gravação
   
   delay(6000);
   pinMode(ICP,OUTPUT);
   digitalWrite(ICP,LOW);
   delay(2000);
   pinMode(GO1,OUTPUT);
   pinMode(GO2,OUTPUT);
   pinMode(GO3,OUTPUT);
   pinMode(GO4,OUTPUT);
   digitalWrite(GO1,HIGH);
   digitalWrite(GO2,HIGH);
   digitalWrite(GO3,HIGH);
   digitalWrite(GO4,HIGH);
   pinMode(PASS1,INPUT);
   pinMode(PASS2,INPUT);
   pinMode(PASS3,INPUT);
   pinMode(PASS4,INPUT);
   pinMode(FAll1, INPUT);
   pinMode(FAll2, INPUT);
   pinMode(FAll3, INPUT);
   pinMode(FAll4, INPUT);
  //

  
  nexInit();  //inicializa o tft
  Serial.begin(9600);
  
  ads1.begin(0x48);  // Initialize ads1115 at address 0x48 = Modulo 1
  ads2.begin(0x49);  // Initialize ads1115 at address 0x49 = Modulo 2
  ads3.begin(0x4A);  // Initialize ads1115 at address 0x4A = Modulo 3
  ads4.begin(0x4B);  // Initialize ads1115 at address 0x4B = Modulo 4

  ina219_1.begin(); // Initialize ina219 at address 0x40 = Modulo 1
  ina219_2.begin(); // Initialize ina219 at address 0x40 = Modulo 2
  ina219_3.begin(); // Initialize ina219 at address 0x40 = Modulo 3
  ina219_4.begin(); // Initialize ina219 at address 0x40 = Modulo 4

  Test_ADC();
  Test_INA219();
  
  Serial.println("Sistema ok");

  t1.setText("Sistema ok");

  t1.attachPop(t1PopCallback);
 

  pinMode(Fim_de_Curso, INPUT_PULLUP);
  pinMode(Baixar_Mesa, INPUT_PULLUP);
  pinMode(pneumatica,OUTPUT);
  pinMode(Sensor_Mesa, INPUT_PULLUP);

  pinMode(AC_F1,INPUT);
  pinMode(Bat_1,INPUT);
  pinMode(Leitura_rele_1,INPUT);
  pinMode(Leitura_rele_1_NA,INPUT);
  pinMode(Rele_AC1,OUTPUT);
  pinMode(Botueira_1,OUTPUT);
  pinMode(Carga1,OUTPUT);
  


  pinMode(AC_F2,INPUT);
  pinMode(Bat_2,INPUT);
  pinMode(Leitura_rele_2,INPUT);
  pinMode(Leitura_rele_2_NA,INPUT);
  pinMode(Rele_AC2,OUTPUT);
  pinMode(Botueira_2,OUTPUT);
  pinMode(Carga2,OUTPUT);

  pinMode(AC_F3,INPUT);
  pinMode(Bat_3,INPUT);
  pinMode(Leitura_rele_3,INPUT);
  pinMode(Leitura_rele_3_NA,INPUT);
  pinMode(Rele_AC3,OUTPUT);
  pinMode(Botueira_3,OUTPUT);
  pinMode(Carga3,OUTPUT);

  pinMode(AC_F4,INPUT);
  pinMode(Bat_4,INPUT);
  pinMode(Leitura_rele_4,INPUT);
  pinMode(Leitura_rele_4_NA,INPUT);
  pinMode(Rele_AC4,OUTPUT);
  pinMode(Botueira_4,OUTPUT);
  pinMode(Carga4,OUTPUT);

  digitalWrite(Botueira_1,HIGH);
  digitalWrite(Rele_AC1,HIGH);
  digitalWrite(Carga1,HIGH);

  digitalWrite(Botueira_2,HIGH);
  digitalWrite(Rele_AC2,HIGH);
  digitalWrite(Carga2,HIGH);

  digitalWrite(Botueira_3,HIGH);
  digitalWrite(Rele_AC3,HIGH);
  digitalWrite(Carga3,HIGH);

  digitalWrite(Botueira_4,HIGH);
  digitalWrite(Rele_AC4,HIGH);
  digitalWrite(Carga4,HIGH);
  
  digitalWrite(pneumatica,HIGH);
  
 
 
   delay(1000);
 
  
}




void loop() 
{
 
  

  nexLoop(nex_listen_list);

  int Porta = digitalRead(Fim_de_Curso);
  int Botao_Mesa = digitalRead(Baixar_Mesa);
  int Mesa = digitalRead(Sensor_Mesa);

  if(Botao_Mesa==LOW && Porta == HIGH)
  {
     digitalWrite(pneumatica,LOW);
     
  }
  
  if(Mesa==HIGH )
  {
     Mesa_Fechada=false;

  }
  else
  {
    Mesa_Fechada = true;
  }
  

    if(Porta == HIGH)
    {

     
      botao_Debug.getValue(&Debug);
      delay(50);

      
      
      if(Debug==1) // Executa o teste apenas na posição da placa 1
      {
        //Serial.println("Modo Debug");
        if(Debug_Ativo!=1)
        {
         page1.show();
         Debug_Ativo=1;
         
        }
        
        botao_Debug.setValue(0);

        if(Mesa_Fechada==true)
        {
          Test_Curto();
          firmware(); // disparar o teste apos gravar o firmware
          Finalizar();
          Debug_Ativo=0;
        }

      }
      else
      {

        botao_HomeDebug.getValue(&Iniciar);
        //delay(20);
        botao_HomeP1.getValue(&Iniciar);
        delay(20);
        botao_IniciarP1.getValue(&IniciarP1);
        delay(20);

        


        if(IniciarP1==1)
        {
          //Serial.println("Modo 1 Placa");
          if(IniciarP1_Ativo!=1)
          {
           page2.show();
           t1.setText("Iniciar Teste!");
           IniciarP1_Ativo=1;
          }

          botao_IniciarP1.setValue(0);

          if(Mesa_Fechada==true)
          {
            Test_Curto();
            firmware(); // disparar o teste apos gravar o firmware
            Finalizar();
            IniciarP1_Ativo=0;
          }

        }
        else if(IniciarP1==0 && Debug==0 || Iniciar==1) // alterar aqui para disparar inicio automatico 
        {
          IniciarP1_Ativo=0;
          Debug_Ativo=0;
         // Serial.println("Modo Normal");
          if(Iniciar_Ativo!=1)
          {
            page0.show();
            t1.setText("Iniciar Teste!");
            Iniciar_Ativo =1;
          }
          
          if(Mesa_Fechada==true)
          {
            
            Test_Curto();
            firmware(); // disparar o teste de todas as placas apos gravar o firmware
            Finalizar();
            Iniciar_Ativo =0;
          }
        }
        else
          {
            t1.setText("Iniciar Teste!");
            delay(100);
          } 

        delay(200);

      }
      
      delay(100);
      t1.setText("Iniciar Teste!");
    }
    else
    {

      Reset();

    }
}