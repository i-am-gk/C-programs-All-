#include <stdio.h>
int main() {
    int rows = 10;
    int num = 1;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
           
        }
        printf("\n");
    }

    return 0;
}





