#include <xc.h>
#include "keypad.h"
#include <stdlib.h>
#include <time.h>

// External variables to track the number of trials and the guessed number
extern char trials, num;

// Main function
void main(void) {
    // Initialize the keypad and configure PORTD as output for the LEDs
    keypad_init();
    TRISD = 0; // Set PORTD as output
    PORTD = 0; // Initialize PORTD to 0
    
    char guess = 0;
    // Seed the random number generator and generate a random number between 0 and 9
    srand((unsigned int)time(NULL));
    guess = rand() % 10;

    // Main game loop
    while (1) {
        // Get the user's guess from the keypad
        keypad_get_num();

        // Check if the guessed number matches the random number and the user has remaining trials
        if (num == guess && trials != (char)-1) {
            goto success; // Go to success block if the guess is correct
        } else if (num != guess && trials != (char)-1) {
            // If the guess is incorrect and the user has remaining trials

            // If the user has exhausted all 3 trials, go to fail block
            if (trials == 3) {
                goto fail;
            } else {
                // Otherwise, turn on the yellow LED corresponding to the trial number
                PORTD |= (1 << trials);
            }
        }
    }

    // Fail block: Turn on the red LED (pin RD6) and end the game
fail:
    PORTDbits.RD6 = 1;
    goto fail; // Endless loop to end the game

    // Success block: Turn on the green LED (pin RD7) and end the game
success:
    PORTDbits.RD7 = 1;
    goto success; // Endless loop to end the game
}
