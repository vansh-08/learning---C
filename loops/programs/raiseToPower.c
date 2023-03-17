// Ques :Two numbers are entered through a keyboard. Write a program to find the value of one number raised to the power of another.
#include<stdio.h>
int main(){
    int a,b,p=1;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    int c=a;
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    printf("%d raised to power %d is : %d", c, b, p);
    return 0;
}