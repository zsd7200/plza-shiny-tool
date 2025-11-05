#ifndef _WildZone_H_
#define _WildZone_H_

#include <LUFA.h>
#include "../LUFAConfig.h"
#include "../Joystick.h"
#include "../Descriptors.h"
#include "../util/WaitTimes.h"
#include "../util/SimpleScripting.h"

using namespace std;

class WildZone : private Simple {
  public:
    void One(boolean switchTwo = true);
    void Two(boolean switchTwo = true);
    void Three(boolean switchTwo = true);
    void Four(boolean switchTwo = true);
    void Five(boolean switchTwo = true);
    void Six(boolean switchTwo = true);
    void Seven(boolean switchTwo = true);
    void Eight(boolean switchTwo = true);
    void Nine(boolean switchTwo = true);
    void Ten(boolean switchTwo = true);
    void Eleven(boolean switchTwo = true);
    void Twelve(boolean switchTwo = true);
    void Thirteen(boolean switchTwo = true);
    void Fourteen(boolean switchTwo = true);
    void Fifteen(boolean switchTwo = true);
    void Sixteen(boolean switchTwo = true);
    void Seventeen(boolean switchTwo = true);
    void Eighteen(boolean switchTwo = true);
    void Nineteen(boolean switchTwo = true);
    void Twenty(boolean switchTwo = true);
};

#endif
