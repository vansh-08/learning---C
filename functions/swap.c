#include<stdio.h>
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    int b;
    printf("Enter b : ");
    scanf("%d", &b);
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}

// Ques: Swap 2 numbers without using a third variable
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter a : ");
//     scanf("%d", &a);
//     int b;
//     printf("Enter b : ");
//     scanf("%d", &b);
//     a = a + b;
//     b = a - b;
//     a = a - b;
//     printf("The value of a is %d\n",a);
//     printf("The value of b is %d", b);
//     return 0;
// }