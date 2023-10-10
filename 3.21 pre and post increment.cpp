#include <stdio.h>
int main() {
    int x = 5;
    int preincrement_result, postincrement_result;
    // Preincrement: Increment x before its value is used in the expression
    preincrement_result = ++x;
    printf("Preincrement result: %d\n", preincrement_result); // Output: 6
    printf("Updated x after preincrement: %d\n", x); // Output: 6
    // Reset x to its initial value
    x = 5;
    // Postincrement: Increment x after its value is used in the expression
    postincrement_result = x++;
    printf("Postincrement result: %d\n", postincrement_result); // Output: 5
    printf("Updated x after postincrement: %d\n", x); // Output: 6
    return 0;
}

