#include <stdio.h>
int main() {
    int A = 7;
    // Print table headers
    printf("A\tA+3\tA+6\tA+9\n");
    // Loop to print table values
    while (A <= 35) {
        printf("%d\t%d\t%d\t%d\n", A, A+3, A+6, A+9);
        A += 7;
    }
    return 0;
}
