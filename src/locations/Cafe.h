#ifndef _Cafe_H_
#define _Cafe_H_

#include <LUFA.h>
#include "../LUFAConfig.h"
#include "../Joystick.h"
#include "../Descriptors.h"
#include "../util/WaitTimes.h"
#include "../util/SimpleScripting.h"

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
