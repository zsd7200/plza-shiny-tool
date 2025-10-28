#include <LUFA.h>
#include "src/LUFAConfig.h"
#include "src/Joystick.h"
#include "src/General.h"
#include "src/WildZone.h"
#include "src/SimpleScripting.h"

Simple simple;
WildZone wildZone;

// set desired wild zone number / area ID here
// or set to 999 for simpleScript
int zoneId = -1;

void setup() {
  SetupHardware(); // Needed for LUFA
  GlobalInterruptEnable(); // Needed for LUFA
  Serial1.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  switch (zoneId) {
    case 1:
      wildZone.One();
      break;
    case 2:
      wildZone.Two();
      break;
    case 3:
      wildZone.Three();
      break;
    case 4:
      wildZone.Four();
      break;
    case 5:
      wildZone.Five();
      break;
    case 6:
      wildZone.Six();
      break;
    case 7:
      wildZone.Seven();
      break;
    case 8:
      wildZone.Eight();
      break;
    case 9:
      wildZone.Nine();
      break;
    case 10:
      wildZone.Ten();
      break;
    case 11:
      wildZone.Eleven();
      break;
    case 12:
      wildZone.Twelve();
      break;
    case 13:
      wildZone.Thirteen();
      break;
    case 14:
      wildZone.Fourteen();
      break;
    case 15:
      wildZone.Fifteen();
      break;
    case 16:
      wildZone.Sixteen();
      break;
    case 17:
      wildZone.Seventeen();
      break;
    case 18:
      wildZone.Eighteen();
      break;
    case 19:
      wildZone.Nineteen();
      break;
    case 20:
      wildZone.Twenty();
      break;
    case 999:
      simpleScript();
      break;
    default:
      break;
  }
}

// For writing simple scripts, use this function and call to it in the main. 
void simpleScript() {
  simple.Left(1000);
}
