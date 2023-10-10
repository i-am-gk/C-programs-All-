#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter an integer (5 digits or fewer): ");
    scanf("%d", &num);
    while (num > 0) {
        int digit = num % 10;
        if (digit == 9) {
            count++;
        }
        num /= 10;
    }
    printf("The number of 9s in the integer is: %d\n", count);
    return 0;
}







