//external led isbasically the same as internal except you need to hadwire side hook the circuit up properly 
//https://www.circuitbasics.com/arduino-basics-controlling-led/#:~:text=To%20turn%20on%20an%20LED,the%20HIGH%20and%20LOW%20states.
//single external LED

void setup() {
    pinMode(13, OUTPUT);
}

void loop() {
    digitalWrite(8, HIGH);
    delay(1000);
    digitalWrite(8, LOW);
    delay(1000);

}