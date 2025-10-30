# plza-shiny-tool

A fork of [ironandstee1's swemu-plus-plus](https://github.com/ironandstee1/swemu-plus-plus) to shiny hunt using the fast-travel
method in Pokémon Legends: Z-A.

This is only compatible with ATMega32U4 based boards (Arduino Leonardo, Arduino Pro Micro) and compatibility is not planned.

Designed to be interfaced with using a 25 button (5x5) button matrix, but can be used without. Will just need to reflash when starting a new hunt.

## Button Matrix Information

I printed [this enclosure](https://www.thingiverse.com/thing:5239739) by _m40 and wired it together with [1N4148 diodes](https://www.amazon.com/dp/B07Q4F3Y5W) on the rows.

I've included a diagram of my wiring in this repository, which can be found [here](https://github.com/zsd7200/plza-shiny-tool/blob/master/media/matrix.png).

For the board, I used [one of these](https://www.amazon.com/dp/B0B6HYLC44) clone boards with USB-C. The USB-C to USB-C directly to the Switch doesn't seem to work, but connecting a USB-C hub to the Switch and using a USB-C to USB-A cable on the Arduino seems to work fine.

You can use different pins or a different board, but you will have to adjust the code accordingly. Just change the `rowPins[ROWS]` and `colPins[COLS]` variables to match your row/column pins in order.

## Flashing Instructions

Precompiled code coming soon. It will only be available for those using a button matrix as described above.

## Building / Usage Instructions

1. Download the [Arduino IDE](https://www.arduino.cc/en/software/) (tested on 1.8.19 and 2.3.6)
2. Download [Arduino LUFA](https://github.com/Palatis/Arduino-Lufa) and follow the instructions on its repository to set it up.
3. Open `plza-shiny-tool.ino` in the Arduino IDE, select your board type and serial port.
4. If using a Switch 1, set `switchTwo` to `false`. This will adjust loading times to accommodate for slower load speeds on Switch 1. (This is untested and theoretical--may not be needed).
    - **If using a button matrix, skip to step 7. Otherwise, continue.**
5. Set `buttonMatrix` to `false`.
6. Set `zoneId` equal to the desired Wild Zone's number, or other ID from [this table](https://github.com/zsd7200/plza-shiny-tool/blob/master/ZONE_ID.md) (coming soon).
7. Upload code to board. You may need to press the reset button/bridge reset pins during upload.

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
1. Ensure that the game is not about to enter a new day/night cycle.
1. Unplug/disconnect all other controllers/attach Joy-Cons to console.
2. Plug in Arduino.
3. If using button matrix, push desired button.

**Note: You may need to unplug/replug the Arduino in to select a new area.**

## Todo

- Add coords for non-wild area fly locations
- Fix timing on first fly in
- Fix not being able to press a new button after the old one is running

## Credits

All credits go to ironandstee1 as well as fluffymadness for their original projects.

fluffymadness also thanked:

Special thanks to shinyquagsire's and progmem's reverseengineering work for the pokken tournament controller. (https://github.com/progmem/Switch-Fightstick)

Dean Camera for the LUFA Library

zlittell, msf-xinput was very helpful for starting.


