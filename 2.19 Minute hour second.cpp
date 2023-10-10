#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;
    
    printf("Enter the total time elapsed in seconds: ");
    scanf("%d", &totalSeconds);
    
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    
    printf("Time elapsed: %d:%02d:%02d\n", hours, minutes, seconds);
    
    return 0;
}
