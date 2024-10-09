int ledPin = 6;       
int brilhoTotal = 0;  
int altBrilho = 15;   // Define a quantidade de incremento/decremento do brilho.

void setup() {
  pinMode(ledPin, OUTPUT); 
}

void loop() {
  brilhoTotal += altBrilho; 

  analogWrite(ledPin, brilhoTotal);  // Escreve o valor de PWM no pino para controlar o brilho do LED.

  // Inverte a direção do incremento quando o brilho atinge os limites:
  if (brilhoTotal == 0 || brilhoTotal == 255) {
    altBrilho = -altBrilho;  // Muda a direção do brilho
  }
  
  delay(100); 
}
