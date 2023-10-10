#include <stdio.h>

int main(void) {
    int n, sum = 0, sum_sq = 0, sum_cube = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i;
        sum_sq += i * i;
        sum_cube += i * i * i;
    }

    printf("The sum of all natural numbers from 1 to %d is %d.\n", n, sum);
    printf("The sum of their squares is %d.\n", sum_sq);
    printf("The sum of their cubes is %d.\n", sum_cube);

    return 0;
}
