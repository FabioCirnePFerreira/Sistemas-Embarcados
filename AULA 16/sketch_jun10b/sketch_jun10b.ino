// O desenho a seguir mostra um processo simples para encher uma caixa d’água de um rio próximo.
// Os sensores de nível alto (H) e de nível baixo (L) são utilizados para determinar o acionamento da bomba (B) e do alarme (A).

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

  

}
