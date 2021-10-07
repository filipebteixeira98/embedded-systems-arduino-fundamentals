#define PINSENSOR 7
#define LED 9
int F_Estado(int pin){
  return digitalRead(pin);
}

void F_Comunicacao(int Estado){
  if(Estado){
    Serial.print("Detectado");
    digitalWrite(LED, HIGH);
  }else{
    Serial.print("Não detectado");
    digitalWrite(LED, LOW);
  }
  Serial.println();
}
void setup() {
  Serial.begin(9600);
  pinMode(PINSENSOR, INPUT);
}

void loop() {
  int estadoSensor = F_Estado(PINSENSOR);
  F_Comunicacao(estadoSensor);
  delay(500);
}
