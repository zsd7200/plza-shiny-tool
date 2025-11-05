#ifndef _PokemonCenter_H_
#define _PokemonCenter_H_

#include <LUFA.h>
#include "../LUFAConfig.h"
#include "../Joystick.h"
#include "../Descriptors.h"
#include "../util/WaitTimes.h"
#include "../util/SimpleScripting.h"

using namespace std;

class PokemonCenter : private Simple {
  public:
    void Magenta(boolean switchTwo = true);
    void Rogue(boolean switchTwo = true);
    void Hibernal(boolean switchTwo = true);
    void Jaune(boolean switchTwo = true);
    void Centrico(boolean switchTwo = true);
    void MagentaPlaza(boolean switchTwo = true);
    void Vernal(boolean switchTwo = true);
    void Bleu(boolean switchTwo = true);
    void Vert(boolean switchTwo = true);
};

#endif
