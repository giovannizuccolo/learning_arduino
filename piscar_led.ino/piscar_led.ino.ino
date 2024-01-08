int ledpin = 10;  // definido o pin que vou conectar o led

void setup() {
  pinMode (ledpin, OUTPUT);  // define o Led como atuador
  
}

void loop() {
  digitalWrite (ledpin, HIGH);  // liga o led
  delay (1000);
  digitalWrite (ledpin, LOW);   // desliga o led
  delay (1000);
}
