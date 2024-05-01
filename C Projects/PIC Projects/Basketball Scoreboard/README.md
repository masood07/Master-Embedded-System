# 🏀 Basketball Scoreboard Project

Welcome to the Basketball Scoreboard Project! This project involves creating a scoreboard system for a basketball game using a microcontroller and a 3-digit 7-segment display for each team. The scoreboard tracks points for two teams and allows the user to increment scores using buttons.

## Table of Contents
- 🏆[Description](#description)
- 🛠[Requirements](#requirements)
- 📖[Setup instructions](#Setup-instructions)
- 🎮[Gameplay Instructions](#gameplay-instructions)
- 🔍[Source Code Overview](#source-code-overview)
- 📜[License](#license)
- 🔌[circuit](#circuit)

## 🏆Description
In this project, you will use a microcontroller to control two 4-digit, common anode 7-segment displays (one for each team). Each team has two push buttons: one for a 2-point score and another for a 3-point score. The project includes a code that initializes the microcontroller and handles user inputs, updating the displays to reflect the live scores of both teams.

## 🛠Requirements
- Microcontroller with at least two ports available (PORTC and PORTD)
- 4-Digit 7-Segment displays (common anode type)
- 7447 decoders for the 7-segment displays
- Push buttons (four in total, two for each team)
- C Compiler (e.g., XC8 for PIC microcontrollers)

## 🔌circuit 

![image](https://drive.google.com/uc?export=view&id=1_asOJ_utVgqLAOL1Ft0q32hLb-bdb-_o)

## 📖Setup Instructions
1. Connect the first 7-segment display to the microcontroller's PORTC using a 7447 decoder (RC0 to RC3).
2. Connect the second 7-segment display to the microcontroller's PORTD using a 7447 decoder (RD0 to RD3).
3. Connect two push buttons to PORTB (RB0 and RB1) for Team A's scores: one button for 2 points and another for 3 points.
4. Connect two push buttons to PORTB (RB2 and RB3) for Team B's scores: one button for 2 points and another for 3 points.
5. Compile the code and upload it to the microcontroller.

## 🎮 Gameplay Instructions
- At the start of the game, the code will display the initial scores of 101 for Team A and 103 for Team B on the 7-segment displays for 3 seconds.
- After the initial display, the scores are set to zero, and the game begins.
- Press the push buttons corresponding to the teams and the type of score (2 points or 3 points).
- As you press the buttons, the corresponding team's score will be updated and displayed on the 7-segment displays.
- The game continues until you decide to stop or reset the scores.

## 🔍 Source Code Overview
- main.c: The main file containing the project's implementation.
    - The file initializes the microcontroller and 7-segment displays.
    - It listens for button inputs to adjust the scores of the two teams.
    - It uses a custom function sev_seg_display to update the 7-segment displays with the current scores.
- The file also contains utility functions such as delay_with_7_segment to create delays during display updates.

## 📜 License
This project is open source and can be freely modified and distributed. Please include attribution if you use any part of this project in your work.
