//  Foram definidos quais pinos serão utilizados.

#define pin_led 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11
#define pin_botao 2
#define pin_botao2 3
#define pin_botao3 4

int conta = 0;
bool aux  = 0;

void setup() {
  pinMode(pin_led, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_botao, INPUT);
  pinMode(pin_botao2, INPUT);
  pinMode(pin_botao3, INPUT);
  Serial.begin(9600);

}

void loop() {
  bool SEV = digitalRead(pin_botao);
  bool SSV = digitalRead(pin_botao2);
  bool BOT = digitalRead(pin_botao3);

  if (SEV == 1) { /* Nessa parte o código irá verificar se botão SEV foi pressionado,
  se não foi ele passará adiante, senão o led acenderá e adicionará a conta(variavel declarada como int);
  é possivel perceber que existe uma variavel chamada "aux", ela permite que o usuário
  aperte o botão uma vez ao invés de manter pressionado */
    if (aux == 0) {
      digitalWrite(pin_led, HIGH);
      delay(100);
      digitalWrite(pin_led, LOW);
      conta++;
      aux = 1;
      Serial.println(conta);
    }
  } else {
    aux = 0;
  }

  if (SSV == 1) { /* O mesmo conceito foi utilizado para o SSV, mas ao invés de adicionar a conta,
  ele subtrai*/
    if (aux == 0) {
      digitalWrite(pin_led2, HIGH);
      delay(100);
      digitalWrite(pin_led2, LOW);
      conta--;
      aux = 1;
      Serial.println(conta);
    }
  } else {
    aux = 0;
  }

  if (conta < 0){ /* Quando o código chegar a menos que 0 ele irá contar os números negativos
  pois não foi especificado no enunciado se deveria parar a contagem, após acenderá um led indicando
  que deve cer acionado o botão BOT para zerar o contador. */
    digitalWrite(pin_led3, HIGH);
    if (BOT == 1){
      if (aux == 0){
        conta = 0;
        aux = 1;
        Serial.println("Contador zerado");
        delay(1000);
        digitalWrite(pin_led3, LOW);
      }
    } else {
      aux = 0;
    }
  }

  if (conta > 10){/* Se o contador ultrapassar o limite de 10 números ele voltará a 10.*/
    conta = 10;
  }


}
