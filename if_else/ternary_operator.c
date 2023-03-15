#include <stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    // ternary operator
    // exp1 ? exp2 : exp3
    n % 2 == 0 ? printf("Even number") : printf("Odd number");

// predict the output
    // int x = 10, y = 20;
    // if(x == y);
    //   printf("\n%d %d", x, y);    
    return 0;
}