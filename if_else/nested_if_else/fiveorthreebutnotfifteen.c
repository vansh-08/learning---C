// Take positive integer input and tell if it is divisible by 5 or 3
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    // if(n % 5 == 0 || n % 3 == 0){
    //     if(n % 15 != 0){
    //         printf("It is divisible by 5 or 3 but not 15");
    //     }
    //     else{
    //         printf("The number is divisible by 15");
    //     }
    // }
    if((n%5==0 || n%3==0) && n%15!=0){
        printf("It is divisible by 5 or 3 but not 15");
    }
    else{
        printf("The number is not matching the required condition");
    }
    return 0;
}      