#include <stdio.h>
int main() {
    float weight, height, bmi;
    // Get user input for weight in kilograms and height in meters
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    // Calculate BMI using the formula: weight (kg) / (height * height) (m^2)
    bmi = weight / (height * height);
    // Display the calculated BMI
    printf("Your Body Mass Index (BMI) is: %.2f\n", bmi);
    // Display BMI category based on the provided information
    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n");
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");
    // Determine and display the BMI category
    if (bmi < 18.5) {
        printf("You are Underweight.\n");
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        printf("You are Normal.\n");
    } else if (bmi >= 25 && bmi <= 29.9) {
        printf("You are Overweight.\n");
    } else {
        printf("You are Obese.\n");
    }
    return 0;
}

