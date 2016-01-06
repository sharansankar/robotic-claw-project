#include <Servo.h> 
Servo servoRotate; 
Servo servoRaise; 
Servo servoClaw;

void clawOpen(){
  servoClaw.write(90); 
  delay(1500);  //waits 1.5 seconds for claw to open
  }
void clawClose(){
  servoClaw.write(0);
  delay(1500);
  }

void rotateHalfCircle(){
  servoRotate.write(180); 
  delay(1500); 
  }
void rotateBackToStart(){
  servoRotate.write(0); 
  delay(1500);
  }

void lower(){
  servoRaise.write(180); 
  delay(1500); 
  }
void raise(){
  servoRaise.write(0); 
  delay(1500); 
  }
  
void setup() {
  //PIN configurations for each servo
  servoRotate.attach(12); 
  servoRaise.attach(9); 
  servoClaw.attach(6);
}

void loop() {
  

}
