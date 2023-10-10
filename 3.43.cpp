#include <stdio.h>
int main() {
    int side1, side2, side3;
    // Get user input for the three nonzero integer values
    printf("Enter the first side: ");
    scanf("%d", &side1);
    printf("Enter the second side: ");
    scanf("%d", &side2);
    printf("Enter the third side: ");
    scanf("%d", &side3);
    // Check if the values satisfy the triangle inequality theorem
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("The values represent the sides of a triangle.\n");
    } else {
        printf("The values do not represent the sides of a triangle.\n");
    }
    return 0;
}
/*To determine whether three nonzero integer values can represent
 the sides of a triangle, we need to check if they satisfy the triangle 
 inequality theorem. According to the triangle inequality theorem, 
 the sum of the lengths of any two sides of a triangle must be greater
  than the length of the third side. */
