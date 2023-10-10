#include <stdio.h>
int main() {
    int binary, decimal = 0, base = 1, remainder;
    printf("Enter a binary integer: ");
    scanf("%d", &binary);
    while (binary > 0) {
        remainder = binary % 10;
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }
    printf("The decimal equivalent is %d\n", decimal);
    return 0;
}
