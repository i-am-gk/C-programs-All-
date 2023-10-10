#include <stdio.h>

// Function to calculate y for the given equation
float calculate_y(float a, float b, float x) {
    float y = a * x * x * x - b * x * x - 6;
    return y;
}

int main() {
    float a, b, x;
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of x: ");
    scanf("%f", &x);
    
    // Call the calculate_y function and print the result
    float y = calculate_y(a, b, x);
    printf("The value of y is: %.2f\n", y);
    
    return 0;
}
