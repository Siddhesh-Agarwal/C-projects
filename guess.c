#include <stdio.h>
#include <stdlib.h>

void main() {
    /*
    The game works as follows:
    - A random number is generated (0 <= n < 100)
    - The user is asked to guess the number
    - If guess is wrong, the user will be told whether the number is greater or smaller.
    - If the guess is correct, the user will win the game.
    - The user has 7 tries to guess the number.
    - If the user is unable to guess the number in 7 tries, the user will lose the game.
    */
    const int NUM = rand() % 100; // random number
    int TRIES = 7;                // number of tries to guess the number
    while (TRIES > 0) {
        int x;
        printf("Enter your guessed number: ");
        scanf("%d", &x);
        if (x > NUM) {
            printf("Guess lower\n");
            printf("Tries left: %d tries\n\n", TRIES);
        } else if (x < NUM) {
            printf("Guess higher\n");
            printf("Tries left: %d tries\n\n", TRIES);
        } else {
            printf("You won!!!");
            break;
        } 
        TRIES--;
    }
    if (TRIES == 0) {
        printf("You lost. the number was %d", NUM);
    }
}