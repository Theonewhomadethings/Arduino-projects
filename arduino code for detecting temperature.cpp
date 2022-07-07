//basic temperature sensor code for arduino

//variable names 

int sensePin = A0;
int senseInput;
double temp;

//runs once
void setup(){
Serial.begin(9600); //start the serial port at 9600 baud

}
//runs repeatadly 
void loop(){
sensorInput = analogRead(A0); //read the sensor and store it 
temp = (double)sensorInput / 1024; //find percentage of input reading
temp = temp*5; //multiply by 5v to get voltage 
temp - 0.5; // subtract the offset
temp = temp * 100; //convert to degrees

Serial.print("Current Temperature: ");
Serial.println(temp;)

}


//wont run as there is no c++ compiler on this device and the VS code extensions require mingw minimum