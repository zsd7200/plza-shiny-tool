#ifndef _PokemonEggHatching_H_
#define _PokemonEggHatching_H_

#include "LUFAConfig.h"
#include <LUFA.h>
#include "Joystick.h"
#include "Descriptors.h"
#include "General.h"

using namespace std;

class PokemonEggHatching {
  public:

  PokemonEggHatching::PokemonEggHatching() {}

  /**
   * EggHatch hatches pokemon eggs repeatedly based on egg steps chosen by the user. 
   * 
   * Parameters
   * 
   * eggSteps: egg steps that it takes to hatch an egg. 
   * Possible values: 2560, 3840, 5120, 6400, 7680, 8960, 10240
   */
  void eggHatch(const int eggSteps);

  private:

  General general;

  void circleCW(int numberOfCircles); /// Moves the player in circles on a bike
  void eggHatchSequence(); /// Hatches an egg 
  void getEgg(int eggNumber); /// Gets an egg from the Daycare and puts it in a chosen slot (failure proof)
  void returnToDaycare(); /// Returns the player to the daycare after an egg hatch
};

#endif
