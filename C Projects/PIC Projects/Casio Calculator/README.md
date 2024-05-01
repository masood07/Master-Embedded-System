# 📟 Simple Calculator Project

This project is a simple calculator implemented using an embedded system on Proteus. It features an LCD display and a keypad to perform basic arithmetic operations such as addition, subtraction, multiplication, and division. The calculator works similarly to a Casio calculator, displaying the operations as they are entered and showing the result upon hitting the enter key

## 📝 Table of Contents

- 🛠[Project Details](#Project-Details)
- 🔌[circuit](#circuit)
- 📖[Setup Instructions](#Setup-Instructions)
- 📖[Usage Instructions](#Usage-Instructions)
- 🔍[Source Code Overview](#source-code-overview)
- 📜[License](#license)

## 🛠 Project Details

- **Calculator Functionality:** The calculator can perform addition, subtraction, multiplication, and division.
- **LCD Display:** The calculator uses an LCD to display the input operations and the results.
- **Keypad Input:** A keypad allows users to enter the operations and numbers.
- **Proteus Simulation:** The project is designed to run on Proteus for simulation purposes.
## 📖 Usage Instructions

- **Start the Program:** When the program starts, the calculator is ready to receive input from the keypad.
- **Enter Operations:** Use the keypad to enter numbers and operators (e.g., `+`, `-`, `*`, `/`).
- **Calculate:** Press the `=` key to calculate the result of the entered operation. The result will be displayed on the next line of the LCD.
- **Reset:** To clear the current input and start a new operation, simply start entering a new operation on the keypad.

## 🔌 circuit
![image](https://drive.google.com/uc?export=view&id=1CJohcjs4WN65oyrBNiTvrDXBcbvjLA6N)

## 📖 Setup Instructions

1. Connect the LCD display to PORTD of the microcontroller.
2. Connect the keypad to PORTB of the microcontroller.
3. Compile the code using a suitable C compiler for your microcontroller.
4. Upload the compiled code to the microcontroller.

## 🔍 Source Code Overview

- **`main.c`:** The main program file. It initializes the LCD and keypad, handles user inputs, and performs calculations.
- **`lcd.c`:** This file contains functions to control the LCD display, such as initializing, setting the cursor, and displaying characters or strings.
- **`keypad.c`:** This file contains functions to control the keypad, such as initializing and getting the key pressed by the user.
- **`stack.c`:** This file contains functions to perform infix to postfix conversion and evaluate postfix expressions for the calculator.

## 📜 License

This project is open source and can be freely modified and distributed. Please include attribution if you use any part of this project in your work.
