//  Foram definidos quais pinos serão utilizados.

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

//  Nesse caso a questão não exige que o botão seja apertado e solto,
// então apenas foi feito de modo que ele fique ligado a todo momento
// desde que ele esteja pressionado.

  if (botao == 1){ /* if para ligar o led se o botão for pressionado */
    digitalWrite(pin_led, HIGH);
  } else{ /* ele irá desligar se o seu botão não estiver sendo pressionado*/
    digitalWrite(pin_led, LOW);
  }
  if (botao2 == 1){
    digitalWrite(pin_led2, HIGH);
  } else{
    digitalWrite(pin_led2, LOW);
  }
  if (botao3 == 1){
    digitalWrite(pin_led3, HIGH);
  } else{
    digitalWrite(pin_led3, LOW);
  }

}
