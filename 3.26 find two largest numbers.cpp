#include <stdio.h>
int main() {
    int counter = 1;
    int largest = 0;
    int second_largest = 0;
    int number;
    while (counter <= 10) {
        printf("Enter number %d: ", counter);
        scanf("%d", &number);
        if (number > largest) {
            second_largest = largest;
            largest = number;
        } else if (number > second_largest) {
            second_largest = number;
        }

        counter++;
    }

    printf("The two largest numbers entered are: %d and %d\n", largest, second_largest);

    return 0;
}
