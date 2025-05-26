#define pin_led1 8  //declara a posição do pin_led1
#define pin_led2 9  //         ''          pin_led2
#define pin_led3 10 //         ''          pin_led3
#define pin_led4 11 //         ''          pin_led4
#define pin_botao 2 //         ''          pin_botao
void setup() {
  pinMode(pin_led1, OUTPUT); //define a saída do pin_led1
  pinMode(pin_led2, OUTPUT); //       ''         pin_led2
  pinMode(pin_led3, OUTPUT); //       ''         pin_led3
  pinMode(pin_led4, OUTPUT); //       ''         pin_led4
  pinMode(pin_botao, INPUT); //       ''         pin_botao

}

void loop() {
  bool estado = digitalRead(pin_botao);
  if (estado == 1) {
    digitalWrite(pin_led1, HIGH);
    digitalWrite(pin_led2, LOW);
    digitalWrite(pin_led3, HIGH);
    digitalWrite(pin_led4, LOW);
  } else {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, HIGH);
    digitalWrite(pin_led3, LOW);
    digitalWrite(pin_led4, HIGH);
  }

}
