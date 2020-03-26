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
 * repeatedly. Setup information is available on github. 
 */
  void wattFarming();

  /**
 * BoxRelease releases a set number of boxes of pokemon
 * before stalling indefinitely to avoid accidental
 * releases. The cursor must be placed on the top left 
 * corner of the first box to be released. 
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

    /**
  * fossilPokemon gets a set number of fossil pokemon
  * from the fossil lady on route six as long as you have 
  * enough fossils in your inventory. The player must be 
  * standing in front of the fossil lady with enough
  * fossils. 
  * 
  * Parameters
  * 
  * fossilName: name of fossil pokemon to get
  * possible names: arctozolt, arctovish, dracovish, dracozolt 
  * 
  * fossilAmount: number of fossils you want 
  */
  void fossilPokemon(String fossilName, const int fossilAmount);
  
  /**
 * stowOnSideBargain farms the stow on side bargain
 * repeatedly using the date/time exploit. 
 * The user must have a lot of money and be in 
 * front of the daily bargain man. 
 */
  void stowOnSideBargain();

  /**
 * berryFarm farms a berry tree repeatedly using
 * the date/time exploit. The player must be in
 * front of a berry tree. 
 */
  void berryFarm(); 

  /**
 * lottoFarm farms the lotto repeatedly using
 * the date/time exploit. The player must be in 
 * front of a PC. 
 */
  void lottoFarm();

  /**
  * evTrain uses the data/time exploit and poke jobs 
  * system to farm max EVs for two values. The pokemon
  * must be in a 2x5 grid starting at the top left
  * of the first box and the date must be set to
  * the start of the month. 
  * 
  * Parameters
  * 
  * firstEV: first EV to farm
  * secondEV: secondEV to farm 
  * Possible values: hp, attack, defense, spatk, spdef, speed
  * 
  */
  void evTrain(String firstEV, String secondEV);
  
  /**
  * pokejobs uses the data/time exploit to farm exp and items. The pokemon
  * must be in a 2x4 grid starting at the top left
  * of the first box and the date must be set to 1/1/ 
  * any year. The user must have not checked the jobs 
  * since the day changed. The user must be in front of a pc. 
  * 
  */
  void pokeJobs();

  /**
  * championsCup repeatedly competes in the champions cup to farm rare balls. 
  * The script only uses the first attack and g maxing, so strong single
  * move pokemon like fishous rend dracovish are recommended. The first 
  * two pokemon will be soloing the cup, so they have to be the 
  * strongest. 
  * 
  */
  void championsCup();
  




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
