#include <stdio.h>
int main() {
float highest_rainfall, current_rainfall;
printf("Enter the highest rainfall ever in one season (in mm): ");
scanf("%f", &highest_rainfall);
printf("Enter the rainfall in the current year (in mm): ");
scanf("%f", &current_rainfall);
if (current_rainfall > highest_rainfall) {
highest_rainfall = current_rainfall;
printf("The current rainfall (%.2f mm) is higher than the previous highest rainfall ever.\n", current_rainfall);
printf("The highest rainfall ever has been updated to %.2f mm.\n", highest_rainfall);
    } else {
printf("The current rainfall (%.2f mm) is not higher than the highest rainfall ever (%.2f mm).\n", current_rainfall, highest_rainfall);
    }
    return 0;
}

