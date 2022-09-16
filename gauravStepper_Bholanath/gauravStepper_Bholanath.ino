/* Example sketch to control a stepper motor with TB6600 stepper motor driver and Arduino without a library: continuous rotation. More info: https://www.makerguides.com */

// Define stepper motor connections:
#define dirPin 2
#define stepPin 3
#define endPin 11
int incomingByte = 0;
 int i=0;
void setup() {
    

  // Declare pins as output:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
    pinMode(endPin, OUTPUT);
  digitalWrite(endPin, HIGH);

  // Set the spinning direction CW/CCW:
   Serial.begin(9600);
    

  
}

void loop() {
  if (i<5000){
  
  digitalWrite(dirPin, LOW);
  digitalWrite(stepPin, HIGH);
  delayMicroseconds(500);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(500);
  //delay(1000);
  }
  else{
    
  
   digitalWrite(dirPin, HIGH);
  digitalWrite(stepPin, HIGH);
  delayMicroseconds(500);
  digitalWrite(stepPin, LOW);
  delayMicroseconds(500);
  // delay(1000);
  }
  if(i>10000){
    i=0;
  }
  i=i+1;
}
    
