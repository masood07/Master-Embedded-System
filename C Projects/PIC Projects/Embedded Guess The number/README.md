# Embedded Number Guessing Game

Welcome to the Embedded Number Guessing Game project! This is an engaging guessing game where you try to guess a randomly generated number between 1 and 9 using a 3x3 keypad. You have 3 trials to guess the correct number, or you will lose the game.

## Table of Contents
- [Description](#description)
- [Requirements](#requirements)
- [How to Run](#how-to-run)
- [Gameplay Instructions](#gameplay-instructions)
- [Winning Example](#winning-example)
- [Losing Example](#losing-example)
- [Source Code Overview](#source-code-overview)
- [License](#License)

## Description
- C Compiler (e.g., XC8 for microcontroller programming).
- The code is designed to run on a microcontroller platform such as PIC or AVR.

## Requirements
- C Compiler (e.g., GCC) for compiling the code.
- The code is designed to use a proprietary file `english_words.h` that contains an array of 100 English words. The programmer is provided with this file, but you, as the user, do not need to provide it.

## How to Run
1. Compile the C code using the appropriate compiler for your microcontroller.
2. Program the compiled code onto your microcontroller board.
3. Once the program is running, use the 3x3 keypad to guess the randomly generated number.

## Gameplay Instructions
- At the start of the game, the system generates a random number between 1 and 9.
- You have 3 trials to guess the number correctly using the 3x3 keypad.
- After each guess, the system will inform you whether your guess was correct or not.
- If your guess is correct, the green LED will light up, and you win the game.
- If your guess is incorrect, one of the yellow LEDs will light up to indicate the trial count.
- If you fail to guess the correct number within 3 trials, the red LED lights up, and you lose the game.

### Winning Example
![image](https://drive.google.com/uc?export=view&id=1_asOJ_utVgqLAOL1Ft0q32hLb-bdb-_o)

### Losing Example
![image](https://drive.google.com/uc?export=view&id=1G7zXkwNFY9jww_dgci4zX8T9YpjXETJR)

## Source Code Overview
- main.c: Contains the main implementation of the game, including initializing the keypad, handling the game loop, and controlling the LEDs based on the game's state.
- keypad.c and keypad.h: Handle the keypad initialization and user input.
- The code utilizes PORTB and PORTD of the microcontroller for interfacing with the keypad and controlling the LEDs.
## License
This project is open source and can be freely modified and distributed. Please include attribution if you use any part of this project in your work.
