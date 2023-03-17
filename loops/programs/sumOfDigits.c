// WAP to print sum of digits of a given number.
// #include<stdio.h>
// int main(){
//     int sum=0,n,l;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     while(n>0){  // OR (n != 0)
//         l = n % 10;
//         sum = sum + l;
//         n=n/10;
//     }
//     printf("The sum of digits is : %d",sum);
//     return 0;
// }

#include<stdio.h>
int main(){
    int sum=0,n,l;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        l=n%10;
        sum=sum+l;
        n=n/10;
    }
    printf("Sum of digits of given number is : %d",sum);
    return 0;
}