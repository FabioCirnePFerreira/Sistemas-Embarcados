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
  Serial.println("Liga LED");
  digitalWrite(pin_led1, HIGH); //liga o pin_led1
  digitalWrite(pin_led2, HIGH); //  ''   pin_led2
  digitalWrite(pin_led3, HIGH); //  ''   pin_led3
  digitalWrite(pin_led4, HIGH); //  ''   pin_led4
  delay(1000); //para o código pelo tempo determinado
  Serial.println("Desliga LED");
  digitalWrite(pin_led1, LOW); //desliga o pin_led1
  digitalWrite(pin_led2, LOW); //    ''    pin_led2
  digitalWrite(pin_led3, LOW); //    ''    pin_led3
  digitalWrite(pin_led4, LOW); //    ''    pin_led4
  delay(1000); //para o código pelo tempo determinado
  
}
