#include "WildZoneMacro.h"

void WildZoneMacro::TwentyAlpha(boolean switchTwo = true) {
    // check if fresh cycle
    if (twentyAlphaCount == 0) {
        // center, then travel to centrico center
        mapLocations.TopLeft();
        pokemonCenter.Centrico();
        BWait(250);

        // change day/night cycle
        Right(50);
        Roll();
        Up(50);
        Roll(2);
        mapLocations.Bench(switchTwo, false);
        BWait(500);

        // fly to zone 20
        Plus(100);
        Nothing(MAP_LOAD_WAIT);
        Down(150);
        MapTravel(switchTwo);
        BWait(250);
    }

    // roll to gate
    Roll();
    A(50);
    Nothing(GATE_WAIT_MS);

    // roll in
    Roll(5);

    // roll out
    Down(50);
    Roll(3);
    Left(250);
    Down(50);
    Roll(2);

    // leave
    A(50);
    Nothing(GATE_WAIT_MS);

    // increment twentyAlphaCount or reset to fix weird day/night cycle issues
    twentyAlphaCount++;
    if (twentyAlphaCount == MAX_TWENTY_ALPHA_COUNT) {
        twentyAlphaCount = 0;
        return;
    }

    // refresh zone 20
    BWait(250);
    //wildZoneRefresh.Twenty(switchTwo); // doesn't work here for some reason, need to investigate further
    Plus(100);
    Nothing(MAP_LOAD_WAIT);
    Left(100);
    Nothing(50);
    MapTravel(switchTwo);
}

void WildZoneMacro::Roll(int times = 1) {
    for (int i = 0; i < times; i++) {
        Y(50);
        Nothing(ROLL_WAIT_MS);
    }
}