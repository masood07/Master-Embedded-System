#include <stdio.h>

// Function prototypes
int check_board_for_winner(char a[][3]);
void restart(char a[][3]);
void display(char a[][3]);

// Main function
int main()
{
    char a[3][3];  // Tic-tac-toe board
    int flag = 1, cnt = 0, draw = 0;  // Initialize variables
    char *ptr = *a;

    // Restart the game and display the initial board
    restart(a);
    display(a);

    // Main game loop
    while (1)
    {
        // If all cells are filled and no winner, it's a draw
        if (cnt == 9)
        {
            draw++;
            restart(a);
            printf("\n**** DRAW ****\n\n");
            display(a);
            flag = 1;  // Reset to player X
            cnt = 0;   // Reset move counter
        }

        int x;

        // Prompt the current player for a move
        printf("Player %c:\n", flag ? 'X' : 'O');
        scanf("%d", &x);

        // Player X's move
        if (flag)
        {
            *(ptr + x - 1) = 'X';
            display(a);
        }
        // Player O's move
        else
        {
            *(ptr + x - 1) = 'O';
            display(a);
        }

        // Check if there is a winner
        if (check_board_for_winner(a))
        {
            printf("(%c) wins the game\n", flag ? 'X' : 'O');
            if (draw > 0)
                printf("after %d draw(s)\n", draw);
            break;  // End the game
        }
        else
        {
            cnt++;  // Increment move counter
        }

        // Switch player turn
        flag = !flag;
    }

    return 0;
}

// Restart the game by resetting the board
void restart(char a[][3])
{
    char* ptr = *a;
    // Set the board to initial state with numbers 1-9
    for (int i = 0; i < 9; ++i)
    {
        *(ptr + i) = (char)(i + 49);
    }
}

// Check if there is a winner on the board
int check_board_for_winner(char a[][3])
{
    int f = 0;

    // Check for rows
    for (int i = 0; i < 3; ++i)
    {
        char c = a[i][0];
        for (int j = 1; j < 3; ++j)
        {
            if (a[i][j] == c)
            {
                c = a[i][j];
                if (j == 2)
                    f = !f;
            }
            else
                break;
        }
    }

    // Check for columns
    if (!f)
    {
        for (int col = 0; col < 3; ++col)
        {
            char c = a[0][col];
            for (int row = 1; row < 3; ++row)
            {
                if (a[row][col] == c)
                {
                    c = a[row][col];
                    if (row == 2)
                        f = !f;
                }
                else
                    break;
            }
        }
    }

    // Check for diagonal top-left to bottom-right
    if (!f)
    {
        char c = **a;
        char* ptr = *a;
        for (int i = 4; i <= 8; i += 4)
        {
            if (*(ptr + i) == c)
            {
                c = *(ptr + i);
                if (i == 8)
                    f = !f;
            }
            else
                break;
        }
    }

    // Check for diagonal top-right to bottom-left
    if (!f)
    {
        char c = *(a[0] + 2);
        char* ptr = *a;
        for (int i = 4; i <= 6; i += 2)
        {
            if (*(ptr + i) == c)
            {
                c = *(ptr + i);
                if (i == 6)
                    f = !f;
            }
            else
                break;
        }
    }

    return f;
}

// Display the current state of the board
void display(char a[][3])
{
    // Print each row of the board
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
}
