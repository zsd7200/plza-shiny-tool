#include <LUFA.h>
#include "src/LUFAConfig.h"
#include "src/Joystick.h"
#include "src/General.h"
#include "src/locations/MapLocations.h"
#include "src/locations/WildZone.h"
#include "src/util/SimpleScripting.h"
#include "src/util/WildZoneRefresh.h"
#include "src/macro/SpecialMacro.h"
#include "src/macro/WildZoneMacro.h"

MapLocations mapLocations;
WildZone wildZone;
Simple simple;
WildZoneRefresh wildZoneRefresh;
SpecialMacro specialMacro;
WildZoneMacro wildZoneMacro;

// set to false if not using a physical button matrix
bool usingMatrix = true;

// set desired wild zone number / area ID here
// or set to 999 for simpleScript
// if using button matrix, can leave this set to 0
int zoneId = 0;

// button matrix vars
const int ROWS = 5;
const int COLS = 5;
const int LEDS = 4;
const int DEBOUNCE_MS = 5;

const int rowPins[ROWS] = { 5, 6, 7, 8, 9 };
const int colPins[COLS] = { 10, 16, 14, 15, A0 };

bool keyState[ROWS][COLS];
bool lastKeyState[ROWS][COLS];
unsigned long lastChangeTime[ROWS][COLS];

int zoneIdButtonMap[ROWS][COLS];

const int ledPins[LEDS] = { A3, 4, 3, 2 };
int currPage = 0;
const int MAX_PAGES = 4;
const int PREV_PAGE = 997;
const int NEXT_PAGE = 998;

// determines whether or not the map should be zeroed before refreshing
bool hasTraveled;

// after some testing, this might not be necessary
bool switchTwo;

// For writing simple scripts, use this function and call to it in the main.
void simpleScript() {
  simple.A(50);
  simple.Nothing(50);
}

void setup() {
  SetupHardware(); // Needed for LUFA
  GlobalInterruptEnable(); // Needed for LUFA
  hasTraveled = false;
  switchTwo = true;

  // init button matrix
  for (int i = 0; i < COLS; i++) {
    pinMode(colPins[i], INPUT_PULLUP);
  }

  for (int i = 0; i < ROWS; i++) {
    pinMode(rowPins[i], INPUT);
  }

  for (int i = 0; i < LEDS; i++) {
    pinMode(ledPins[i], OUTPUT);
  }

  handlePage(0);

  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      keyState[i][j] = lastKeyState[i][j] = false;
      lastChangeTime[i][j] = 0;
    }
  }
}

void loop() {
  if (usingMatrix) {
    scanMatrix();
  }

  if (zoneId == PREV_PAGE) {
    zoneId = 0;
    return handlePage(-1);
  }

  if (zoneId == NEXT_PAGE) {
    zoneId = 0;
    return handlePage(1);
  }

  if (!hasTraveled && shouldSkipHasTraveled(zoneId)) {
    hasTraveled = true;
  }

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
      case 60:
        mapLocations.Bench(switchTwo);
        break;
      case 100:
        wildZoneMacro.TwentyAlpha(switchTwo);
        break;
      case 110:
        specialMacro.Trade(1);
        break;
      case 111:
        specialMacro.Trade(6);
        break;
      case 112:
        specialMacro.Trade(12);
        break;
      case 113:
        specialMacro.Trade(30);
        break;
      case 114:
        specialMacro.Trade(60);
        break;
      case 999:
        simpleScript();
        break;
      default:
        break;
    }
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
  if (row >= ROWS || col >= COLS) {
    zoneId = 0;
    return;
  }

  hasTraveled = false;
  zoneId = zoneIdButtonMap[row][col];
}

bool shouldSkipHasTraveled(int zone) {
  int skipZones[] = {60, 70, 110, 111, 112, 113, 114, 999};
  int numZones = sizeof(skipZones) / sizeof(skipZones[0]);

  for (int i = 0; i < numZones; i++) {
    if (zone == skipZones[i]) {
      return true;
    }
  }
  return false;
}

const int ZONE_MAP_PAGES[15][5][5] = {
    {
      { 1,  2,  3,  4,  5 },
      { 6,  7,  8,  9,  10 },
      { 11, 12, 13, 14, 15 },
      { 16, 17, 18, 19, 20 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 100, 100, 100, 100, 100 },
      { 110, 111, 112, 113, 114 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    },
    {
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 0, 0, 0, 0, 0 },
      { 50, 60, 999, PREV_PAGE, NEXT_PAGE },
    }
};

void handlePage(int adjust) {
  currPage += adjust;
  if (currPage == MAX_PAGES || currPage < 0) {
    currPage = 0;
  }

  for (int i = 0; i < LEDS; i++) {
    digitalWrite(ledPins[i], LOW);
  }

  switch (currPage) {
    case 0:
    default:
      digitalWrite(ledPins[0], HIGH);
      break;
    case 1:
      digitalWrite(ledPins[1], HIGH);
      break;
    case 2:
      digitalWrite(ledPins[2], HIGH);
      break;
    case 3:
      digitalWrite(ledPins[3], HIGH);
      break;
    case 4:
      digitalWrite(ledPins[0], HIGH);
      digitalWrite(ledPins[1], HIGH);
      break;
    case 5:
      digitalWrite(ledPins[0], HIGH);
      digitalWrite(ledPins[2], HIGH);
      break;
    case 6:
      digitalWrite(ledPins[0], HIGH);
      digitalWrite(ledPins[3], HIGH);
      break;
    case 7:
      digitalWrite(ledPins[1], HIGH);
      digitalWrite(ledPins[2], HIGH);
      break;
    case 8:
      digitalWrite(ledPins[1], HIGH);
      digitalWrite(ledPins[3], HIGH);
      break;
    case 9:
      digitalWrite(ledPins[2], HIGH);
      digitalWrite(ledPins[3], HIGH);
      break;
    case 10:
      digitalWrite(ledPins[0], HIGH);
      digitalWrite(ledPins[1], HIGH);
      digitalWrite(ledPins[2], HIGH);
      break;
    case 11:
      digitalWrite(ledPins[0], HIGH);
      digitalWrite(ledPins[1], HIGH);
      digitalWrite(ledPins[3], HIGH);
      break;
    case 12:
      digitalWrite(ledPins[0], HIGH);
      digitalWrite(ledPins[2], HIGH);
      digitalWrite(ledPins[3], HIGH);
      break;
    case 13:
      digitalWrite(ledPins[1], HIGH);
      digitalWrite(ledPins[2], HIGH);
      digitalWrite(ledPins[3], HIGH);
      break;
    case 14:
      digitalWrite(ledPins[0], HIGH);
      digitalWrite(ledPins[1], HIGH);
      digitalWrite(ledPins[2], HIGH);
      digitalWrite(ledPins[3], HIGH);
      break;
  }

  memcpy(zoneIdButtonMap, ZONE_MAP_PAGES[currPage], sizeof(zoneIdButtonMap));
}
