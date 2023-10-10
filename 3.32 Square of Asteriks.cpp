#include <stdio.h>
int main() {
    int side, i, j;
    // Get the side length from the user
    printf("Enter the side length of the square (1-20): ");
    scanf("%d", &side);
    // Print the square
    for (i = 0; i < side; i++) {
        for (j = 0; j < side; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}






