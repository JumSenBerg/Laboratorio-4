#include <DHT.h>

#define DHTPIN 2     // El pin digital al que está conectado el sensor
#define DHTTYPE DHT11   // El tipo de sensor que se está utilizando (DHT11 o DHT22)

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);  // Inicializar la comunicación serial
  dht.begin();  // Inicializar el sensor DHT11
}

void loop() {
  float humedad = dht.readHumidity();  // Leer la humedad relativa
  float temperatura = dht.readTemperature();  // Leer la temperatura en grados Celsius

  Serial.print("Humedad: ");
  Serial.print(humedad);
  Serial.print("%  Temperatura: ");
  Serial.print(temperatura);
  Serial.println("°C");

  delay(2000);  // Esperar 2 segundos antes de volver a leer los valores
}
