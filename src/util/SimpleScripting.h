#ifndef _SimpleScripting_H_
#define _SimpleScripting_H_

#include <LUFA.h>
#include "../LUFAConfig.h"
#include "../Joystick.h"
#include "../Descriptors.h"
#include "../General.h"
#include "WaitTimes.h"

using namespace std;

class Simple {
  public:
    Simple::Simple() {}

    void Left(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Right(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Up(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Down(unsigned long timeHeld, unsigned long afterDelay = 200);
    void RStickLeft(unsigned long timeHeld, unsigned long afterDelay = 200);
    void RStickRight(unsigned long timeHeld, unsigned long afterDelay = 200);
    void RStickUp(unsigned long timeHeld, unsigned long afterDelay = 200);
    void RStickDown(unsigned long timeHeld, unsigned long afterDelay = 200);
    void A(unsigned long timeHeld, unsigned long afterDelay = 200);
    void B(unsigned long timeHeld, unsigned long afterDelay = 200);
    void X(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Y(unsigned long timeHeld, unsigned long afterDelay = 200);
    void ZL(unsigned long timeHeld, unsigned long afterDelay = 200);
    void ZR(unsigned long timeHeld, unsigned long afterDelay = 200);
    void LB(unsigned long timeHeld, unsigned long afterDelay = 200);
    void RB(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Home(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Capture(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Plus(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Minus(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Nothing(unsigned long timeHeld, unsigned long afterDelay = 200);
    void BWait(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Roll(int times = 1);
    void MapTravel(boolean switchTwo = true);

  private:
    General general;
};

#endif