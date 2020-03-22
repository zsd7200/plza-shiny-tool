#include "General.h"
#include "Descriptors.h"
#include "Joystick.h"

unsigned long previousMillis = 0; 
unsigned long currentMillis = millis();

void General::handleUSB() {
  HID_Task();
  USB_USBTask();
}

void General::SetupDelay() {
  while (Nothing(1000));
  while (Nothing(1000));
  while (Nothing(1000));
}

bool General::PressOneButton(int button, unsigned long pressDuration, unsigned long waitDuration) {
  currentMillis = millis();
  if ((currentMillis - previousMillis) < pressDuration) {
    ReportData.Button |= button;  
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER; 
    ReportData.RX = STICK_CENTER;
    ReportData.RY = STICK_CENTER;
    
  }
  else if ((currentMillis - previousMillis) < (pressDuration + waitDuration)) {
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
      ReportData.RX = STICK_CENTER;
    ReportData.RY = STICK_CENTER;
  }
  else {
    previousMillis = millis();
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
    ReportData.RX = STICK_CENTER;
    ReportData.RY = STICK_CENTER;
    return false;
  }
  handleUSB();
  return true;
}

bool General::PressTwoButtons(int buttonOne, int buttonTwo, unsigned long pressDuration, unsigned long waitDuration) {
  currentMillis = millis();
  if ((currentMillis - previousMillis) < pressDuration) {
    ReportData.Button |= buttonOne;
    ReportData.Button |= buttonTwo;  
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER; 
  }
  else if ((currentMillis - previousMillis) < (pressDuration + waitDuration)) {
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
  }
  else {
    previousMillis = millis();
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
    return false;
  }
  handleUSB();
  return true;
}

bool General::LeftJoystick(int joystickXVal, int joystickYVal, unsigned long pressDuration, unsigned long waitDuration) {
  currentMillis = millis();
  if ((currentMillis - previousMillis) < pressDuration) {  
    ReportData.LX = joystickXVal;
    ReportData.LY = joystickYVal; 
  }
  else if ((currentMillis - previousMillis) < (pressDuration + waitDuration)) {
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
  }
  else {
    previousMillis = millis();
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
    return false;
  }
  handleUSB();
  return true;
}

bool General::LeftJoystickOneButton(int joystickXVal, int joystickYVal, int button, unsigned long pressDuration, unsigned long waitDuration) {
  currentMillis = millis();
  if ((currentMillis - previousMillis) < pressDuration) {  
    ReportData.Button |= button;
    ReportData.LX = joystickXVal;
    ReportData.LY = joystickYVal; 
  }
  else if ((currentMillis - previousMillis) < (pressDuration + waitDuration)) {
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
  }
  else {
    previousMillis = millis();
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
    return false;
  }
  handleUSB();
  return true;
}

bool General::LeftJoystickTwoButtons(int joystickXVal, int joystickYVal, int buttonOne, int buttonTwo, unsigned long pressDuration, unsigned long waitDuration) {
  currentMillis = millis();
  if ((currentMillis - previousMillis) < pressDuration) {  
    ReportData.Button |= buttonOne;
    ReportData.Button |= buttonTwo;
    ReportData.LX = joystickXVal;
    ReportData.LY = joystickYVal; 
  }
  else if ((currentMillis - previousMillis) < (pressDuration + waitDuration)) {
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
  }
  else {
    previousMillis = millis();
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
    return false;
  }
  handleUSB();
  return true;
}

bool General::RightJoystick(int joystickXVal, int joystickYVal, unsigned long pressDuration, unsigned long waitDuration) {
  currentMillis = millis();
  if ((currentMillis - previousMillis) < pressDuration) {  
    ReportData.LX = joystickXVal;
    ReportData.LY = joystickYVal; 
  }
  else if ((currentMillis - previousMillis) < (pressDuration + waitDuration)) {
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
  }
  else {
    previousMillis = millis();
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
    return false;
  }
  handleUSB();
  return true;
}

bool General::RightJoystickOneButton(int joystickXVal, int joystickYVal, int button, unsigned long pressDuration, unsigned long waitDuration) {
  currentMillis = millis();
  if ((currentMillis - previousMillis) < pressDuration) {  
    ReportData.Button |= button;
    ReportData.LX = joystickXVal;
    ReportData.LY = joystickYVal; 
  }
  else if ((currentMillis - previousMillis) < (pressDuration + waitDuration)) {
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
  }
  else {
    previousMillis = millis();
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
    return false;
  }
  handleUSB();
  return true;
}

bool General::RightJoystickTwoButtons(int joystickXVal, int joystickYVal, int buttonOne, int buttonTwo, unsigned long pressDuration, unsigned long waitDuration) {
  currentMillis = millis();
  if ((currentMillis - previousMillis) < pressDuration) {  
    ReportData.Button |= buttonOne;
    ReportData.Button |= buttonTwo;
    ReportData.LX = joystickXVal;
    ReportData.LY = joystickYVal; 
  }
  else if ((currentMillis - previousMillis) < (pressDuration + waitDuration)) {
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
  }
  else {
    previousMillis = millis();
    ReportData.LX = STICK_CENTER;
    ReportData.LY = STICK_CENTER;
    return false;
  }
  handleUSB();
  return true;
}

bool General::ShortHop() {
  currentMillis = millis();
  if (currentMillis - previousMillis > 25) {
    ReportData.Button |= X_BUTTON;  
    ReportData.LX = 128;
    ReportData.LY = 128; 
    if (currentMillis - previousMillis > 50) {
      previousMillis = millis();
      return false;
    }
  }
  else {
    ReportData.LX = 128;
    ReportData.LY = 128;
  }
  handleUSB();
  return true;
}

bool General::FullHop() {
  currentMillis = millis();
  if (currentMillis - previousMillis > 100) {
    ReportData.Button |= X_BUTTON;  
    ReportData.LX = 128;
    ReportData.LY = 128; 
    if (currentMillis - previousMillis > 200) {
      previousMillis = millis();
      return false;
    }
  }
  else {
    ReportData.LX = 128;
    ReportData.LY = 128;
  }
  handleUSB();
  return true;
}

bool General::FastFall(int mult) {
  currentMillis = millis();
  if (currentMillis - previousMillis > 25) {
    ReportData.LX = 128;
    ReportData.LY = 255; 
    if (currentMillis - previousMillis > mult*50) {
      previousMillis = millis();
      return false;
    }
  }
  else {
    ReportData.LX = 128;
    ReportData.LY = 255;
  }
  handleUSB();
  return true;
}

void General::ShortHopFastFall() {
  while(ShortHop() == true) {}
  while(Nothing(400) == true) {} // change value to increase airtime before fast fall
  while(FastFall(1) == true) {}
}

void General::FullHopFastFall() {
  while(FullHop() == true) {}
  while(Nothing(300) == true) {} // change value to increase airtime before fast fall
  while(FastFall(8) == true) {} // decrease if increasing airtime
}

bool General::Nothing(unsigned long waitDuration) {
    currentMillis = millis();
    if (currentMillis - previousMillis < waitDuration) {
      currentMillis = millis();
      ReportData.LX = 128;
      ReportData.LY = 128; 
      ReportData.RX = 128;
      ReportData.RY = 128; 
    }
    else {
      previousMillis = millis();
      return false;
    }
    handleUSB();
    return true;
}




