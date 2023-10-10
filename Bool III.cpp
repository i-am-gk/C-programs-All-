#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isRaining = true;
    bool isSunny = false;
    
    printf("Is it raining? ");
    if (isRaining) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    printf("Is it sunny? ");
    if (isSunny) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    if (isRaining && !isSunny) {
        printf("Take an umbrella.\n");
    } else if (!isRaining && isSunny) {
        printf("Wear sunscreen.\n");
    } else {
        printf("Enjoy the day!\n");
    }
    
    return 0;
}

