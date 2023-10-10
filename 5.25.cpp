#include <stdio.h>
float findLargest(float num1, float num2, float num3, float num4) {
    float largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    if (num4 > largest) {
        largest = num4;
    }

    return largest;
}

int main() {
    float a, b, c, d;
    printf("Enter four floating-point numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float result = findLargest(a, b, c, d);
    printf("The largest number is: %f\n", result);

    return 0;
}

