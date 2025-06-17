/*Instalação de um sistema automático de semáforo no cruzamento das ruas A (preferencial) e B.*/
// Quando houver carros transitando somente na Rua B, o semáforo 2 deverá permanecer verde.
// Quando houver carros transitando somente na Rua A, o semáforo 1 deverá permanecer verde.
// Quando houver carros transitando nas Ruas A e B, o semáforo da Rua A deverá estar verde, pois é preferencial.



#define pin_led 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao 2
#define pin_botao2 3
#define pin_botao3 4

void setup() {
  pinMode(pin_led, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao, INPUT);
  pinMode(pin_botao2, INPUT);
  pinMode(pin_botao3, INPUT);

}

void loop() {
  bool botao = digitalRead(pin_botao);
  bool botao2 = digitalRead(pin_botao2);
  bool botao3 = digitalRead(pin_botao3);

  if (botao2 == 1){
    digitalWrite(pin_led4, HIGH);
    digitalWrite(pin_led, LOW);
  }
  if (botao == 1){
    digitalWrite(pin_led4, LOW);
    digitalWrite(pin_led, HIGH);
  }
  if (botao == 1 && botao2 == 1){
    digitalWrite(pin_led4, LOW);
    digitalWrite(pin_led, HIGH);
  }else {
    digitalWrite(pin_led4, LOW);
    digitalWrite(pin_led, LOW);
  }

}


