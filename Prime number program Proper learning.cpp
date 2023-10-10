#include <stdio.h>
int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    // Check if the number is divisible by any number from 2 to n/2
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            printf("%d is not a prime number\n", n);
            return 0;
        }
    }
    if (n == 1 || n==0) {
        printf("%d is not a prime number\n",n);
    }
    else {
        printf("%d is a prime number\n", n);
    }

    return 0;
}
