#ifndef _MapLocations_H_
#define _MapLocations_H_

#include "LUFAConfig.h"
#include <LUFA.h>
#include "Joystick.h"
#include "Descriptors.h"
#include "WaitTimes.h"
#include "SimpleScripting.h"

using namespace std;

class MapLocations : private Simple {
  public:
    void TopLeft();
    void Refresh(boolean switchTwo = true);
};

#endif
