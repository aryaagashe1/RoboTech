/*** dc motors ***/
#include "DualVNH5019MotorShield.h"
#include "SingleVNH5019MotorShield.h"

// redefined pin assignments for motor shield
#define INA1 2
#define INB1 11
#define PWM1 9
#define EN1DIAG1 6
#define CS1 A0
#define INA2 7
#define INB2 8
#define PWM2 5
#define EN2DIAG2 3
#define CS2 A1
 
DualVNH5019MotorShield md(INA1, INB1, PWM1, EN1DIAG1, CS1, INA2, INB2, PWM2, EN2DIAG2, CS2);
SingleVNH5019MotorShield smd1(35, 33, 45, 41, 39);
SingleVNH5019MotorShield smd2(28, 24, 44, 40, 42);


void setup() {
  // put your setup code here, to run once:
  md.init();
  smd1.init();
  smd2.init();


}


void loop() {
  // put your main code here, to run repeatedly:
  md.setM1Speed(100); //1:51
  md.setM2Speed(290); //1:139
  smd1.setM1Speed(280); //1:139
  smd2.setM1Speed(100); //1:51
  stopIfFault();




}


void stopIfFault() {
  if (md.getM1Fault())
  {
    Serial.println("M1 fault");
    while(1);
  }
  if (md.getM2Fault())
  {
    Serial.println("M2 fault");
    while(1);
  }
  if (smd1.getM1Fault())
  {
    Serial.println("SMD1 fault");
    while(1);
  }
  if (smd2.getM1Fault())
  {
    Serial.println("SMD1 fault");
    while(1);
  }
}

