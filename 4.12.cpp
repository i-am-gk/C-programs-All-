#include <stdio.h>

int main(void) {
    int is_prime;

    printf("List of prime numbers from 1 to 100:\n");

    for (int i = 2; i <= 100; i++) {
        is_prime = 1;

        for (int j = 2; j <= i/2; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}




