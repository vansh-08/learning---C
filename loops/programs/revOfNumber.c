                // HW : WAP to print reverse of a given number.
// #include<stdio.h>
// int main(){
//     int rev=0,n,l;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     while(n>0){
//         l=n%10;
//         rev=(rev * 10) +l;
//         n=n/10;
//     }
//     printf("Reverse of given number is : %d",rev);
//     return 0;
// }

//      OR

                // HW : WAP to print sum of all the even digits of a given number.
// #include<stdio.h>
// int main(){
//     int r=0,n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     while(n>0){
//         r = r*10;
//         r = r + (n%10);
//         n = n/10;
//     }
//     printf("Reverse given number is : %d",r);
//     return 0;
// }

  // HW : WAP to print sum of given number and its reverse.
#include<stdio.h>
int main(){
    int r=0,n,l,g;
    printf("Enter a number : ");
    scanf("%d",&n);
    g = n;
    while(n>0){
        l=n%10;
        r=(r*10)+l;
        n=n/10;
    }
    printf("Sum of given number and its reverse is : %d",r + g);
    return 0;
}