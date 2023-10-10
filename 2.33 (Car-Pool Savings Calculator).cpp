#include <stdio.h>

int main() {
    float totalMiles, costPerGallon, milesPerGallon, parkingFees, tolls, drivingCost;
    
    printf("Enter the total miles driven per day: ");
    scanf("%f", &totalMiles);
    
    printf("Enter the cost per gallon of gasoline: ");
    scanf("%f", &costPerGallon);
    
    printf("Enter the average miles per gallon: ");
    scanf("%f", &milesPerGallon);
    
    printf("Enter the parking fees per day: ");
    scanf("%f", &parkingFees);
    
    printf("Enter the tolls per day: ");
    scanf("%f", &tolls);
    
    drivingCost = (totalMiles / milesPerGallon) * costPerGallon + parkingFees + tolls;
    
    printf("Your daily driving cost is $%.2f\n", drivingCost);
    
    return 0;
}
