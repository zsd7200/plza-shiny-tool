#ifndef _WildZoneMacro_H_
#define _WildZoneMacro_H_

#include <LUFA.h>
#include "../LUFAConfig.h"
#include "../Joystick.h"
#include "../Descriptors.h"
#include "../util/WaitTimes.h"
#include "../util/SimpleScripting.h"
#include "../util/WildZoneRefresh.h"
#include "../locations/Building.h"
#include "../locations/MapLocations.h"
#include "../locations/PokemonCenter.h"
#include "../locations/WildZone.h"

using namespace std;

class WildZoneMacro : private Simple {
  public:
    void ThirteenRoll(boolean switchTwo = true);
    void TwentyAlpha(boolean switchTwo = true);
    void TwentySouth(boolean switchTwo = true);

  private:
    Building building;
    MapLocations mapLocations;
    PokemonCenter pokemonCenter;
    WildZone wildZone;
    WildZoneRefresh wildZoneRefresh;

    int twentyAlphaCount = 0;
    const int MAX_TWENTY_ALPHA_COUNT = 30;
    int courseCorrectCount = 0;
    int maxCourseCorrectCount;
    const int DEFAULT_MAX_COURSE_CORRECT_COUNT = 20;
    bool needToTravel = true;
};

#endif
