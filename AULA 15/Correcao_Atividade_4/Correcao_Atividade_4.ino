#define pin_led1 8   //declara a posição do pin_led1
#define pin_led2 9   //         ''          pin_led2
#define pin_led3 10  //         ''          pin_led3
#define pin_led4 11  //         ''          pin_led4
#define pin_botao 2  //         ''          pin_botao
#define pin_botao2 3 //         ''          pin_botao2

void setup() {
  pinMode(pin_led1,   OUTPUT);  //define a saída do pin_led1
  pinMode(pin_led2,   OUTPUT);  //       ''         pin_led2
  pinMode(pin_led3,   OUTPUT);  //       ''         pin_led3
  pinMode(pin_led4,   OUTPUT);  //       ''         pin_led4
  pinMode(pin_botao,  INPUT);   //       ''         pin_botao
  pinMode(pin_botao2, INPUT);   //       ''         pin_botao2
  
}

void loop() {
  bool botao  = digitalRead(pin_botao);
  bool botao2 = digitalRead(pin_botao2);
  if ((botao == 1) && (botao2 == 1)) {
    digitalWrite(pin_led1, 1);
  } else {
    digitalWrite(pin_led1, 0);
  }
  if ((botao == 1) || (botao2 == 1)) {
    digitalWrite(pin_led2, 1);
  } else {
    digitalWrite(pin_led2, 0);
  }
  if ((botao == 1) ^ (botao2 == 1)) {
    digitalWrite(pin_led3, 1);
  } else {
    digitalWrite(pin_led3, 0);
  }
}
