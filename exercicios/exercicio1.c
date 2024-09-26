// Define o pino do LED
int ledPin = 13; 

void setup() {
  // Configura o pino do LED como saída
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Liga o LED
  digitalWrite(ledPin, HIGH);
  // Aguarda por 1 segundo
  delay(1000); 
  
  // Desliga o LED
  digitalWrite(ledPin, LOW);
  // Aguarda por 1 segundo
  delay(1000); 
}