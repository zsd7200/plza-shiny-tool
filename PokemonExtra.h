#ifndef _PokemonExtra_H_
#define _PokemonExtra_H_

#include "LUFAConfig.h"
#include <LUFA.h>
#include "Joystick.h"
#include "Descriptors.h"
#include "General.h"

using namespace std;

class PokemonExtra {
  public:

  PokemonExtra();

  /**
 * WattFarming farms watts from a fountain
 * by changing the date forward and collecting watts
 * repeatedly.
 */
  void wattFarming();

  /**
 * BoxRelease releases a set number of boxes of pokemon
 * before stalling indefinitely to avoid accidental
 * releases.
 * 
 * Parameters
 * 
 * boxes: the number of boxes to be released
 */
  void boxRelease(const int boxes);

  /**
 * Spams A to get rewards from the digger brothers
 */
  void diggerBrothers();

  private:

  void dayChange(); /// Changes the day forward once
  void monthChange(); /// Changes the month forward and subtracts 25 days
  void pokemonRelease(); /// Release an individual pokemon
  void releaseSetup(); /// Sets up release to account for controller plug in set up
  void toDateTimeSettings(); /// Opens up the date/time settings
  void yearChange(); /// Changes the year forward

  General general;

  int day = 0;
  int month = 0;
  int year = 0;
};

#endif
