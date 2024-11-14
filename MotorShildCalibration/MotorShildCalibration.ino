#include <AFMotor.h>

AF_DCMotor motorLeft(4);
AF_DCMotor motorRight(3);

void setup(){
	
	motorLeft.setSpeed(200); //Set initial speed of the motorLeft & stop
  motorRight.setSpeed(200); //Set initial speed of the motorLeft & stop
	motorLeft.run(RELEASE); //for stop the motorLeft
  motorRight.run(RELEASE); //for stop the motorLeft
}

void loop(){
	
	motorLeft.run(FORWARD);
  motorRight.run(FORWARD);
	
}
