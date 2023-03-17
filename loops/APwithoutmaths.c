// Display this AP - 4,7,10,13,16.. upto 'n' terms. (without using maths)
#include<stdio.h>
int main(){
    int n; // itni baar loop chlega
    printf("Enter value of n : ");
    scanf("%d",&n);
    int a = 4;
    for(int i=1;i<=n;i++){
        printf("%d,",a);
        a=a+3;
    }
    return 0;
}