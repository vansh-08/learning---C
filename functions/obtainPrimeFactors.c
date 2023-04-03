//Homework-> Ques :A positive integer is entered through the keyboard. Write a function to obtain the prime factors of this number.
#include<stdio.h>
void prime_factors(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            printf("%d ",i);
        }
    }
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    prime_factors(n);
    return 0;
}