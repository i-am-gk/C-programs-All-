#include <stdio.h>
#include<math.h>
// Function to find the sum of digits of an integer
int sumOfDigits(int number) {
    int sum = 0;
    // Take the absolute value of the number to handle negative integers
    number = abs(number);
    while (number > 0) {
        int digit = number % 10; // Extract the rightmost digit
        sum += digit; // Add the digit to the sum
        number /= 10; // Remove the rightmost digit from the number
    }

    return sum;
}

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    int result = sumOfDigits(number);
    printf("Sum of digits: %d\n", result);

    return 0;
}

