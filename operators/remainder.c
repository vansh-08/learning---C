#include <stdio.h>
int main(){
    int r, a, b, q;
    printf("Enter Dividend: ");
    scanf("%d", &a);
    printf("Enter Divisor: ");
    scanf("%d", &b);
    q = a / b;          // Or Use Modulo Operator (r = a % b)
    r = a - (b * q);
    printf("Remainder when %d is divided by %d is: %d", a, b, r);
    return 0;
}