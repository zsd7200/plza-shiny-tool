#include <LUFA.h>
#include "src/LUFAConfig.h"
#include "src/Joystick.h"
#include "src/General.h"
#include "src/WildZone.h"
#include "src/MapLocations.h"
#include "src/SimpleScripting.h"

Simple simple;
WildZone wildZone;
MapLocations mapLocations;

// set desired wild zone number / area ID here
// or set to 999 for simpleScript
int zoneId = -1;

// set to false if using a switch 1
bool switchTwo = true;

void setup() {
  SetupHardware(); // Needed for LUFA
  GlobalInterruptEnable(); // Needed for LUFA
  Serial1.begin(9600);
  pinMode(2, OUTPUT);
}

void loop() {
  switch (zoneId) {
    case 1:
      wildZone.One(switchTwo);
      break;
    case 2:
      wildZone.Two(switchTwo);
      break;
    case 3:
      wildZone.Three(switchTwo);
      break;
    case 4:
      wildZone.Four(switchTwo);
      break;
    case 5:
      wildZone.Five(switchTwo);
      break;
    case 6:
      wildZone.Six(switchTwo);
      break;
    case 7:
      wildZone.Seven(switchTwo);
      break;
    case 8:
      wildZone.Eight(switchTwo);
      break;
    case 9:
      wildZone.Nine(switchTwo);
      break;
    case 10:
      wildZone.Ten(switchTwo);
      break;
    case 11:
      wildZone.Eleven(switchTwo);
      break;
    case 12:
      wildZone.Twelve(switchTwo);
      break;
    case 13:
      wildZone.Thirteen(switchTwo);
      break;
    case 14:
      wildZone.Fourteen(switchTwo);
      break;
    case 15:
      wildZone.Fifteen(switchTwo);
      break;
    case 16:
      wildZone.Sixteen(switchTwo);
      break;
    case 17:
      wildZone.Seventeen(switchTwo);
      break;
    case 18:
      wildZone.Eighteen(switchTwo);
      break;
    case 19:
      wildZone.Nineteen(switchTwo);
      break;
    case 20:
      wildZone.Twenty(switchTwo);
      break;
    case 50:
      mapLocations.Refresh(switchTwo);
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
