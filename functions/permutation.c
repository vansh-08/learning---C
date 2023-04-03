// Homework: Write function to calculate permutation(npr)  npr = n!/(n-r!)
#include<stdio.h>
int factorial(int x){
    int 
     fact = 1;
    for(int i=2;i<=x;i++){
        fact = fact*i;
    }
    return fact;
}
int permutation(int a, int b){
    int apb;
    apb = factorial(a)/(factorial(a-b));
    return apb;
}
int main(){
    int n, r;
    printf("Enter value of n : ");
    scanf("%d", &n);
    printf("Enter value of r : ");
    scanf("%d", &r);
    int npr = permutation(n, r);
    printf("%d", npr);
    return 0;
}