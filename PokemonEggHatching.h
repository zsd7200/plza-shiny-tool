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

  /// Hatches pokemon eggs repeatedly based on egg steps chosen by the user.
  /// Possible values: 2560, 3840, 5120, 6400, 7680, 8960, 10240 
  /// @param eggSteps egg steps that it takes to hatch an egg. 
  void eggHatch(const int eggSteps);

  private:

  General general;

  /// Moves the player in circles on a bike
  void circleCW(int numberOfCircles); 

  /// Hatches an egg 
  void eggHatchSequence(); 

  /// Gets an egg from the Daycare and puts it in a chosen slot (failure proof)
  void getEgg(int eggNumber); 

  /// Returns the player to the daycare after an egg hatch
  void returnToDaycare(); /// Returns the player to the daycare after an egg hatch
};

#endif
