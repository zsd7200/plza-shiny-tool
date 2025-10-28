#ifndef _SimpleScripting_H_
#define _SimpleScripting_H_

#include "LUFAConfig.h"
#include <LUFA.h>
#include "Joystick.h"
#include "Descriptors.h"
#include "General.h"

using namespace std;

class Simple {
  public:
    Simple::Simple() {}

    void Left(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Right(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Up(unsigned long timeHeld, unsigned long afterDelay = 200);
    void Down(unsigned long timeHeld, unsigned long afterDelay = 200);
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

  private:
    General general;
};

#endif