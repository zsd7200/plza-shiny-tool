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
    void Magenta();
    void Rogue();
    void Hibernal();
    void Jaune();
    void Centrico();
    void MagentaPlaza();
    void Vernal();
    void Bleu();
    void Vert();
};

#endif
