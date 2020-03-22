#include "PokemonExtra.h"
#include "Descriptors.h"
#include "Joystick.h"

PokemonExtra::PokemonExtra() {
  day = 0;
  month = 0;
  year = 0;
}
  
void PokemonExtra::wattFarming() {
  while (general.PressOneButton(general.A_BUTTON, 150, 150));
  for (int i = 0; i < 15; i++) {
    while (general.PressOneButton(general.B_BUTTON, 150, 150));
  }
  if(day < 25) {
    dayChange();
    day++; 
  }
  else if (month < 12) {
    monthChange();
    month++;
    day = 0;
  }
  else {
    yearChange();
    month = 0;
    day = 0;
  }
  return;
}

void PokemonExtra::boxRelease(const int boxes) {
  releaseSetup();
  for (int i = 0; i < boxes; i++) {
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < 6; k++) {
        pokemonRelease(); 
        while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 100, 200));
      }
      while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 100, 200));
      while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 200, 200));   
    }
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 100, 200));
    while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 100, 200));
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 100, 200));
  }
  while (general.PressOneButton(general.X_BUTTON, 200, 900000));
  while (general.PressOneButton(general.X_BUTTON, 200, 900000));
  while (general.PressOneButton(general.X_BUTTON, 200, 900000));
  while (general.PressOneButton(general.X_BUTTON, 200, 900000));
  while (general.PressOneButton(general.X_BUTTON, 200, 900000));
  return;
}

void PokemonExtra::dayChange() {
  toDateTimeSettings();
  while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 200, 400));
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, 200, 100));
  while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 1000, 200));
  while (general.PressOneButton(general.A_BUTTON, 200, 500));
  while (general.PressOneButton(general.HOME_BUTTON, 200, 1000));
  while (general.PressOneButton(general.A_BUTTON, 200, 2000));
  return;
}

void PokemonExtra::diggerBrothers() {
  while (general.PressOneButton(general.A_BUTTON, 150, 150));
  return;
}

void PokemonExtra::monthChange() {
  toDateTimeSettings();
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, 200, 100));
  while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 200, 400));
  for (int i = 0; i < 25; i++) {
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 200, 100)); 
  }
  while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 1000, 200));
  while (general.PressOneButton(general.A_BUTTON, 200, 500));
  while (general.PressOneButton(general.HOME_BUTTON, 200, 1000));
  while (general.PressOneButton(general.A_BUTTON, 200, 2000));
  return;
}

void PokemonExtra::toDateTimeSettings() {
  while (general.PressOneButton(general.HOME_BUTTON, 200, 1000));
  while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 200, 200));
  for (int i = 0; i < 4; i++) {
    while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 200, 100));  
  }
  while (general.PressOneButton(general.A_BUTTON, 200, 500));
  while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 2000, 100));
  while (general.PressOneButton(general.A_BUTTON, 200, 500));
  for (int i = 0; i < 2; i++) {
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 400, 100));  
  }
  while (general.PressOneButton(general.A_BUTTON, 200, 300));
  while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 1000, 100));
  while (general.PressOneButton(general.A_BUTTON, 200, 400));
  return;
}

void PokemonExtra::pokemonRelease() {
  while (general.PressOneButton(general.A_BUTTON, 100, 250) == true);
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, 100, 200) == true);
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, 100, 200) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 1200) == true);
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, 100, 150) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 600) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 650) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 600) == true);
}

void PokemonExtra::releaseSetup() {
  while (general.PressOneButton(general.A_BUTTON, 100, 150) == true);
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, 100, 100) == true);
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, 100, 100) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 300) == true);
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, 100, 100) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 300) == true);
  while (general.PressOneButton(general.A_BUTTON, 100, 1000) == true);
  while (general.PressOneButton(general.B_BUTTON, 100, 300) == true);
  while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 100, 100) == true);
  
}

void PokemonExtra::yearChange () {
  toDateTimeSettings();
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, 200, 100));
  while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 200, 400));
  for (int i = 0; i < 25; i++) {
    while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, 200, 100)); 
  }
  while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 200, 400));
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, 200, 100));
  while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, 1000, 200));
  while (general.PressOneButton(general.A_BUTTON, 200, 500));
  while (general.PressOneButton(general.HOME_BUTTON, 200, 1000));
  while (general.PressOneButton(general.A_BUTTON, 200, 2000));
  return;
}
