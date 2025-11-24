#include "WildZoneMacro.h"

void WildZoneMacro::ThirteenRoll(boolean switchTwo = true) {
    if (!maxCourseCorrectCount) {
        maxCourseCorrectCount = 5;
    }

    // travel to zone
    if (needToTravel || courseCorrectCount == (maxCourseCorrectCount ?: DEFAULT_MAX_COURSE_CORRECT_COUNT)) {
        needToTravel = false;
        courseCorrectCount = 0;
        wildZone.Thirteen();
        BWait(250);
    }

    // roll to gate
    Roll();
    A(50);
    Nothing(GATE_WAIT);

    // roll in
    Roll(8);

    // roll out
    Down(50);
    Roll(8);

    // leave
    A(50);
    Nothing(GATE_WAIT);

    // increment count to reset player if something goes awry or timing gets messed up
    courseCorrectCount++;

    // refresh zone 13
    BWait(250);
    //wildZoneRefresh.Thirteen(); // doesn't work here for some reason, need to investigate further
    Plus(100);
    Nothing(MAP_LOAD_WAIT);
    Left(75);
    Nothing(50);
    MapTravel();
}

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
        MapTravel();
        BWait(250);
    }

    // roll to gate
    Roll();
    A(50);
    Nothing(GATE_WAIT);

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
    Nothing(GATE_WAIT);

    // increment twentyAlphaCount or reset to fix weird day/night cycle issues
    twentyAlphaCount++;
    if (twentyAlphaCount == MAX_TWENTY_ALPHA_COUNT) {
        twentyAlphaCount = 0;
        return;
    }

    // refresh zone 20
    BWait(250);
    //wildZoneRefresh.Twenty(); // doesn't work here for some reason, need to investigate further
    Plus(100);
    Nothing(MAP_LOAD_WAIT);
    Left(100);
    Nothing(50);
    MapTravel();
}

// doesn't work super great
void WildZoneMacro::TwentySouth(boolean switchTwo = true) {
    // travel to zone
    if (needToTravel) {
        needToTravel = false;
        mapLocations.TopLeft();
        building.CentricoPlaza();
        BWait(250);
    }

    // go to gate
    Roll(2);
    Left(850);
    Up(50);

    // enter gate
    A(50);
    Nothing(GATE_WAIT);

    // roll to ensure all spawns appear
    Roll(6);

    // refresh
    BWait(250);
    Plus(100);
    Nothing(MAP_LOAD_WAIT);
    Down(100);
    MapTravel();
}