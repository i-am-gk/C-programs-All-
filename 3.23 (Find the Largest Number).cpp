#include <stdio.h>
int main() {
    int counter = 1;
    int number, largest = 0;
    while (counter <= 10) {
        printf("Enter non-negative number #%d: ", counter);
        scanf("%d", &number);
        if (number >= 0 && number > largest) {
            largest = number;
        }
        counter++;
    }
    printf("The largest number entered is: %d\n", largest);
    return 0;
}
/* Pseudo Code
Initialize counter to 1 and largest to 0.
While counter is less than or equal to 10, do the following:
a. Prompt the user to input a non-negative number.
b. Read the input number into the variable number.
c. If number is greater than largest, set largest equal to number.
d. Increment counter by 1.
Print the largest number found.

*/
