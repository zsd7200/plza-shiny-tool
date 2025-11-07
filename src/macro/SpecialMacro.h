#ifndef _SpecialMacro_H_
#define _SpecialMacro_H_

#include <LUFA.h>
#include "../LUFAConfig.h"
#include "../Joystick.h"
#include "../Descriptors.h"
#include "../util/WaitTimes.h"
#include "../util/SimpleScripting.h"
#include "../util/WildZoneRefresh.h"
#include "../locations/MapLocations.h"
#include "../locations/PokemonCenter.h"
#include "../locations/WildZone.h"

using namespace std;

class SpecialMacro : private Simple {
  public:
    void Trade(int numberToTrade = 1);
    void RemoveItems(int numberToRemove = 30);

  private:
    int currCount = 0;
    void BoxMovement(int finishNumber, boolean closeOut = true);
};

#endif
