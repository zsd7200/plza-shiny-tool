#ifndef _Cafe_H_
#define _Cafe_H_

#include "LUFAConfig.h"
#include <LUFA.h>
#include "Joystick.h"
#include "Descriptors.h"
#include "WaitTimes.h"
#include "SimpleScripting.h"

using namespace std;

class Cafe : private Simple {
  public:
    void Ultimo();
    void Action();
    void Bataille();
    void Kizuna();
    void Triste();
    void PokemonAmie();
    void Nouveau();
    void NouveauTruckTwo();
    void NouveauTruckThree();
    void Gallant();
    void Rouleau();
    void Shutterbug();
    void Soleil();
    void Woof();
    void Classe();
    void Cyclone();
    void Introversion();
};

#endif
