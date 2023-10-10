#include <stdio.h>

// Function to check if a number is prime
int is_prime(int n) {
    // Base case: 0 and 1 are not prime numbers
    if (n <= 1) {
        return 0;
    }
    
    // Check divisibility from 2 to the square root of n
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; // If divisible, not a prime number
        }
    }
    
    return 1; // If not divisible, it's a prime number
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Call the is_prime function and print the result
    if (is_prime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    return 0;
}
