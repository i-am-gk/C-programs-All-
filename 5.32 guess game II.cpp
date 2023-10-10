#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char playAgain;
    srand(time(NULL)); // Initialize random seed

    do {
        // Generate a random number between 1 and 1000
        int numberToGuess = rand() % 1000 + 1;
        int guess, attempts = 0;

        printf("I have selected a number between 1 and 1000. Guess the number!\n");

        do {
            printf("Enter your guess: ");
            scanf("%d", &guess);

            attempts++;

            if (guess > numberToGuess) {
                printf("Too high! Try again.\n");
            } else if (guess < numberToGuess) {
                printf("Too low! Try again.\n");
            } else {
                printf("Congratulations! You guessed the number in %d attempts!\n", attempts);
            }
        } while (guess != numberToGuess);

        printf("Would you like to play again? (yes/no): ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Thank you for playing the game!\n");

    return 0;
}

