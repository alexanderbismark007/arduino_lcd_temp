#include <LiquidCrystal.h>
#include <Wire.h>
#include <Adafruit_MLX90614.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); // Configura los pines para la pantalla LCD
Adafruit_MLX90614 mlx = Adafruit_MLX90614(); // Crea una instancia del sensor MLX90614

void setup() {
  lcd.begin(16, 2); // Inicializa la pantalla LCD
  mlx.begin(); // Inicializa el sensor MLX90614
  lcd.print("Temperatura:"); // Imprime el encabezado en la pantalla LCD
}

void loop() {
  float temperatura = mlx.readObjectTempC(); // Lee la temperatura en grados Celsius del sensor

  lcd.setCursor(0, 1); // Establece la posición del cursor en la segunda línea de la pantalla LCD
  lcd.print(temperatura); // Imprime la temperatura en la pantalla LCD

  delay(1000); // Espera 1 segundo antes de volver a leer la temperatura
}
