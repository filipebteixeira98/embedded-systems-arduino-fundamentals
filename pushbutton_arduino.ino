#define led 11
#define botao 13
void setup(){
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  digitalWrite(led, LOW);
}
void loop(){
  if(digitalRead(botao)){
    digitalWrite(led, !digitalRead(led));
  }
}

