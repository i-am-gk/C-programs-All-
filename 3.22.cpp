#include <stdio.h>
int main() {
    int num, is_prime = 1;
    // Get user input for an integer
    printf("Enter an integer: ");
    scanf("%d", &num);
    // Check if the number is less than or equal to 1
    if (num <= 1) {
        is_prime = 0; // If the number is less than or equal to 1, it's not prime.
    } else {
        // Check for divisors starting from 2 up to num / 2
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                is_prime = 0; // If a divisor is found, the number is not prime.
                break; // No need to continue checking, break out of the loop.
            }
        }
    }
    // Check the value of is_prime to determine if the number is prime or not.
    if (is_prime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}

