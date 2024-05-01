#include <xc.h>

// External variables to track the number of trials and the guessed number
char trials = (char)-1, num = 0;

// Function to initialize the keypad
void keypad_init(void) {
    // Disable pull-up resistors and configure PORTB pins 0-2 as output
    OPTION_REGbits.nRBPU = 0;
    TRISB = 0x38; // Set PORTB pins 3-5 as input
    PORTB = 0x07; // Set PORTB pins 0-2 as output
}

// Function to read user input from the keypad and update the guessed number and trials
void keypad_get_num(void) {
    // ******** First Row *******
    PORTB = 0x07; // Set row selector bits
    PORTBbits.RB0 = 0; // Activate the first row

    // Check each column for a key press
    if (PORTBbits.RB3 == 0) {
        num = 1;
        // Wait for the key release
        while (PORTBbits.RB3 == 0);
        trials++;
    } else if (PORTBbits.RB4 == 0) {
        num = 2;
        while (PORTBbits.RB4 == 0);
        trials++;
    } else if (PORTBbits.RB5 == 0) {
        num = 3;
        while (PORTBbits.RB5 == 0);
        trials++;
    }

    // ******** Second Row *******
    PORTB = 0x07; // Reset row selector bits
    PORTBbits.RB1 = 0; // Activate the second row

    // Check each column for a key press
    if (PORTBbits.RB3 == 0) {
        num = 4;
        while (PORTBbits.RB3 == 0);
        trials++;
    } else if (PORTBbits.RB4 == 0) {
        num = 5;
        while (PORTBbits.RB4 == 0);
        trials++;
    } else if (PORTBbits.RB5 == 0) {
        num = 6;
        while (PORTBbits.RB5 == 0);
        trials++;
    }

    // ******** Third Row *******
    PORTB = 0x07; // Reset row selector bits
    PORTBbits.RB2 = 0; // Activate the third row

    // Check each column for a key press
    if (PORTBbits.RB3 == 0) {
        num = 7;
        while (PORTBbits.RB3 == 0);
        trials++;
    } else if (PORTBbits.RB4 == 0) {
        num = 8;
        while (PORTBbits.RB4 == 0);
        trials++;
    } else if (PORTBbits.RB5 == 0) {
        num = 9;
        while (PORTBbits.RB5 == 0);
        trials++;
    }
}
