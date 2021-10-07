#include <Servo.h>
#define SERVO 6 // Porta Digital 6 PWM

Servo s; // Objeto da Classe Servo
int pos; // Posição do Servo

void setup() {
  s.attach(SERVO); // Anexa a variável s na Classe Servo
  Serial.begin(9600); // Inicia a comunicação serial
  s.write(0); // Inicia motor posição zero
}

void loop() {
  for(pos = 0; pos < 90; pos++){
  s.write(pos);
  delay(15);
 }
delay(1000);
  for(pos = 90; pos >= 0; pos--){
    s.write(pos);
    delay(15);
  }
}
