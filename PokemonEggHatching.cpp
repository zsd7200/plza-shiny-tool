#include "PokemonEggHatching.h"
#include "Descriptors.h"
#include "Joystick.h"

void PokemonEggHatching::circleCW(int numberOfCircles) {
  for (int i = 0; i < numberOfCircles; i++) {
    while (general.LeftJoystick(general.STICK_CENTER, general.UP, 100, 1) == true);
    while (general.LeftJoystick(general.RIGHT, general.UP, 100, 1) == true);
    while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 100, 1) == true);
    while (general.LeftJoystick(general.RIGHT, general.DOWN, 100, 1) == true);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 100, 1) == true);
    while (general.LeftJoystick(general.LEFT, general.DOWN, 100, 1) == true);
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 100, 1) == true);
    while (general.LeftJoystick(general.LEFT, general.UP, 100, 1) == true);
  }
  return;
}

void PokemonEggHatching::eggHatch(const int eggSteps) {
  general.Nothing(1000);
  returnToDaycare();
  getEgg(1);
  while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
  if (eggSteps == 2560) {
    circleCW(44);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);
    eggHatchSequence();
  }
  else if (eggSteps == 3840) {
    circleCW(67);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);
    eggHatchSequence();
  }
  else if ((eggSteps == 5120) || (eggSteps == 6400)) {
    if (eggSteps == 5120) {
      circleCW(44);      
    }
    else {
      circleCW(58);
    }

    returnToDaycare();
    getEgg(2);
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true); 
    if (eggSteps == 5120) {
      circleCW(35);  
    }
    else {
      circleCW(48);
    }
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);
    eggHatchSequence();
    returnToDaycare();
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true); 
    if (eggSteps == 5120) {
      circleCW(50);  
    }
    else {
      circleCW(68);
    }
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);
    eggHatchSequence();
  }
  else if (eggSteps == 7680) {
    circleCW(44);
    returnToDaycare();
    getEgg(2);
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(44);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    returnToDaycare();
    getEgg(3);
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(42);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    eggHatchSequence();
    returnToDaycare();
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(44);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    eggHatchSequence();
    returnToDaycare();
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(50);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    eggHatchSequence();
  }
  else if (eggSteps == 8960) {
    circleCW(44);
    returnToDaycare();
    getEgg(2);
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(44);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    returnToDaycare();
    getEgg(3);
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(50);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);
    eggHatchSequence(); 
    returnToDaycare();
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(52);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    eggHatchSequence();
    returnToDaycare();
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(48);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    eggHatchSequence();
    returnToDaycare();
  }
  else if (eggSteps == 10240) {
    circleCW(44);
    returnToDaycare();
    getEgg(2);
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(44);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    returnToDaycare();
    getEgg(3);
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(44);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    returnToDaycare();
    getEgg(4);
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(30);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);
    eggHatchSequence(); 
    returnToDaycare();
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(52);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    eggHatchSequence();
    returnToDaycare();
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(48);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    eggHatchSequence();
    returnToDaycare();
    while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, 800, 500) == true);
    circleCW(48);
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100) == true);    
    eggHatchSequence();
    returnToDaycare();
  }
  return;
}

void PokemonEggHatching::eggHatchSequence() {
  while (general.PressOneButton(general.B_BUTTON, 300, 3000) == true);
  while (general.PressOneButton(general.B_BUTTON, 300, 3000) == true);
  while (general.PressOneButton(general.B_BUTTON, 300, 3000) == true);
  while (general.PressOneButton(general.B_BUTTON, 300, 3000) == true);
  while (general.PressOneButton(general.B_BUTTON, 300, 3000) == true);
  while (general.PressOneButton(general.B_BUTTON, 300, 3000) == true);  
  return;
}

void PokemonEggHatching::getEgg(int eggNumber) {
  while (general.PressOneButton(general.A_BUTTON, 100, 1000) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 500) == true);
  
  // Exits before pokemon are taken back if egg is not available
  while (general.PressOneButton(general.B_BUTTON, 150, 150) == true);
  while (general.PressOneButton(general.B_BUTTON, 150, 150) == true);
  while (general.PressOneButton(general.B_BUTTON, 150, 150) == true);
  while (general.LeftJoystick(general.LEFT, general.DOWN, 300, 1) == true);

  while (general.PressOneButton(general.A_BUTTON, 150, 1500) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 1000) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 1000) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 1000) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 1500) == true);

  // Change egg slot based on egg number
  for (int i = 0; i < eggNumber; i++) {
    if (i != 0) { while(general.LeftJoystick(general.STICK_CENTER, general.DOWN, 100, 300) == true); }
  }

  while (general.PressOneButton(general.A_BUTTON, 100, 2500) == true);
  while (general.PressOneButton(general.B_BUTTON, 100, 2500) == true);
  while (general.PressOneButton(general.B_BUTTON, 100, 2500) == true);
  return;
}

void PokemonEggHatching::returnToDaycare() {
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, 1000, 100) == true);
  while (general.LeftJoystick(general.RIGHT, general.UP, 5000, 100) == true);
}

