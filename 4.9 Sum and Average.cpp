#include <stdio.h>
int main(void) {
    int count, value, sum = 0;
    double average;
    printf("Enter the number of values to be entered: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        printf("Enter a value: ");
        scanf("%d", &value);
        sum += value;
    }
    average = (double) sum / count;
    printf("The sum of the %d values is %d.\n", count, sum);
    printf("The average of the %d values is %.2f.\n", count, average);
    return 0;
}
