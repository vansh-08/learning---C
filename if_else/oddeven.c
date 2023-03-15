#include<stdio.h>
int main(){
// Input a positive integer and display if it is odd or even.
    // int n;
    // printf("Enter a number : ");
    // scanf("%d", &n);
    // if(n%2==0){ 
    //     printf("Even number");
    // }
    // else{
    //     printf("Odd number");
    // }

// Take a positive integer input and tell if it is divisible by 5 or not.
    int in;
    printf("Enter a integer: ");
    scanf("%d", &in);
    if(in % 5 == 0){
        printf("%d is divisible by 5", in);
    }
    else{
        printf("%d is not divisible by 5", in);
    }
    return 0;
}