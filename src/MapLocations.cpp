#include "MapLocations.h"

void MapLocations::TopLeft() {
  Plus(100);
  Nothing(MAP_LOAD_WAIT);
  RStickDown(50);
  RStickDown(50);
  Up(4000);
  Left(4000);
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