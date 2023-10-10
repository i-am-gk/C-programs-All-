#include <stdio.h>
int gcd(int a, int b);
int lcm(int num1, int num2);
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = lcm(num1, num2);
    printf("The LCM of %d and %d is: %d\n", num1, num2, result);
    return 0;
}
int gcd(int a, int b) {
    // Calculate the greatest common divisor (GCD) using Euclidean algorithm
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int num1, int num2) {
    // Calculate the LCM using the formula: LCM = (num1 * num2) / GCD(num1, num2)
    int gcdValue = gcd(num1, num2);
    return (num1 * num2) / gcdValue;
}

