#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "english_words.h"

// Define constants for the alphabet and maximum word length
#define ALPHABET_SIZE ('z' + 1)
#define MAX_WORD_LENGTH 50

// Declare necessary variables
int freq_arr[ALPHABET_SIZE] = {}; // Frequency array for each character
int trials = 10; // Number of trials the user has
int idex, cnt = 0; // Index for word and count of correctly guessed letters
int map[ALPHABET_SIZE][MAX_WORD_LENGTH]; // Mapping of character positions in the word
char word[MAX_WORD_LENGTH]; // Current word in the game

// Function declarations
void init(int length);
void set_char(char ch);
void display();

int main() {
    // Seed the random number generator
    srand(time(NULL));
    
    // Generate a random number from 0 to 99
    idex = rand() % 100;
    
    // Initialize the word and game state
    init(strlen(*(englishWords + idex)));
    
    char ch; // Variable to hold the character input from user
    while (1) {
        // Display the current state of the word
        display();
        
        // Prompt the user to enter a character
        printf("Enter a character: ");
        fflush(stdin); // Clear input buffer
        fflush(stdout);
        scanf("%c", &ch);
        
        // Check if the character has already been guessed
        if (freq_arr[(int)ch]) {
            // Process the character and update the game state
            set_char(ch);
            cnt++; // Increment the count of correctly guessed letters
        } else {
            // Decrease the number of trials if the guess is incorrect
            trials--;
        }
        
        // Check if the user has no more trials left
        if (trials == 0) {
            printf("\nThe word was: %s\n", *(englishWords + idex));
            printf("Man is executed :( \n");
            break;
        }
        
        // Check if the user has guessed the entire word correctly
        if (cnt == strlen(*(englishWords + idex))) {
            printf("\nWIIIIIN\n");
            break;
        }
    }
    
    return 0;
}

// Initialize the word and game state
void init(int length) {
    // Null-terminate the word string
    word[length] = '\0';
    
    // Initialize the word with underscores and set up character frequency and index mapping
    for (int i = 0; i < length; i++) {
        word[i] = '_'; // Initialize the word with underscores
        char current_char = englishWords[idex][i];
        freq_arr[(int)current_char]++;
        map[(int)current_char][freq_arr[(int)current_char] - 1] = i;
    }
}

// Update the word state when a correct character is guessed
void set_char(char ch) {
    // Check if the character exists in the word
    if (freq_arr[(int)ch]) {
        int idx, i = 0;
        
        // Find the positions of the guessed character in the word
        for (; i < freq_arr[(int)ch]; i++) {
            if (map[(int)ch][i] != 'X') {
                idx = map[(int)ch][i];
            }
        }
        
        // Decrement the frequency and mark the character as guessed
        freq_arr[(int)ch]--;
        map[(int)ch][i] = 'X';
        
        // Update the word with the guessed character
        word[idx] = ch;
    }
}

// Display the current state of the word
void display() {
    printf("\n");
    
    // Print each character of the word
    for (int i = 0; i < strlen(word); i++) {
        printf("%c ", word[i]);
    }
    
    printf("\n\n");
}
