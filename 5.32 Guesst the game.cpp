#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber() {
    // Generate a random number between 1 and 1000
    return rand() % 1000 + 1;
}

int main() {
    int randomNumber, guess;
    char playAgain;

    // Initialize the random number generator with the current time
    srand(time(NULL));

    do {
        randomNumber = generateRandomNumber();
        printf("I have a number between 1 and 1000.\n");
        printf("Can you guess my number?\n");
        printf("Please type your first guess: ");

        do {
            scanf("%d", &guess);

            if (guess == randomNumber) {
                printf("Excellent! You guessed the number!\n");
                break;
            } else if (guess < randomNumber) {
                printf("Too low. Try again.\n");
            } else {
                printf("Too high. Try again.\n");
            }

            printf("Please type your next guess: ");
        } while (1);

        printf("Would you like to play again (y or n)? ");
        scanf(" %c", &playAgain);
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}

