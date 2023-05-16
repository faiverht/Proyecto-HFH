#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR    0x27  // Dirección del dispositivo I2C (LCD)
#define A0_PIN A0
#define D0_PIN 8

int threshold;
int A0_Out;

LiquidCrystal_I2C             lcd(I2C_ADDR,2, 1, 0, 4, 5, 6, 7);
void setup()
   {
       //pinMode(DO_Pin, INPUT);  // Configuración del pin de entrada D0 del sensor
       lcd.begin(16,2);    // Inicializar el display con 16 caraceres 2 lineas
       lcd.setBacklightPin(3,POSITIVE);
       lcd.setBacklight(HIGH);

       lcd.home ();                   // go home
       lcd.print("   Prueba LCD");
       lcd.setCursor( 0, 1 );        // go to the 2nd line
       lcd.print("Faiver H T G. Ok");
       delay(2000);
       lcd.setCursor( 0, 1 );
       lcd.print(" MQ4 =          ");
   }
void loop()
   {
    A0_Out = analogRead(A0_PIN);  // lee el canal análogo desde el sensor MQ4
    
    lcd.setCursor( 7, 1 );        // go to (x,y) en LCD
    //lcd.print(lectura_ADC, "  ");
    //sprintf();

    //lcd.printf(" %d  ",lectura_ADC);
    lcd.print("    ");
    lcd.setCursor( 7, 1 );
    lcd.print(A0_Out);

    delay(500);

   }
