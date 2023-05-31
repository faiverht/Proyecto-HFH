// programa para calcular el valor de R0
#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR    0x27  // Dirección del dispositivo I2C (LCD)
#define MQ4_PIN A0
#define D0_PIN 8

int threshold;
int MQ4_Out;
const float RL = 1.0; // 1K Ohm de la tarjerta MQ4
const float CLEAN_AIR_RS_RO = 4.3;  // Rs/Ro según datasheet
float MQ4_volt;
float RS_gas;     // Valor de Rs en un gas
float ratio;      // Rs_Gas/Rs_Aire
float RO;         // valor de RO

LiquidCrystal_I2C             lcd(I2C_ADDR,2, 1, 0, 4, 5, 6, 7);
void setup()
   {
       //pinMode(DO_Pin, INPUT);  // Configuración del pin de entrada D0 del sensor
       lcd.begin(16,2);    // Inicializar el display con 16 caraceres 2 lineas
       lcd.setBacklightPin(3,POSITIVE);
       lcd.setBacklight(HIGH);

       lcd.home();                   // go home
       lcd.print("Test MQ4: ");
       lcd.setCursor( 0, 1 );        // go to the 2nd line
       lcd.print("Faiver H T G. Ok");

   }
void loop()
   {
    lcd.setCursor( 10, 0 );        // go to (x,y) en LCD
    lcd.print("V=");

    MQ4_Out = analogRead(MQ4_PIN);  // lee el canal análogo desde el sensor MQ4
    MQ4_volt = (float)MQ4_Out/1024*5.0;
    RS_gas = (5.0-MQ4_volt)/MQ4_volt; // se omite RL = 1k
    //RO = RS_gas/CLEAN_AIR_RS_RO;   // RO
    //ratio = RS_gas/R0
    ratio = RS_gas/5.18;

    // se imprime este valor para luego ser utilizada en la siguiente:

    lcd.print(MQ4_volt);
    lcd.setCursor(0, 1 );
    lcd.print("/=");  // Ratio
    lcd.print(RS_gas,1);
    // Ro: R del sensor en una concentración conocida (p ej aire ambiente)


    lcd.print(" R/R0=");
    lcd.print(ratio);
    delay(500);
   }