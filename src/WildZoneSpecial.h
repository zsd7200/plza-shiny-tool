#ifndef _WildZoneSpecial_H_
#define _WildZoneSpecial_H_

#include "LUFAConfig.h"
#include <LUFA.h>
#include "Joystick.h"
#include "Descriptors.h"
#include "WaitTimes.h"
#include "SimpleScripting.h"
#include "MapLocations.h"
#include "PokemonCenter.h"
#include "WildZone.h"
#include "WildZoneRefresh.h"

using namespace std;

class WildZoneSpecial : private Simple {
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
