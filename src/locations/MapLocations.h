#ifndef _MapLocations_H_
#define _MapLocations_H_

#include <LUFA.h>
#include "../LUFAConfig.h"
#include "../Joystick.h"
#include "../Descriptors.h"
#include "../util/WaitTimes.h"
#include "../util/SimpleScripting.h"

using namespace std;

class MapLocations : private Simple {
  public:
    void TopLeft();
    void Refresh(boolean switchTwo = true);
    void Bench(boolean switchTwo = true, boolean goDown = true);
};

#endif
