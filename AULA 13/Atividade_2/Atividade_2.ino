#define pin_led1 8  //declara a posição do pin_led1
#define pin_led2 9  //         ''          pin_led2
#define pin_led3 10 //         ''          pin_led3
#define pin_led4 11 //         ''          pin_led4

void setup() {
  Serial.begin(9600);
  pinMode(pin_led1, OUTPUT); //define a saída do pin_led1
  pinMode(pin_led2, OUTPUT); //       ''         pin_led2
  pinMode(pin_led3, OUTPUT); //       ''         pin_led3
  pinMode(pin_led4, OUTPUT); //       ''         pin_led4
}

void loop() {
  if (Serial.available() == 1) { //Indica ao arduino que o caracter digitado é 1
    char i = Serial.read(); //salva a informação na variável 1
    Serial.print(i);

    if (i =='1'){
      digitalWrite(pin_led1, HIGH);
    }
    if (i =='2'){
      digitalWrite(pin_led2, HIGH);
     }
    if (i =='3'){
      digitalWrite(pin_led3, HIGH);
    }
    if (i =='4'){
      digitalWrite(pin_led4, HIGH);
    }
    if (i =='5'){
      digitalWrite(pin_led1, LOW);
    }
    if (i =='6'){
      digitalWrite(pin_led2, LOW);
    }
    if (i =='7'){
      digitalWrite(pin_led3, LOW);
    }
    if (i =='8'){
      digitalWrite(pin_led4, LOW);
    }
    if (i =='9'){
      digitalWrite(pin_led1, HIGH);
      digitalWrite(pin_led2, HIGH);
      digitalWrite(pin_led3, HIGH);
      digitalWrite(pin_led4, HIGH);
    }
    if (i =='0'){
      digitalWrite(pin_led1, LOW);
      digitalWrite(pin_led2, LOW);
      digitalWrite(pin_led3, LOW);
      digitalWrite(pin_led4, LOW);
    }

    }
}