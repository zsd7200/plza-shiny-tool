# swemu plus plus

This is a controller emulator anchored on [FluffyMadness' Fight Stick project](https://github.com/fluffymadness/ATMega32U4-Switch-Fightstick) and [Palatis' Arduino LUFA](https://github.com/Palatis/Arduino-Lufa). This particular repository is home to scripts that deal with Pokemon Sword and Shield. This is only compatible with ATMega32U4 based boards and compatibility is not planned.  

| Script  | Status | Speed | 
| ------------- | ------------- | ------------- |
| 2560 Egg Step Hatching  | Complete  | -/1 eggs |
| 3840 Egg Step Hatching  | Complete  | -/1 eggs |
| 5120 Egg Step Hatching  | Complete  | -/2 eggs |
| 6400 Egg Step Hatching  | Complete  | -/2 eggs |
| 7680 Egg Step Hatching  | Complete  | -/3 eggs |
| 8960 Egg Step Hatching  | Complete  | -/3 eggs |
| 10240 Egg Step Hatching  | Complete  | -/4 eggs |
| Box release | Complete | - |
| Digger brothers | Complete | - |
| Watt farming | Complete | -/2000 Watts |


## Building Instructions

- Download Arduino IDE (I used 1.8.2, other versions should work)
- Download Arduino LUFA from https://github.com/Palatis/Arduino-Lufa and follow the instructions on its repository to set it up. Note: these are not easy and it'll take some time to get this ready to go
- Upload this program to the Arduino. Every time you want to change the program you'll have to flash the original firmware first. [Here's a video on it](https://www.youtube.com/watch?v=JZtzIyXm98Q). 

## In-game setup instructions

### Egg Hatching

1. Make sure you have the oval charm and a pokemon with magma body in the sixth slot of your party
1. Fly to route 5 where the nursery is
1. Make sure the nursery lady has the pokemon you want and an egg ready
1. Get on our bike and go slightly to the left of the daycare lady (about where the fence is) but still facing upward
1. Unplug your controller and plug in your board

The egg hatching script is robust enough that it will not fail if the nursery lady does not have an egg. It will have some different behaviors to cover for the situations where this doesn't happen that may look weird, but it will get back on track. 

### Watt farming

1. Set your date to a a few days before 1/1/2000 (which day doesn't matter)
1. Find a wishing well with no pokemon near it and put a wishing piece into it
1. Turn on online and go to Link Battles
1. As soon as you've found a partner, press the home button and turn your device on airplane mode (un dock if necessary)
1. Turn airplane mode back off and go into your game and return to being in front of the well
1. Change your date forward a day and ensure that watts appear in the fountain 
1. Change your date to 1/1/2000 and collect the watts
1. Close the raid menu and stand directly in front of it
1. Unplug your controller and plug in your board

### Box release

1. Fill up the number of boxes you've specified in the code with the pokemon you want released
1. Put the cursor over the first pokemon in the first box you've released
1. Unplug your controller and plug in your board

### Digger brothers

1. Stand in front of the digger brothers
1. Unplug your controller and plug in your board


## Progress

All desired features complete. 

## Future work (in order)

- Figure out battle tower scripting if possible
- Add extra scripts I guess?

## How can you help?

- Fork this for yourself and do something cool with it
- Hit me up with ideas on twitter @ironandstee1

### Credits

fluffymadness, this is a fork of his repo after all

Special thanks to shinyquagsire's and progmem's reverseengineering work for the pokken tournament controller. (https://github.com/progmem/Switch-Fightstick)

Dean Camera for the LUFA Library

zlittell, msf-xinput was very helpful for starting.


