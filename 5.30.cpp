#include <stdio.h>
int toQualityPoints(double average) {
    if (average >= 90 && average <= 100) {
        return 4;
    } else if (average >= 80 && average < 90) {
        return 3;
    } else if (average >= 70 && average < 80) {
        return 2;
    } else if (average >= 60 && average < 70) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    double average;
    printf("Enter the student's average: ");
    scanf("%lf", &average);
    int qualityPoints = toQualityPoints(average);
    printf("Quality Points: %d\n", qualityPoints);

    return 0;
}

