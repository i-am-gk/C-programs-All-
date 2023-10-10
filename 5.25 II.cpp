#include <stdio.h>
float findLargest(float num1, float num2, float num3, float num4);
int main(void) {
    float num1, num2, num3, num4;
    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &num1, &num2, &num3, &num4);
    float largest = findLargest(num1, num2, num3, num4);
    printf("The largest number is: %.2f\n", largest);

    return 0;
}
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

