#define led_b 9
#define led_a 13
int pino_sensor = 8;
int estado_sensor = 0;
void setup() {
  Serial.begin(9600);
  pinMode(led_a, OUTPUT);
  pinMode(led_b, OUTPUT);
  Serial.println("Teste Sensor Infravermelho Arduino");
}

void loop() {
  estado_sensor = digitalRead(pino_sensor);
  if(estado_sensor == 0){
    digitalWrite(led_a, HIGH);
    digitalWrite(led_b, LOW);
    Serial.println("Movimento Detectado");
    delay(1000);    
  }else{
    digitalWrite(led_a, LOW);
    digitalWrite(led_b, HIGH);
    Serial.println("Sem Movimento");
  }
}
