void setup(){
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

int leitura;
void loop(){
  if(Serial.available()){
    leitura = Serial.read();
    //LIGA VENTILADOR
    if(leitura == 49){
      digitalWrite(6,LOW);
      //DESLIGA VENTILADOR
    }else if(leitura == 50){
      digitalWrite(6,HIGH);
      //LIGA LAMPADA SALA
    }else if(leitura == 51){
      digitalWrite(7,LOW);
      //DESLIGA LAMPADA SALA
    }else if(leitura == 52){
      digitalWrite(7,HIGH);
      //LIGA TV
    }else if(leitura == 53){
      digitalWrite(8,LOW);
      //DESLIGA TV
    }else if(leitura == 54){
      digitalWrite(8,HIGH);
      //LIGA LUZ QUARTO
    }else if(leitura == 55){
      digitalWrite(9,LOW);
      //DESLIGA LUZ QUARTO
    }else if(leitura == 56){
      digitalWrite(9,HIGH);
    }
  }
}
