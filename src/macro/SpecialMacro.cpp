#include "SpecialMacro.h"

void SpecialMacro::Trade(int numberToTrade = 1) {
    if (currCount == numberToTrade) {
        return;
    }

    // these inputs get ate
    A(50);
    A(50);
    A(50);

    A(50);
    Nothing(TEXT_WAIT);
    A(50);
    Nothing(TEXT_WAIT);
    A(50);
    Nothing(TRADE_WAIT);

    BoxMovement(numberToTrade);
}

void SpecialMacro::RemoveItems(int numberToRemove = 30) {
    if (currCount == numberToRemove) {
        return;
    }

    if (currCount == 0) {
        // these inputs get ate
        X(50);
        X(50);
        X(50);

        X(50);
    }

    A(50);
    Nothing(SEL_BOX_WAIT);
    Down(50);
    Down(50);
    A(50);
    Nothing(YES_WAIT);

    BoxMovement(numberToRemove, false);
}

void SpecialMacro::BoxMovement(int finishNumber, boolean closeOut = true) {
    currCount++;
    if (currCount == finishNumber) {
        if (closeOut) {
            B(50);
            Nothing(TEXT_WAIT);
            A(50);
            Nothing(TEXT_WAIT);
            B(50);
            Nothing(TEXT_WAIT);
            B(50);
            Nothing(TEXT_WAIT);
            B(50);
            Nothing(TEXT_WAIT);
        }
        return;
    }

    Right(50);

    if (currCount % 6 == 0) {
        Down(50);
    }

    if (currCount % 30 == 0) {
        Down(50);
        RB(50);
        Nothing(NEXT_BOX_WAIT);
    }
}