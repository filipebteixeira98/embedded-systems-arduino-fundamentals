#include<Servo.h>
Servo motor_d;
Servo motor_e;
byte parado; 
char key; 

void setup()  
{  
  Serial.begin(9600);
  //Abaixo, as portas quer serão ativadas pelo celular, via Bluetooth   
  motor_d.attach(8);
  motor_e.attach(10);
  parado = 1;  
}  
    
void loop()  
{  
  if(Serial.available())  
  {  
    key=Serial.read();
    Serial.println(key, 0);
  }
    switch(key){
      
      case 'U':
        motor_d.write(135);
        motor_e.write(45);
        break;
        
      case 'D':
        motor_d.write(45);
        motor_e.write(135);
        break;

      case 'S':
        motor_d.write(90);
        motor_e.write(90);
        break;

      case 'R':
        motor_d.write(90);
        motor_e.write(45);
        break;
        
      case 'L':
        motor_d.write(135);
        motor_e.write(90);
        break;

       
    }

    delay(100);
   
} 
