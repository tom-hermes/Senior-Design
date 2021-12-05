// Tom Hermes 

const int stepPin = 3; // Pin definitions
const int dirPin = 4; 
const int switchPin = 41;
int switchState = 0;
 
void setup() {
  pinMode(stepPin,OUTPUT); // Output and input pin declarations
  pinMode(dirPin,OUTPUT);
  pinMode(switchPin, INPUT);
}
void loop() {

switchState = digitalRead(switchPin); // Reading the state of the switch
if (switchState == LOW) {
  
{
  digitalWrite(dirPin,HIGH); // Rotates the motor counter clockwise

  for(int x = 0; x < 100; x++) { // 100 steps for 180 degrees
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500000); // Delay statements to control motor speed
    delayMicroseconds(500000);
    delayMicroseconds(500000);
    delayMicroseconds(500000);
    delayMicroseconds(500000);
 
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500000); 
    delayMicroseconds(500000);
    delayMicroseconds(500000);
    delayMicroseconds(500000);
    delayMicroseconds(500000);
  }
  
  digitalWrite(dirPin,LOW); // Rotates the motor clockwise
  
  for(int x = 0; x < 100; x++) {
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500000);     
    delayMicroseconds(500000);
    delayMicroseconds(500000);
    delayMicroseconds(500000);
    delayMicroseconds(500000);

    digitalWrite(stepPin,LOW);
    delayMicroseconds(500000);
    delayMicroseconds(500000);
    delayMicroseconds(500000);
    delayMicroseconds(500000);
    delayMicroseconds(500000);  
}
}
}
}
   
  
