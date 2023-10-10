#include <stdio.h>
int main() {
    int num;
    int factorial = 1;
    // Get user input for a nonnegative integer
    printf("Enter a nonnegative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Compute the factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        // Display the factorial
        printf("Factorial of %d is %d\n", num, factorial);
    }
    return 0;
}

