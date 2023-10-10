#include <stdio.h>
int main() {
    int side;
    printf("Enter the square side: ");
    scanf("%d", &side);
    // Loop through rows of the square
    for (int i = 0; i < side; i++) {
        // Loop through columns of the square
        for (int j = 0; j < side; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

