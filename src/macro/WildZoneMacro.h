#ifndef _WildZoneMacro_H_
#define _WildZoneMacro_H_

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

class WildZoneMacro : private Simple {
  public:
    void TwentyAlpha(boolean switchTwo = true);

  private:
    void Roll(int times = 1);

    MapLocations mapLocations;
    PokemonCenter pokemonCenter;
    WildZone wildZone;
    WildZoneRefresh wildZoneRefresh;

    int twentyAlphaCount = 0;
    const int MAX_TWENTY_ALPHA_COUNT = 30;
};

#endif
