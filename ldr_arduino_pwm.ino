#define ledPin  13 // Define o pino digital do LED
#define ledPin2 10 // Define o pino digital do LED
int ldrPin = 0; // Define o LDR no pino analógico
int ldrValor = 0; // Define o valor de intensidade do LDR
int i, j; // Define variável contadora
bool k = 0; // Define variável que indica estado do LED

void setup(){
pinMode(ledPin, OUTPUT); // Define a porta 13 como saída
pinMode(ledPin2, OUTPUT); // Define a porta 10 como saída
Serial.begin(9600); // Inicia a comunicação serial
}

void loop(){
// Ler o valor do LDR
ldrValor = analogRead(ldrPin); // O valor lido será entre 0 e 1023

// Liga o LED do pino 10
  //digitalWrite(ledPin2, HIGH);
for(i=0; i<256; i++){
  analogWrite(ledPin2, i);
  delay(10);
  k = 1;
  j = i;
}
for(i=255; i>=0; i--){
  analogWrite(ledPin2, i);
  delay(10);
  k = 0;
  j = i;
}

// Se o valor lido for maior que 500, liga o LED
if(ldrValor >= 500){
  //digitalWrite(ledPin, HIGH);
  for(i=0; i<256; i++){
    analogWrite(ledPin, i);
    delay(10);
  }
  
  //digitalWrite(ledPin2, LOW);
  if(k = 1){
    for(i=j; i>=0; i--){
    analogWrite(ledPin2, i);
    delay(10);
    }
  }
  else{
    for(i=j; i>=0; i--){
    analogWrite(ledPin2, i);
    delay(10);
    }      
  }
  
  for(i=255; i>=0; i--){
    analogWrite(ledPin, i);
    delay(10);
  }

// Senão, apaga o LED
}else digitalWrite(ledPin, LOW);

//Imprime o valor lido do LDR no monitor serial
Serial.println(ldrValor);
delay(1000);
}
