#include "LUFAConfig.h"
#include <LUFA.h>
#include "Joystick.h"
#include "General.h"
#include "WildZone.h"
#include "SimpleScripting.h"

Simple simple;
WildZone wildZone;

void setup() {
  SetupHardware(); // Needed for LUFA
  GlobalInterruptEnable(); // Needed for LUFA
  Serial1.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  // uncomment your desired Wild Area
  //wildzone.One();
  //wildzone.Two();
  //wildzone.Three();
  //wildzone.Four();
  //wildzone.Five();
  //wildzone.Six();
  //wildzone.Seven();
  //wildzone.Eight();
  //wildzone.Nine();
  //wildzone.Ten();
  //wildzone.Eleven();
  //wildzone.Twelve();
  //wildzone.Thirteen();
  //wildzone.Fourteen();
  //wildzone.Fifteen();
  //wildzone.Sixteen();
  //wildzone.Seventeen();
  //wildZone.Eighteen();
  //wildZone.Nineteen();
  //wildZone.Twenty();

  // OR...
  // simpleScript();
}

// For writing simple scripts, use this function and call to it in the main. 
void simpleScript() {
  simple.Left(1000);
}
