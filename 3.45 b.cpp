#include <stdio.h>
int main() {
    int num_terms;
    double e = 1.0;
    double factorial_term = 1.0;
    printf("Enter the number of terms to estimate e: ");
    scanf("%d", &num_terms);
    if (num_terms <= 0) {
        printf("Number of terms should be a positive integer.\n");
    } else {
        for (int i = 1; i < num_terms; i++) {
            // Calculate the factorial term for the next iteration
            factorial_term *= i;

            // Add the next term to the estimate of e
            e += 1.0 / factorial_term;
        }

        // Display the estimate of e
        printf("The estimate of e using %d terms is: %lf\n", num_terms, e);
    }
    return 0;
}

