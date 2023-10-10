#include <stdio.h>

int main() {
    int side1, side2, hypotenuse;
    int max_side = 500;

    printf("Pythagorean triples with sides no larger than 500:\n");

    for (side1 = 1; side1 <= max_side; side1++) {
        for (side2 = side1; side2 <= max_side; side2++) {
            for (hypotenuse = side2; hypotenuse <= max_side; hypotenuse++) {
                // Check if the sides satisfy the Pythagorean theorem
                if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse) {
                    printf("(%d, %d, %d)\n", side1, side2, hypotenuse);
                }
            }
        }
    }

    return 0;
}

