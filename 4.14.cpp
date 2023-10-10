#include <stdio.h>

int main(void) {
    int n, factorial;

    printf(" n | n!\n");
    printf("---+------\n");

    for (n = 1; n <= 5; n++) {
        factorial = 1;

        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        printf("%2d | %4d\n", n, factorial);
    }

    return 0;
}
/* The difficulty that might prevent us from calculating the factorial of 20 is the fact that the value of n!
 grows very quickly as n increases. The factorial of 20, for example, 
 is equal to 2432902008176640000, which is a very large number that is difficult to represent using standard integer data types.
  The program may encounter overflow errors or produce incorrect results if it attempts to calculate factorials of very large numbers.
 To calculate factorials of very large numbers,
 we would need to use specialized libraries or algorithms that can handle arbitrary-precision arithmetic.*/
