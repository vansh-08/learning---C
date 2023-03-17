// WAP(Write a program) to check if a number is prime or not.
#include<stdio.h>
int main(){
    int n,a=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(n==1) printf("1 is neither prime nor composite");
    else if(a==0) printf("the given number is prime\n");
    else printf("the given number is composite\n");
    return 0;
}