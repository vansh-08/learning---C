// Ques WAP to count digits of a given number.(n=19325)
// #include<stdio.h>
// int main(){
//     int n=0,u;
//     printf("Enter number : ");
//     scanf("%d",&u);
//     for(int i=u;i>0;i=i/10){
//         n = n + 1;
//     }
//     printf("%d",n);
//     return 0;
// }

#include<stdio.h>
int main(){
    int count=0,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0){  // OR (n != 0)
        n=n/10;
        count++;
    }
    printf("The number of digits are : %d",count);
    return 0;
}