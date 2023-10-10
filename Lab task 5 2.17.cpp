#include <stdio.h>

// Function to calculate final velocity (v)
float calculate_final_velocity(float u, float a, float t) {
    float v = u + (a * t);
    return v;
}

// Function to calculate distance traversed (s)
float calculate_distance_traversed(float u, float a, float t) {
    float s = u * t + 0.5 * a * t * t;
    return s;
}

int main() {
    float u, a, t;
    printf("Enter the initial velocity (u): ");
    scanf("%f", &u);
    printf("Enter the acceleration (a): ");
    scanf("%f", &a);
    printf("Enter the time elapsed (t): ");
    scanf("%f", &t);
    
    // Call the calculate_final_velocity function and print the result
    float v = calculate_final_velocity(u, a, t);
    printf("The final velocity (v) is: %.2f\n", v);
    
    // Call the calculate_distance_traversed function and print the result
    float s = calculate_distance_traversed(u, a, t);
    printf("The distance traversed (s) is: %.2f\n", s);
    
    return 0;
}
