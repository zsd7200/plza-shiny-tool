# plza-shiny-tool

A fork of [ironandstee1's swemu-plus-plus](https://github.com/ironandstee1/swemu-plus-plus) to shiny hunt using the fast-travel
method in Pokémon Legends: Z-A. 

This is only compatible with ATMega32U4 based boards (Arduino Leonardo, Arduino Pro Micro) and compatibility is not planned.  

| Script        | Status |
| ------------- | ------------- |
| Wild Zone 1   | Complete | 
| Wild Zone 2   | Complete | 
| Wild Zone 3   | Complete | 
| Wild Zone 4   | Complete | 
| Wild Zone 5   | Complete | 
| Wild Zone 6   | Complete | 
| Wild Zone 7   | Complete | 
| Wild Zone 8   | Complete | 
| Wild Zone 9   | Complete | 
| Wild Zone 10  | Complete | 
| Wild Zone 11  | Complete | 
| Wild Zone 12  | Complete | 
| Wild Zone 13  | Complete | 
| Wild Zone 14  | Complete | 
| Wild Zone 15  | Complete | 
| Wild Zone 16  | Complete | 
| Wild Zone 17  | Complete | 
| Wild Zone 18  | Complete | 
| Wild Zone 19  | Complete | 
| Wild Zone 20  | Complete | 

## Flashing Instructions

Precompiled code coming soon--currently there is no way to interface with this outside of editing the main loop.

## Building Instructions

- Download the [Arduino IDE](https://www.arduino.cc/en/software/) (tested on 1.8.19 and 2.3.6)
- Download [Arduino LUFA](https://github.com/Palatis/Arduino-Lufa) and follow the instructions on its repository to set it up.
- Open `plza-shiny-tool.ino` in the Arduino IDE, select your board type and serial port, then upload code to board.

## Scripting Instructions

If you want to create your own scripts, there is an included function called ```simpleScript``` in the main.ino file. Simply make the ```simpleScript();``` the only function call in main and write a script such as

```  
simple.Left(1000);
simple.Nothing(1000);
simple.Right(1000);
simple.Nothing(1000);
simple.Up(1000);
simple.Nothing(1000);
simple.X(1000);
simple.Nothing(1000);
simple.Y(1000);
simple.Nothing(1000);
simple.A(1000);
simple.Nothing(1000);
simple.B(1000);
simple.Nothing(1000);
```

to execute it! This example is aleady provided in the source code. 

If you would like to see the available functions or configure the wait time after every function, check out the SimpleScripting.h header. You can also create classes and functions as I did if that's your preference. 

## Usage

Uncomment your desired Wild Zone from `plza-shiny-tool.ino`, then flash the firmware to your device.

If using a Switch 1, add `false` into the parameters of the function. (IE - `wildZone.Eighteen()` becomes `wildZone.Eighteen(false);`)

This will change the timing slightly to accomodate slower load times. This is untested and theoretical.

## In-Game Setup Instructions

### Wild Zone x
1. Fly to desired Wild Zone.
2. Unplug/disconnect all other controllers/attach Joy-Cons to console.
3. Plug in Arduino.

## Todo

- Other fast travel points (cafes, Pokémon Centers, etc.)
- Physical button matrix code

### Credits

All credits go to ironandstee1 as well as fluffymadness for their original projects.

fluffymadness also thanked:

Special thanks to shinyquagsire's and progmem's reverseengineering work for the pokken tournament controller. (https://github.com/progmem/Switch-Fightstick)

Dean Camera for the LUFA Library

zlittell, msf-xinput was very helpful for starting.


