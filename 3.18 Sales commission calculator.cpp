#include <stdio.h>
int main() {
    const float BASE_SALARY = 200.0;
    const float COMMISSION_RATE = 0.09;
    float sales, earnings;
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f", &sales);
    while (sales != -1) {
        // Calculate earnings
        earnings = BASE_SALARY + (sales * COMMISSION_RATE);
        // Display the earnings for the salesperson
        printf("Salary is: $%.2f\n", earnings);
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
    }
    return 0;
}

