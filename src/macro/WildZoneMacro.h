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
    void ThirteenRoll();
    void SixteenRoll();
    void TwentyAlpha();
    void TwentySouth();

  private:
    Building building;
    MapLocations mapLocations;
    PokemonCenter pokemonCenter;
    WildZone wildZone;
    WildZoneRefresh wildZoneRefresh;

    int twentyAlphaCount = 0;
    const int MAX_TWENTY_ALPHA_COUNT = 30;
    int courseCorrectCount = 0;
    int maxCourseCorrectCount = 0;
    const int MAX_THIRTEEN_COURSE_CORRECT_COUNT = 5;
    bool needToTravel = true;
};

#endif
