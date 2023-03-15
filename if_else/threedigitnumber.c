// Take positive integer input and tell if it is a three digit number or not.
#include<stdio.h>
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);
    if(n>99 && n<1000){
        printf("it is a three digit number");
    }
    else{
        printf("It is not a three digit number");
    } 

// Take positive integer input ant tell if it is divilible by 5 and 3.
    /*if(n % 5 == 0 && n % 3 == 0){
        printf("It is divisible by 5 and 3");
    }
    else{
        printf("It is not divisible by 5 and 3");
    } */
    return 0;
}
