#include "SpecialMacro.h"

void SpecialMacro::Trade(int numberToTrade = 1) {
    if (currTradeCount == numberToTrade) {
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

    currTradeCount++;
    if (currTradeCount == numberToTrade) {
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
        return;
    }

    Right(50);

    if (currTradeCount % 6 == 0) {
        Down(50);
    }

    if (currTradeCount % 30 == 0) {
        Down(50);
        RB(50);
        Nothing(NEXT_BOX_WAIT);
    }
}