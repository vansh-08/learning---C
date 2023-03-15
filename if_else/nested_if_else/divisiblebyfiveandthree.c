// Take positive integer input and tell if it is divisible by 5 and 3
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter value of num1: ");
    scanf("%d", &num1);
    if(num1 % 5 == 0){
        if(num1 % 3 == 0){
            printf("%d is divisible by 5 and 3", num1);
        }
        else{
            printf("%d is not divisible by 5 and 3", num1);
        }
    }
    else{
        printf("%d is not divisible by 5 and 3", num1);
    }
    return 0;
}