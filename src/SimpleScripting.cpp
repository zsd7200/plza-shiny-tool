#include "SimpleScripting.h"

void Simple::Left(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.LeftJoystick(general.LEFT, general.STICK_CENTER, timeHeld, afterDelay) == true);
}

void Simple::Right(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.LeftJoystick(general.RIGHT, general.STICK_CENTER, timeHeld, afterDelay) == true);
}

void Simple::Up(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.LeftJoystick(general.STICK_CENTER, general.UP, timeHeld, afterDelay) == true);
}

void Simple::Down(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.LeftJoystick(general.STICK_CENTER, general.DOWN, timeHeld, afterDelay) == true);
}

void Simple::RStickLeft(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.RightJoystick(general.LEFT, general.STICK_CENTER, timeHeld, afterDelay) == true);
}

void Simple::RStickRight(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.RightJoystick(general.RIGHT, general.STICK_CENTER, timeHeld, afterDelay) == true);
}

void Simple::RStickUp(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.RightJoystick(general.STICK_CENTER, general.UP, timeHeld, afterDelay) == true);
}

void Simple::RStickDown(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.RightJoystick(general.STICK_CENTER, general.DOWN, timeHeld, afterDelay) == true);
}

void Simple::A(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.A_BUTTON, timeHeld, afterDelay));   
}

void Simple::B(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.B_BUTTON, timeHeld, afterDelay));   
}

void Simple::X(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.X_BUTTON, timeHeld, afterDelay));   
}

void Simple::Y(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.Y_BUTTON, timeHeld, afterDelay));   
}

void Simple::ZL(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.ZL_BUTTON, timeHeld, afterDelay));   
}

void Simple::ZR(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.ZR_BUTTON, timeHeld, afterDelay));   
}

void Simple::LB(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.LB_BUTTON, timeHeld, afterDelay));   
}

void Simple::RB(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.RB_BUTTON, timeHeld, afterDelay));   
}

void Simple::Home(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.HOME_BUTTON, timeHeld, afterDelay));   
}

void Simple::Capture(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.CAPTURE_BUTTON, timeHeld, afterDelay));   
}

void Simple::Plus(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.PLUS_BUTTON, timeHeld, afterDelay));   
}

void Simple::Minus(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.PressOneButton(general.MINUS_BUTTON, timeHeld, afterDelay));   
}

void Simple::Nothing(unsigned long timeHeld, unsigned long afterDelay = 200) {
  while (general.Nothing(timeHeld));
}

void Simple::MapTravel(boolean switchTwo = true) {
  A(100);
  Nothing(TEXT_WAIT);
  A(100);
  Nothing(switchTwo ? SWITCH_TWO_WAIT : SWITCH_ONE_WAIT);
}