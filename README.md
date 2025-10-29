# plza-shiny-tool

A fork of [ironandstee1's swemu-plus-plus](https://github.com/ironandstee1/swemu-plus-plus) to shiny hunt using the fast-travel
method in Pokémon Legends: Z-A. 

This is only compatible with ATMega32U4 based boards (Arduino Leonardo, Arduino Pro Micro) and compatibility is not planned.  

| zoneId        | Location/Function |
| ------------- | ------------- |
| 1             | Wild Zone 1   |
| 2             | Wild Zone 2   |
| 3             | Wild Zone 3   |
| 4             | Wild Zone 4   |
| 5             | Wild Zone 5   |
| 6             | Wild Zone 6   |
| 7             | Wild Zone 7   |
| 8             | Wild Zone 8   |
| 9             | Wild Zone 9   |
| 10            | Wild Zone 10  |
| 11            | Wild Zone 11  |
| 12            | Wild Zone 12  |
| 13            | Wild Zone 13  |
| 14            | Wild Zone 14  |
| 15            | Wild Zone 15  |
| 16            | Wild Zone 16  |
| 17            | Wild Zone 17  |
| 18            | Wild Zone 18  |
| 19            | Wild Zone 19  |
| 20            | Wild Zone 20  |
| 50            | Refresh Map Location (Pokémon Center, Building, Cafe)  |
| 999           | `simpleScript()` |

## Flashing Instructions

Precompiled code coming soon--currently there is no way to interface with this outside of editing the main loop.

## Building / Usage Instructions

1. Download the [Arduino IDE](https://www.arduino.cc/en/software/) (tested on 1.8.19 and 2.3.6)
2. Download [Arduino LUFA](https://github.com/Palatis/Arduino-Lufa) and follow the instructions on its repository to set it up.
3. Open `plza-shiny-tool.ino` in the Arduino IDE, select your board type and serial port.
4. Set `zoneId` equal to the desired Wild Zone's number, or other ID from table (coming soon).
5. If using a Switch 1, set `switchTwo` to false. This will adjust loading times to accommodate for slower load speeds on Switch 1. (This is untested and theoretical--may not be needed).

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

## In-Game Setup Instructions

### Wild Zone x
1. Unplug/disconnect all other controllers/attach Joy-Cons to console.
2. Plug in Arduino.

## Todo

- Physical button matrix code
- Add coords for non-wild area fly locations

## Credits

All credits go to ironandstee1 as well as fluffymadness for their original projects.

fluffymadness also thanked:

Special thanks to shinyquagsire's and progmem's reverseengineering work for the pokken tournament controller. (https://github.com/progmem/Switch-Fightstick)

Dean Camera for the LUFA Library

zlittell, msf-xinput was very helpful for starting.


