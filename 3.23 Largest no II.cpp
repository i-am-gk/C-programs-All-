#include <stdio.h>
int main() {
    int counter = 1;
    int number;
    int largest;
    // Get the first number from the user
    printf("Enter number %d: ", counter);
    scanf("%d", &number);
    // Assume the first number is the largest initially
    largest = number;
    while (counter < 10) {
        // Get the next number from the user
        printf("Enter number %d: ", counter + 1);
        scanf("%d", &number);
        // Check if the new number is larger than the current largest
        if (number > largest) {
            largest = number; // Update the largest number
        }

        counter++; // Increment the counter
    }
    // Display the largest number
    printf("The largest number is: %d\n", largest);
    return 0;
}

