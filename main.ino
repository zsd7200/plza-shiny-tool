#include "LUFAConfig.h"
#include <LUFA.h>
#include "Joystick.h"
#include "General.h"
#include "PokemonEggHatching.h"
#include "PokemonExtra.h"

General general; // Creates an instance of general input class
PokemonEggHatching pokemonEggHatching; // Creates an instance of pokemon egg hatching class
PokemonExtra pokemonExtra; // Creates an instance of pokemon extra class

void setup() {
  SetupHardware(); // Needed for LUFA
  GlobalInterruptEnable(); // Needed for LUFA
  //general.SetupDelay(); // Currently broken
}

void loop() {
  //pokemonEggHatching.eggHatch(2560);
  //pokemonEggHatching.eggHatch(3840);
  //pokemonEggHatching.eggHatch(5120);
  //pokemonEggHatching.eggHatch(6400);
  //pokemonEggHatching.eggHatch(7680);
  //pokemonEggHatching.eggHatch(8960);
  //pokemonEggHatching.eggHatch(10240);
    
  //pokemonExtra.boxRelease(5);
  //pokemonExtra.diggerBrothers();
  //pokemonExtra.wattFarming();
  //pokemonExtra.fossilPokemon("arctovish", 20);
  //pokemonExtra.stowOnSideBargain();
  //pokemonExtra.lottoFarm();
  pokemonExtra.evTrain("hp", "attack");
}


