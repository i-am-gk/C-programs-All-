#include <stdio.h>

int main() {
    int size = 8;

    // Loop through rows of the checkerboard
    for (int i = 0; i < size; i++) {
        // Loop through columns of the checkerboard
        for (int j = 0; j < size; j++) {
            // If the sum of row and column indices is even, print '* ', otherwise print '  '
            if ((i + j) % 2 == 0) {
                printf("%s", "*  ");
            } else {
                printf("%s", "   ");
            }
        }
        puts(""); // outputs a newline after each row is printed
    }

    return 0;
}

