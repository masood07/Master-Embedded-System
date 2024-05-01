#include <string.h>
#include "common.h"
#include "keypad.h"
#include "lcd.h"

// Password to compare with user input
char* pass = "1234";

// Function to compare user input password with the correct password
int compare(char *str);

// Main function
void main(void) {
    // Initialize the LCD and keypad
    lcd_init();
    keypad_init();
    
    unsigned char input = 0;
    char user_pass[10];
    unsigned char idex = 0;
    
    // Display welcome message
    lcd_cmd(_LCD_CLEAR);
    lcd_cmd(_LCD_RETURN_HOME);
    lcd_cmd(_LCD_CURSOR_OFF);
    lcd_out(1, 1, "WELCOME USER");
    __delay_ms(2000);
    
    // Label for retry
    again:
    lcd_cmd(_LCD_CLEAR);
    lcd_out(1, 1, "ENTER PASSWORD:");
    lcd_set_cursor(2, 1);
    
    // Loop to handle user input
    while (1) {
        // Get input from keypad
        input = keypad_get_key();
        if (input != '\0') {
            if (input != '=') {
                // If not the confirm key, add input to user_pass array
                user_pass[idex++] = input;
                lcd_chr_cp(input); // Display input character on LCD
            } else {
                // If confirm key pressed, terminate user input string
                user_pass[idex] = '\0';
                
                // Check if input password matches the correct password
                if (compare(user_pass)) {
                    // If matched, display success message
                    lcd_cmd(_LCD_CLEAR);
                    lcd_out(1, 1, "MATCHED");
                    __delay_ms(2000);
                    
                    // Display user's name and perform scrolling effect
                    while (1) {
                        lcd_cmd(_LCD_CLEAR);
                        lcd_out(1, 1, "FirstName"); // Replace with your first name
                        lcd_out(2, 1, "LastName"); // Replace with your last name
                        
                        // Scroll right 8 times with 300ms delay between each scroll
                        for (char i = 0; i < 8; i++) {
                            lcd_cmd(_LCD_SHIFT_RIGHT);
                            __delay_ms(300);
                        }
                        
                        // Scroll left 8 times with 300ms delay between each scroll
                        for (char i = 0; i < 8; i++) {
                            lcd_cmd(_LCD_SHIFT_LEFT);
                            __delay_ms(300);
                        }
                    }
                } else {
                    // If password is wrong, display error message and retry
                    lcd_cmd(_LCD_CLEAR);
                    lcd_out(1, 1, "WRONG PASSWORD");
                    __delay_ms(1500);
                    lcd_cmd(_LCD_CLEAR);
                    goto again; // Go back to password prompt
                }
            }
        }
    }
}

// Function to compare the input password with the correct password
int compare(char *str) {
    // Check if lengths match
    if (strlen(str) != strlen(pass)) {
        return 0;
    }
    
    // Compare characters of the two strings
    for (char i = 0; i < strlen(str); i++) {
        if (str[i] != pass[i]) {
            return 0;
        }
    }
    
    // If all characters match, return 1
    return 1;
}
