#define led 11
#define led2 12
#define botao 13
int latchPin = 4;
int clockPin = 5;
int dataPin = 6;
void setup(){
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT_PULLUP);
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  digitalWrite(led, LOW);
  digitalWrite(led2, HIGH);
}
void loop(){
  if(digitalRead(botao)){
    digitalWrite(led, !digitalRead(led));
  }
  digitalWrite(4, LOW);
  shiftOut(6, 5, LSBFIRST, 0b00000011);
  digitalWrite(4, HIGH);
}

