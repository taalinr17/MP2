#include <Servo.h>

Servo left;
Servo right;
// create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  left.attach(2,1300,1700);
  right.attach(13,1300,1700);
  // attaches the servo on pin 9 to the servo object
  left.write(90);
  right.write(90);
  turn(90);
  clearMotors();
}

void loop() {
 //kalyan is bad 
 //driveStraight();
}
void driveStraight(int inches){
  left.write(180);
   right.write(0);
   delay(((5*inches)/24)*1000);
  }
void turn(int degreees){
  if(degreees>180){
    right.write(180);
    left.write(180);
    delay(degreees*8);
    }
    else{
      right.write(0);
      left.write(0);
      delay(degreees*8);
      }
  }
  void clearMotors(){
    left.write(90);
    right.write(90);
    }
