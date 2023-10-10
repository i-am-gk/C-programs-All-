#include <stdio.h>
int power(int base, int exponent);
int main() {
    int base, exponent;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    int result = power(base, exponent);
    printf("%d raised to the power of %d is: %d\n", base, exponent, result);
    return 0;
}
int power(int base, int exponent) {
    // Base case: When the exponent is 0, the result is 1
    if (exponent == 0) {
        return 1;
    // Recursive case: Multiply the base with the result of power(base, exponent - 1)
    return base * power(base, exponent - 1);
}
// first let base =2 and exponent =3
//step 1// 2 x power(2,3)      now 2 x 8=16
// step2// 2 x power (2,2)     now 2 x 4=8
// step 3  2 x power(2,1)      now 2 x 2=4
// step 4   2 x power(2,0)      now 2 x1=2
// we know base case 2 power 0 =1 now go from down o up
// 2,0 =1 
// phir jo (2,0) result hai usko step 3 mein
// 2 x 2=4 aysay hi results ko upar layjaayngay
