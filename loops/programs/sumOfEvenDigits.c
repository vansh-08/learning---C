                // HW : WAP to print sum of all the even digits of a given number.
#include<stdio.h>
int main(){
    int sum=0,n,l;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){
        l=n%10;
        if(l%2==0){
            sum=sum+l;
        }
        n=n/10;
    }
    printf("Sum of even digits of given number is : %d",sum);
    return 0;
}

                // HW : WAP to print sum of all the odd digits of a given number.
// #include<stdio.h>
// int main(){
//     int n, l, sum = 0;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     while(n > 0){
//         l = n % 10;
//         if(l % 2 != 0){
//             sum = sum + l;
//         }
//         n = n / 10;
//     }
//     printf("Sum of even digits of a given number is : %d", sum);
//     return 0;
// }