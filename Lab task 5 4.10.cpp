#include <stdio.h>

// Function to convert Celsius to Fahrenheit
float celsius_to_fahrenheit(float celsius) {
    float fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}

// Function to display temperature table
void display_temperature_table(float start_celsius, float end_celsius) {
    printf("Celsius\tFahrenheit\n");
    printf("-------\t----------\n");
    for (float celsius = start_celsius; celsius <= end_celsius; celsius++) {
        float fahrenheit = celsius_to_fahrenheit(celsius);
        printf("%.2f\t%.2f\n", celsius, fahrenheit);
    }
}

int main() {
    float start_celsius = 30;
    float end_celsius = 50;
    
    // Call the display_temperature_table function
    display_temperature_table(start_celsius, end_celsius);
    
    return 0;
}
