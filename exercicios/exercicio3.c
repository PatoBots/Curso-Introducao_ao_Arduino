int ledPin = 13; 
int buttonPin = 7;  
int estadoBotao = 0;    
void setup() {
    pinMode(ledPin, OUTPUT);  //13 saida
    pinMode(buttonPin, INPUT); //7 entrada
}

void loop() {
    estadoBotao = digitalRead(buttonPin); 
    
    if (buttonState == HIGH) {  //botao pressionado
        digitalWrite(ledPin, HIGH); 
        delay(200);
    } else {
        digitalWrite(ledPin, LOW);   
    }
}