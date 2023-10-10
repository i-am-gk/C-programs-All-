#include <stdio.h>
main() {
    float total_sales, county_tax, state_tax, sales, total_tax;
    char month[12];
    // Loop until sentinel value is entered
    while (1) {
        // Input the total collections for the month
        printf("Enter the total collections (enter -1 to exit): $");
        scanf("%f", &total_sales);
         // Check if sentinel value was entered
        if (total_sales == -1) {
            break;
        }
	    printf("Enter the month: ");
        scanf("%s",month);
        // Calculate sales, county tax, state tax, and total tax
        sales = total_sales / 1.09;
        county_tax = 0.05 * sales;
        state_tax = 0.04 * sales;
        total_tax = county_tax + state_tax;
        // Display sales, county tax, state tax, and total tax
        printf("Sales: $%.2f\n", sales);
        printf("County tax: $%.2f\n", county_tax);
        printf("State tax: $%.2f\n", state_tax);
        printf("Total sales tax: $%.2f\n", total_tax);
    }
}
