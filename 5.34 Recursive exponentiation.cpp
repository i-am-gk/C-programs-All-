#include <stdio.h>
int power(int base, int exponent);
int main() {
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    int result = power(base, exponent);
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
// Recursive function to calculate the power of a base raised to an exponent
int power(int base, int exponent) {
    if (exponent == 1) {
        return base; // Base case: base^1 = base
    } 
   return base * power(base, exponent - 1); // Recursive step: base^exponent = base * base^(exponent - 1)
    }



