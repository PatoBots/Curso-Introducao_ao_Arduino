int ledRed = 13;
int ledGreen = 12; 
int ledBlue = 11;

int buttonPin = 7;  
int buttonState = 0; 

void setup() {
    pinMode(ledRed, OUTPUT);  
    pinMode(ledGreen, OUTPUT); 
    pinMode(ledBlue, OUTPUT); 
    pinMode(buttonPin, INPUT); 
}

void loop() {
    buttonState = digitalRead(buttonPin); 
    
    if (buttonState == HIGH) {  
        if(digitalRead(ledBlue) == HIGH){
            digitalWrite(ledBlue, LOW);
          	delay(500);
        }
        else if(digitalRead(ledGreen) == HIGH){
            digitalWrite(ledGreen, LOW); 
            digitalWrite(ledBlue, HIGH); 
            delay(500);
        }
        else if(digitalRead(ledRed) == HIGH){
            digitalWrite(ledRed, LOW); 
            digitalWrite(ledGreen, HIGH);
            delay(500);
        }else{
            digitalWrite(ledRed, HIGH);
            delay(500);
        }
    } 
}
