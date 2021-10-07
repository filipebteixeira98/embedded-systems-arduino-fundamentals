int ledPin = 13; // Define o pino digital do LED
int ledPin2 = 10; // Define o pino digital do LED
int ldrPin = 0; // Define o LDR no pino analógico
int ldrValor = 0; // Define o valor de intensidade do LDR

void setup(){
pinMode(ledPin, OUTPUT); // Define a porta 13 como saída
pinMode(ledPin2, OUTPUT); // Define a porta 10 como saída
Serial.begin(9600); // Inicia a comunicação serial
}

void loop(){
// Ler o valor do LDR
ldrValor = analogRead(ldrPin); // O valor lido será entre 0 e 1023

// Liga o LED do pino 10
digitalWrite(ledPin2, HIGH);

// Se o valor lido for maior que 500, liga o LED
if(ldrValor >= 500){
  digitalWrite(ledPin, HIGH);
  digitalWrite(ledPin2, LOW);
}

// Senão, apaga o LED
else digitalWrite(ledPin, LOW);

//Imprime o valor lido do LDR no monitor serial
Serial.println(ldrValor);
delay(1000);
}
