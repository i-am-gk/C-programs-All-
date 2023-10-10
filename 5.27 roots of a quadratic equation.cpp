#include <stdio.h>
#include <math.h>
// Function to find the roots of a quadratic equation
void findRoots(double a, double b, double c);
int main() {
    double a, b, c;
    printf("Enter the coefficients of the quadratic equation (ax^2 + bx + c): ");
    scanf("%lf %lf %lf", &a, &b, &c);
	findRoots(a, b, c);
    return 0;
}
void findRoots(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant > 0) {
        // Two real and distinct roots
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two real and distinct roots:\n");
        printf("Root 1: %lf\n", root1);
        printf("Root 2: %lf\n", root2);
    } else if (discriminant == 0) {
        // One real root (both roots are the same)
        double root = -b / (2 * a);
        printf("One real root:\n");
        printf("Root: %lf\n", root);
    } else {
        // Imaginary roots (non-real roots)
        printf("Imaginary roots: No real roots exist.\n");
    }
}


