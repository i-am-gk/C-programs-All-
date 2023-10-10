#include <stdio.h>

int main() {
    int day, month, year;
    
    printf("Enter the date (in the format dd-mm-yyyy): ");
    scanf("%d-%d-%d", &day, &month, &year);
    
    // Validate month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (day > 31) {
                printf("Invalid date!\n");
                return 0;
            }
            break;
        case 4: case 6: case 9: case 11:
            if (day > 30) {
                printf("Invalid date!\n");
                return 0;
            }
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                if (day > 29) {
                    printf("Invalid date!\n");
                    return 0;
                }
            } else {
                if (day > 28) {
                    printf("Invalid date!\n");
                    return 0;
                }
            }
            break;
        default:
            printf("Invalid month!\n");
            return 0;
    }
    
    printf("Date: %02d-%02d-%d\n", day, month, year);
    
    return 0;
}

