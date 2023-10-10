#include <stdio.h>
int main() {
    const float STATE_TAX_RATE = 0.04;
    const float COUNTY_TAX_RATE = 0.05;
    float total_collections, sales, county_sales_tax;
	float state_sales_tax, total_sales_tax;
    char month[20];
    printf("Enter total amount collected (-1 to quit): ");
    scanf("%f", &total_collections);
    // Exit the program if the user enters -1
    if (total_collections == -1) {
        return 0;
    }
    printf("Enter name of month: ");
    scanf("%s", month);
    // Calculate sales and sales taxes
    sales = total_collections / (1 + STATE_TAX_RATE + COUNTY_TAX_RATE);
    county_sales_tax = sales * COUNTY_TAX_RATE;
    state_sales_tax = sales * STATE_TAX_RATE;
    total_sales_tax = county_sales_tax + state_sales_tax;
    // Display the result
    printf("Total Collections: $ %.2f\n", total_collections);
    printf("Sales: $ %.2f\n", sales);
    printf("County Sales Tax: $ %.2f\n", county_sales_tax);
    printf("State Sales Tax: $ %.2f\n", state_sales_tax);
    printf("Total Sales Tax Collected: $ %.2f\n", total_sales_tax);

    return 0;
}

