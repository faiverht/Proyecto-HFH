# Proyecto-HFH

## Avance placa primera versión:
Tarjeta de expansión de puertos análogos con conversor análogo digital MCP3424 (4 canales de 18 bits, PGA:1, 2, 4, 8), comunicación I2C dirección I2C (default): 1101


## Frontal
![Imagen no se encuentra disponible](images/PCB01.png)
## Trasera
![Imagen no se encuentra disponible](images/PCB02.png)
## Otras
![Imagen no se encuentra disponible](images/PCB03.png)
![Imagen no se encuentra disponible](images/PCB04.png)
## Terminado
![Imagen no se encuentra disponible](images/PcbTerminado01.jpeg)
![Imagen no se encuentra disponible](images/PcbTerminado02.jpeg)
## Configuración de Jumpers para fuente de alimetación

Alimentación de voltaje configurable:

1 - Desde la placa arduino Uno 5V (Jumper JP_VDC1 cualquiera o sin conexión y jumper V_IN1 en posición 'INO 5V')

2 - Desde fuente externa mediante Jack 12V (Jumper JP_VDC1  en posición '12V JACK' y jumper V_IN1 en posición 'REG 5V')

3 - Desde fuente externa mediante bornera 12V (Jumper JP_VDC1  en posición '12V EXT' y jumper V_IN1 en posición 'REG 5V')

![Imagen no se encuentra disponible](images/PCB05.png)

Adicionalmente los conectores J2, J3 y J4 tienen alimentación configurable de 5V o 12V según posición de los jumpers DC2, DC3 y DC4

![Jumpers DC 5 - 12 V](images/PCB06.png)


**Nota:**

El conector J1 se utiliza exclusivamente para sensor de entrada con alimentación de 6V

## Tarjeta de expansión terminada y en funcionamiento
EL código de prueba para Arduino se encuentran disponibles en /Arduino/Code pruebas de este mismo repositorio

Arduino y tarjeta de expansión

![Imagen no se encuentra disponible](images/PcbTerminado03.jpeg)

Montajes
![Imagen no se encuentra disponible](images/PcbTerminado04.jpeg)

![Imagen no se encuentra disponible](images/PcbTerminado05.jpeg)

![Imagen no se encuentra disponible](images/PcbTerminado06.jpeg)

Prueba de montaje y adquisición con sensor de gas MQ4

![Imagen no se encuentra disponible](images/PcbTerminado07.jpeg)

## Proyecto de monitoreo y control con Arduino y/o Raspberry Pi y/o PC (Win - Linux)

![Imagen no se encuentra disponible](images/Propuesta.jpeg)
