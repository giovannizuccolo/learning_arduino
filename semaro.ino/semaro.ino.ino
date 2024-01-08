int vermelho = 7;
int amarelo = 8;
int verde = 9;

void setup() {
  pinMode (vermelho, OUTPUT);
  pinMode (amarelo, OUTPUT);
  pinMode (verde, OUTPUT);
}
void loop() {
  digitalWrite (vermelho, HIGH);
  delay (5000);
  digitalWrite (vermlho. LOW);
  digitalWrite (verde, HIGH);
  delay (4000);
  digitalWrite (amarelo, HIGH);
  delay (1000);
  digitalWrite (verde, LOW);
  digitalWrite (amarelo, LOW);
}
