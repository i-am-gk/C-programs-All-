#include <stdio.h>
int isPerfect(int num);
int main() {
    printf("Perfect numbers between 1 and 1000:\n");

    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            printf("%d: ", i);

            // Print factors of the perfect number
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    printf("%d ", j);
                }
            }

            printf("\n");
        }
    }

    return 0;
}

int isPerfect(int num) {
    int sum = 0;

    // Calculate the sum of proper divisors
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Check if the sum of divisors is equal to the number
    return sum == num;
}
/*A perfect number is a positive integer that is equal to the sum 
of its proper divisors (excluding itself). For example, the number 28
is a perfect number because its proper divisors are 1, 2, 4, 7, and 14,
and the sum of these divisors is 1 + 2 + 4 + 7 + 14 = 28. */

