#include <stdio.h>
int main() {
    int celsius;
    double fahrenheit;
    printf("Celsius\t Fahrenheit\n");
    printf("-------------------\n");
    for (celsius = 30; celsius <= 50; celsius++) {
        // Convert Celsius to Fahrenheit using the conversion formula
        fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        // Print the temperatures in both Celsius and Fahrenheit
        printf("%d C\t %.2lf F\n", celsius, fahrenheit);
    }

    return 0;
}

