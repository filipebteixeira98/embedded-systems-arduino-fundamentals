#include <Ultrasonic.h>
#define trigger 4 // Define o pino trigger para sinal enviado
#define echo 5 // Define o pino Echo para sinal de retorno
Ultrasonic ultrasonic(trigger, echo); // Inicializa o sensor nos pinos trigger e echo
void setup() {
  Serial.begin(9600); // Comunicação Serial
  Serial.println("Lendo dados do sensor..."); // Imprime no monitor Serial
}

void loop() {
  float cmSec; // Define número flutuante para distância
  long microsec = ultrasonic.timing(); // Função de tempo
  cmSec = ultrasonic.convert(microsec, Ultrasonic::CM); // Conversão para Centímetros
  // Exibe informações no Monitor Serial
  Serial.print("Distancia em cm: ");
  Serial.println(cmSec);
  delay(1000);
}
