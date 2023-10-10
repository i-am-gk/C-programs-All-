#include <stdio.h>

float calculateCharges(int hours) {
    float charges = 0.0;
    
    if (hours <= 8) {
        charges = 25.0;
    } else if (hours > 8 && hours <= 24) {
        charges = 25.0 + ((hours - 8) * 5.0);
    } else if (hours > 24 && hours <= 72) {
        int days = hours / 24;
        int remainingHours = hours % 24;
        charges = days * 50.0;
        if (remainingHours <= 8) {
            charges += 25.0;
        } else {
            charges += 25.0 + ((remainingHours - 8) * 5.0);
        }
    }
    
    charges += (hours * 0.5);
    return charges;
}

int main() {
    int hours[3];
    float charges[3];
    float total = 0.0;
    
    printf("Enter hours for each of the 3 customers who rented cars yesterday:\n");
    for (int i = 0; i < 3; i++) {
        printf("Customer %d: ", i + 1);
        scanf("%d", &hours[i]);
        charges[i] = calculateCharges(hours[i]);
        total += charges[i];
    }
    
    printf("\nCar\tHours\tCharge\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\t%d\t%.2f\n", i + 1, hours[i], charges[i]);
    }
    printf("TOTAL\t%d\t%.2f\n", hours[0] + hours[1] + hours[2], total);
    
    return 0;
}
