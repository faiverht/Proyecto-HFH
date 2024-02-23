#include <Wire.h>

void setup(void)
{
  Serial.begin(9600);
  Wire.begin();
  Serial.println();
  Serial.println("El MCP 3424 (y sus similares) por defecto tienen dirección 0x68");
  Serial.println("pero pueden ser configurados en el rango 0x68 - 0x6F");
  Serial.println();
  
  for (uint8_t direccion = 0X0; direccion < 0X80; direccion++) {
    Wire.requestFrom(direccion, (uint8_t)1);
    if (Wire.available()) {
      Serial.print("Dispositivo encontrado en: 0x");
      Serial.println(direccion, HEX);
    }
  }
  Serial.println("Finalizado");
}

void loop(void)
{ ;}
