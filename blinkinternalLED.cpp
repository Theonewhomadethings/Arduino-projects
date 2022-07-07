//this program is to get a single LED on the arduino board itself on pin 13 to blink on and off at a rate of 1000 miliseconds

void setup() {
    pinMode(13, OUTPUT);

}

void loop() {
    digitalWrite(13, HIGH); //delay function tells the arduiono to hold the high signal at pin13 for 1000ms 
    delay(1000);
    digitalWrite(13, LOW); //delay function tells the arduiono to hold the low signal at pin13 for 1000ms 
    delay(1000);
    
}