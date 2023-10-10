#include <stdio.h>
// for this we have to satisfy pythorean theorem
int main() {
    int side1, side2, side3;
    int a_squared, b_squared, c_squared;
    // Get user input for the three nonzero integers
    printf("Enter the first side: ");
    scanf("%d", &side1);
    printf("Enter the second side: ");
    scanf("%d", &side2);
    printf("Enter the third side: ");
    scanf("%d", &side3);
    // Calculate the squares of the sides
    a_squared = side1 * side1;
    b_squared = side2 * side2;
    c_squared = side3 * side3;
    // Check if the sides satisfy the Pythagorean theorem
    if (a_squared + b_squared == c_squared ||
        a_squared + c_squared == b_squared ||
        b_squared + c_squared == a_squared) {
        printf("The sides could be the sides of a right triangle.\n");
    } else {
        printf("The sides do not form a right triangle.\n");
    }
    return 0;
}

