#include<string.h>
#include "common.h"
#include "keypad.h"
#include "lcd.h"
#include "stack.h"
#include<ctype.h>
#include<string.h>

// Main function
void main(void) {
    lcd_init();  // Initialize the LCD
    keypad_init();  // Initialize the keypad
    lcd_cmd(_LCD_CLEAR);  // Clear the LCD display

    unsigned char input = 0, in[10], idex = 0, post[10];
    lcd_set_cursor(1, 1);  // Set cursor position

    // Main loop
    while (1) {
        input = keypad_get_key();  // Get keypad input
        if (input != '\0') {
            if (input != '=') {
                // Append input to buffer and display on LCD
                in[idex++] = input;
                lcd_chr_cp(input);
            } else {
                // Convert infix to postfix and evaluate
                intopost(in, post);
                sprintf(in, "%f", eva(post));
                lcd_out(2, 1, in);  // Display the result on the second line
            }
        }
    }
}
