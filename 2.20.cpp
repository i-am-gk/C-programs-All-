#include <stdio.h>
int main() {
int total_seconds, hours, minutes, seconds;
// Get user input for the total time elapsed in seconds
printf("Enter the total time elapsed in seconds: ");
scanf("%d", &total_seconds);
// Calculate hours, minutes, and remaining seconds
hours = total_seconds / 3600; // 1 hour = 3600 seconds
total_seconds = total_seconds % 3600; // Remaining seconds after extracting hours
minutes = total_seconds / 60; // 1 minute = 60 seconds
seconds = total_seconds % 60; // Remaining seconds after extracting minutes
// Display the time in hours:minutes:seconds format
printf("Time elapsed: %02d:%02d:%02d\n", hours, minutes, seconds);
return 0;
}

