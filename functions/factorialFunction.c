// print the factorials of first 'n' numbers
#include<stdio.h>
int factorial(int x){
    int fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int t = factorial(n);
    printf("Factorial of %d is : %d",n,t);
    return 0;
}