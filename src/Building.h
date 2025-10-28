#ifndef _Building_H_
#define _Building_H_

#include "LUFAConfig.h"
#include <LUFA.h>
#include "Joystick.h"
#include "Descriptors.h"
#include "WaitTimes.h"
#include "SimpleScripting.h"

using namespace std;

class Building : private Simple {
  public:
    void LumioseMuseum();
    void HotelRichissime();
    void JusticeDojo();
    void LookerBureau();
    void PokeBallBoutique();
    void Quasartico();
    void LumioseSewers();
    void LysandreCafe();
    void RustSyndicateOffice();
    void PokemonResearchLab();
    void HotelZ();
    void GareDeLumiose();
    void RacineConstruction();
    void RestaurantLeWow();
    void RestaurantLeNah();
    void CentricoPlaza();
};

#endif
