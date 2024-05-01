# 🔒 Embedded Smart lock (LCD , Keypad)

Welcome to the Embedded Smart Lock LCD Keypad project! This project involves creating a password authentication system using an LCD display and a keypad connected to a microcontroller. 

## 📝 Table of Contents

- 📖[Description](#description)
- 🛠[Requirements](#requirements)
- 🔌[circuit](#circuit)
- 📖[Setup Instructions](#setup-instructions)
- 🎮[Usage](#usage)
- 🔍[Source Code Overview](#source-code-overview)
- 📜[License](#license)

## 📖 Description

This project allows the user to enter a password using a keypad. If the password matches the predefined one, the system displays the user's name on the LCD display and performs a scrolling effect. If the password is incorrect, it prompts the user to try again.

## 🛠 Requirements

- Microcontroller
- LCD display connected to PORTD
- Keypad connected to PORTB
- C compiler (e.g., XC8 for PIC microcontrollers)

## 🔌circuit
![image](https://drive.google.com/uc?export=view&id=1eF2ntDhuyB2qpjxpTUFPtmDHjd7xdx0T)

## 📖 Setup Instructions

1. Connect the LCD display to PORTD of the microcontroller.
2. Connect the keypad to PORTB of the microcontroller.
3. Compile the code using a suitable C compiler for your microcontroller.
4. Upload the compiled code to the microcontroller.

## 🎮 Usage

- When the program starts, a welcome message "WELCOME USER" is displayed on the LCD.
- After a delay of 2 seconds, the user is prompted to enter the password using the keypad.
- If the password matches the predefined password (`1234`), the LCD displays the user's name and performs a scrolling effect:
  The content scrolls right 8 times, then left 8 times, with a 300ms delay between each scroll.
- If the password is incorrect, the message "WRONG PASSWORD" is displayed on the LCD for 1.5 seconds, and the user is prompted to try again.

## 🔍 Source Code Overview

- `main.c`: Contains the main implementation of the project.
    - Initializes the LCD and keypad.
    - Handles user input and password verification.
    - Manages the LCD display based on whether the password matches the predefined password or not.
    - Uses utility functions for LCD scrolling effects.
- `lcd.c`: Handles LCD initialization and control.
    - Initializes the LCD and sets the cursor positions.
    - Provides functions to display text, set the cursor, and control LCD shifting.
- `keypad.c`: Handles keypad initialization and key detection.
    - Initializes the keypad and sets up its pins.
    - Provides functions to detect key presses and returns the corresponding character.
    - Implements the keypad scanning and debounce logic to ensure accurate key detection.
- `common.h`:  Provides common definitions and macros.
    - Contains bit masking macros and LCD pin configurations.
    - Sets up important definitions such as the microcontroller's frequency. initialization and control.

## 📜 License

This project is open source and can be freely modified and distributed. Please include attribution if you use any part of this project in your work.
