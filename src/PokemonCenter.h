#ifndef _PokemonCenter_H_
#define _PokemonCenter_H_

#include "LUFAConfig.h"
#include <LUFA.h>
#include "Joystick.h"
#include "Descriptors.h"
#include "WaitTimes.h"
#include "SimpleScripting.h"

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
