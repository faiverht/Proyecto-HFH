#include <Wire.h>
#include <LCD.h>
#include <LiquidCrystal_I2C.h>

#define I2C_ADDR    0x27  // Dirección del dispositivo I2C (LCD)
#define POT_PIN A0

LiquidCrystal_I2C             lcd(I2C_ADDR,2, 1, 0, 4, 5, 6, 7);
void setup()
   {
       lcd.begin (16,2);    // Inicializar el display con 16 caraceres 2 lineas
       lcd.setBacklightPin(3,POSITIVE);
       lcd.setBacklight(HIGH);

       lcd.home ();                   // go home
       lcd.print("   Prueba LCD");
       lcd.setCursor ( 0, 1 );        // go to the 2nd line
       lcd.print("Faiver H T G. Ok");
       delay(2000);
       lcd.setCursor ( 0, 1 );
       lcd.print(" A0 =           ");
   }
void loop() 
   {
    int lectura_ADC;
    
    lectura_ADC = analogRead(A0);
    lcd.setCursor ( 6, 1 );        // go to (x,y) en LCD
    //lcd.print(lectura_ADC, "  ");
    //sprintf();

    //lcd.printf(" %d  ",lectura_ADC);
    lcd.print("    ");
    lcd.setCursor ( 6, 1 );
    lcd.print(lectura_ADC);

    delay(500);

   }
