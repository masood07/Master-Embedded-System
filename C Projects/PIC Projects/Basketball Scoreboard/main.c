#include <xc.h>
#define _XTAL_FREQ (8000000)
#define DIGIT1 (1 << 7) // Mask for setting the first digit (RC7) for Team A's 7-segment display
#define DIGIT2 (1 << 6) // Mask for setting the second digit (RC6) for Team A's 7-segment display
#define DIGIT3 (1 << 5) // Mask for setting the third digit (RC5) for Team A's 7-segment display
#define TEAM_A_3POINT (PORTB & (1 << 0)) // Button input for Team A's 3-point score
#define TEAM_A_2POINT (PORTB & (1 << 1)) // Button input for Team A's 2-point score
#define TEAM_B_3POINT (PORTB & (1 << 2)) // Button input for Team B's 3-point score
#define TEAM_B_2POINT (PORTB & (1 << 3)) // Button input for Team B's 2-point score

// Function to display scores on 7-segment displays for both teams
void sev_seg_display(unsigned int num, unsigned int num2);

// Function to create a delay while displaying scores on 7-segment displays
void delay_with_7_segment(unsigned int num, unsigned int num2, long delay);

void main(void)
{
    // Initial setup: Set PORTC and PORTD as output, PORTB as input
    TRISC = 0;
    TRISD = 0;
    TRISB = 0xFF;
    PORTD = 0;
    PORTC = 0;

    // Display initial scores for 3 seconds, then zero them
    delay_with_7_segment(101, 103, 3000);
    unsigned int teamA = 0, teamB = 0;

    // Infinite loop for continuously monitoring button inputs and updating scores
    while (1) {
        // Increment Team A's score if the 3-point button is pressed
        if (TEAM_A_3POINT) {
            teamA += 3;
            while (TEAM_A_3POINT);
        }
        // Increment Team A's score if the 2-point button is pressed
        else if (TEAM_A_2POINT) {
            teamA += 2;
            while (TEAM_A_2POINT);
        }
        // Increment Team B's score if the 3-point button is pressed
        else if (TEAM_B_3POINT) {
            teamB += 3;
            while (TEAM_B_3POINT);
        }
        // Increment Team B's score if the 2-point button is pressed
        else if (TEAM_B_2POINT) {
            teamB += 2;
            while (TEAM_B_2POINT);
        }
        // Update the display with the current scores
        sev_seg_display(teamA, teamB);
    }
}

// Function to display scores on 7-segment displays for both teams
void sev_seg_display(unsigned int num, unsigned int num2) {
    const unsigned char delay = 5; // Time delay between digit transitions

    // Display the units digit of Team A's score on PORTC and Team B's score on PORTD
    unsigned char Cdigit1 = (unsigned char)(num % 10), Ddigit1 = (unsigned char)(num2 % 10);
    // Display the tens digit of Team A's score on PORTC and Team B's score on PORTD
    unsigned char Cdigit2 = (unsigned char)(num / 10 % 10), Ddigit2 = (unsigned char)(num2 / 10 % 10);
    // Display the hundreds digit of Team A's score on PORTC and Team B's score on PORTD
    unsigned char Cdigit3 = (unsigned char)(num / 100), Ddigit3 =(unsigned char)(num2 / 100);

    // Display each digit of the scores in turn with a delay between each digit
    PORTC = DIGIT1; // Select the first digit
    PORTC |= Cdigit1; // Display the units digit for Team A on PORTC
    PORTD = Ddigit1; // Display the units digit for Team B on PORTD
    __delay_ms(delay);

    PORTC = DIGIT2; // Select the second digit
    PORTC |= Cdigit2; // Display the tens digit for Team A on PORTC
    PORTD = Ddigit2; // Display the tens digit for Team B on PORTD
    __delay_ms(delay);

    PORTC = DIGIT3; // Select the third digit
    PORTC |= Cdigit3; // Display the hundreds digit for Team A on PORTC
    PORTD = Ddigit3; // Display the hundreds digit for Team B on PORTD
    __delay_ms(delay);
}

// Function to create a delay while displaying scores on 7-segment displays
void delay_with_7_segment(unsigned int num, unsigned int num2, long delay) {
    delay /= 40; // Divide delay by the display rate
    while (--delay > 0) {
        // Continuously update the 7-segment displays during the delay period
        sev_seg_display(num, num2);
    }
}
