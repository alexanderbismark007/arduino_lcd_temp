# Sensor de Temperatura con Arduino y Pantalla LCD

Este proyecto utiliza un Arduino y un sensor de temperatura MLX90614 para medir la temperatura y mostrarla en una pantalla LCD. El sensor MLX90614 es capaz de medir la temperatura sin contacto, lo que lo hace ideal para aplicaciones donde se requiere una medición no intrusiva.

## Componentes necesarios:
- Arduino
- Sensor de temperatura MLX90614
- Pantalla LCD (16x2)
- Cables de conexión

## Conexiones:
- Conecta el pin VCC del sensor MLX90614 al pin 5V del Arduino.
- Conecta el pin GND del sensor MLX90614 al pin GND del Arduino.
- Conecta el pin SDA del sensor MLX90614 al pin A4 (SDA) del Arduino.
- Conecta el pin SCL del sensor MLX90614 al pin A5 (SCL) del Arduino.
- Conecta los pines de control de la pantalla LCD (RS, E, D4, D5, D6, D7) a los pines correspondientes del Arduino.

## Configuración del software:
- Instala la biblioteca LiquidCrystal y Adafruit_MLX90614 en el entorno de desarrollo de Arduino.
- Copia y pega el código del algoritmo en el archivo .ino en el entorno de desarrollo de Arduino.
- Compila y carga el programa en el Arduino.

Una vez que el Arduino está conectado y el programa se ejecuta, la temperatura se mostrará en la pantalla LCD. Asegúrate de que la librería LiquidCrystal y Adafruit_MLX90614 estén instaladas correctamente antes de compilar y cargar el programa en el Arduino.
