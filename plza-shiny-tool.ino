#include <LUFA.h>
#include "src/LUFAConfig.h"
#include "src/Joystick.h"
#include "src/General.h"
#include "src/WildZone.h"
#include "src/WildZoneRefresh.h"
#include "src/MapLocations.h"
#include "src/SimpleScripting.h"

Simple simple;
WildZone wildZone;
WildZoneRefresh wildZoneRefresh;
MapLocations mapLocations;

// set to true if using a switch 2
bool switchTwo = false;

// set to false if not using a physical button matrix
bool usingMatrix = true;

// set desired wild zone number / area ID here
// or set to 999 for simpleScript
// if using button matrix, can leave this set to 0
int zoneId = 0;

// button matrix vars
const int ROWS = 5;
const int COLS = 5;
const int DEBOUNCE_MS = 5;

const int rowPins[ROWS] = { 5, 6, 7, 8, 9 };
const int colPins[COLS] = { 10, 16, 14, 15, A0 };

bool keyState[ROWS][COLS];
bool lastKeyState[ROWS][COLS];
unsigned long lastChangeTime[ROWS][COLS];

// determines whether or not the map should be zeroed before refreshing
bool hasTraveled;

// For writing simple scripts, use this function and call to it in the main.
void simpleScript() {
  simple.Left(1000);
}

void setup() {
  SetupHardware(); // Needed for LUFA
  GlobalInterruptEnable(); // Needed for LUFA
  hasTraveled = false;

  // init button matrix
  for (int i = 0; i < COLS; i++) {
    pinMode(colPins[i], INPUT_PULLUP);
  }

  for (int i = 0; i < ROWS; i++) {
    pinMode(rowPins[i], INPUT);
  }

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      keyState[i][j] = lastKeyState[i][j] = false;
      lastChangeTime[i][j] = 0;
    }
  }
}

void loop() {
  if (!hasTraveled && zoneId > 0) {
    return travelTo(zoneId);
  }

  if (hasTraveled && zoneId > 0) {
    switch (zoneId) {
      case 1:
        wildZoneRefresh.One(switchTwo);
        break;
      case 2:
        wildZoneRefresh.Two(switchTwo);
        break;
      case 3:
        wildZoneRefresh.Three(switchTwo);
        break;
      case 4:
        wildZoneRefresh.Four(switchTwo);
        break;
      case 5:
        wildZoneRefresh.Five(switchTwo);
        break;
      case 6:
        wildZoneRefresh.Six(switchTwo);
        break;
      case 7:
        wildZoneRefresh.Seven(switchTwo);
        break;
      case 8:
        wildZoneRefresh.Eight(switchTwo);
        break;
      case 9:
        wildZoneRefresh.Nine(switchTwo);
        break;
      case 10:
        wildZoneRefresh.Ten(switchTwo);
        break;
      case 11:
        wildZoneRefresh.Eleven(switchTwo);
        break;
      case 12:
        wildZoneRefresh.Twelve(switchTwo);
        break;
      case 13:
        wildZoneRefresh.Thirteen(switchTwo);
        break;
      case 14:
        wildZoneRefresh.Fourteen(switchTwo);
        break;
      case 15:
        wildZoneRefresh.Fifteen(switchTwo);
        break;
      case 16:
        wildZoneRefresh.Sixteen(switchTwo);
        break;
      case 17:
        wildZoneRefresh.Seventeen(switchTwo);
        break;
      case 18:
        wildZoneRefresh.Eighteen(switchTwo);
        break;
      case 19:
        wildZoneRefresh.Nineteen(switchTwo);
        break;
      case 20:
        wildZoneRefresh.Twenty(switchTwo);
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

  if (usingMatrix) {
    scanMatrix();
  }
}

void travelTo(int zone) {
  mapLocations.TopLeft();
  hasTraveled = true;

  switch (zone) {
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
    default:
      break;
  }
}

// read button input
void scanMatrix() {
  for (int i = 0; i < ROWS; i++) {
    pinMode(rowPins[i], OUTPUT);
    digitalWrite(rowPins[i], LOW);

    for (int j = 0; j < COLS; j++) {
      bool pressed = (digitalRead(colPins[j]) == LOW);

      if (pressed != lastKeyState[i][j]) {
        lastChangeTime[i][j] = millis();
        lastKeyState[i][j] = pressed;
      }

      if ((millis() - lastChangeTime[i][j]) > DEBOUNCE_MS) {
        if (pressed != keyState[i][j]) {
          keyState[i][j] = pressed;
          if (pressed) {
            handleButton(i, j);
          }
        }
      }
    }

    pinMode(rowPins[i], INPUT);
  }
}

// set zoneId based on button pressed
void handleButton(int row, int col) {
  hasTraveled = false;

  switch (row) {
    case 0:
      switch (col) {
        case 0:
          zoneId = 1;
          break;
        case 1:
          zoneId = 2;
          break;
        case 2:
          zoneId = 3;
          break;
        case 3:
          zoneId = 4;
          break;
        case 4:
          zoneId = 5;
          break;
        default:
          break;
      }
      break;
    case 1:
      switch (col) {
        case 0:
          zoneId = 6;
          break;
        case 1:
          zoneId = 7;
          break;
        case 2:
          zoneId = 8;
          break;
        case 3:
          zoneId = 9;
          break;
        case 4:
          zoneId = 10;
          break;
        default:
          break;
      }
      break;
    case 2:
      switch (col) {
        case 0:
          zoneId = 11;
          break;
        case 1:
          zoneId = 12;
          break;
        case 2:
          zoneId = 13;
          break;
        case 3:
          zoneId = 14;
          break;
        case 4:
          zoneId = 15;
          break;
        default:
          break;
      }
      break;
    case 3:
      switch (col) {
        case 0:
          zoneId = 16;
          break;
        case 1:
          zoneId = 17;
          break;
        case 2:
          zoneId = 18;
          break;
        case 3:
          zoneId = 19;
          break;
        case 4:
          zoneId = 20;
          break;
        default:
          break;
      }
      break;
    case 4:
      switch (col) {
        case 0:
          zoneId = 50;
          break;
        case 1:
          zoneId = 999;
          break;
        case 2:
          zoneId = 0;
          break;
        case 3:
          zoneId = 0;
          break;
        case 4:
          zoneId = 0;
          break;
        default:
          break;
      }
      break;
    default:
      break;
  }
}
