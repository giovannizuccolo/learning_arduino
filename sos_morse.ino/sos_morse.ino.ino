int ledpin = 10; // definindo o pin que vou ligar o led
void setup() {
  pinMode(ledpin, OUTPUT);
}

void loop() {

  for(int x=0; x<3;x++) {
    digitalWrite (ledpin, HIGH);
    delay (150);
    digitalWrite (ledpin, LOW);
    delay (100);
  }

  delay (200);

  for(int x=0; x<3;x++) {
    digitalWrite (ledpin, HIGH);
    delay (400);
    digitalWrite (ledpin, LOW);
    delay (100);
  }

  delay (200);

  for(int x=0; x<3;x++) {
    digitalWrite (ledpin, HIGH);
    delay (150);
    digitalWrite (ledpin, LOW);
    delay (100);
  }
  
  delay (5000);
}
