//RGB LED CODE 4 LEGS 

int redPin = 11;
int greenPin = 10;
int bluePin = 9;
 
void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void loop() {
    RGB_color(255, 0, 0); //red
    delay(1000);
    RGB_color(0, 255, 0); //green
    delay(1000);
    RGB_color(0, 0, 255); //  blue
    delay(1000);
    RGB_color(255, 255, 125); //raspberry
    delay(1000);
    RGB_color(0, 255, 255); //cyan
    delay(1000)
    RGB_color(255, 0, 255); //magenta

}
