#include "MapLocations.h"

void MapLocations::TopLeft() {
  Nothing(2000); // little delay from it being plugged in so the console can recognize the controller
  B(100);
  B(100);
  B(100);
  B(100);
  B(100); // back out of anything currently happening on screen
  Plus(100);
  Nothing(MAP_LOAD_WAIT);
  RStickDown(50);
  RStickDown(50);
  Up(2000);
  Left(2000);
};

void MapLocations::Refresh(boolean switchTwo = true) {
  Plus(100);
  Nothing(MAP_LOAD_WAIT);
  Down(50);
  Nothing(50);
  A(100);
  Nothing(TEXT_WAIT);
  A(100);
  Nothing(switchTwo ? SWITCH_TWO_WAIT : SWITCH_ONE_WAIT);
};