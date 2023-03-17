// // Ques :Print the nth fibonacci number.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     int a = 1;
//     int b = 1;
//     int sum = 1;
//     for(int i=1;i<=n-2;i++){
//         sum = a + b;
//         a = b;
//         b = sum;
//         }
//     printf("The %d fibonacci is : %d",n,sum);
//     return 0;
// }


                //    #### IMPORTANT  #### 
// HW :Print first 'n' fibonacci numbers.
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int a = 1;
    int b = 0;
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = a + b;
        a = b;
        b = sum;
        printf("The %d fibonacci is : %d\n",i,sum);
    }
    return 0;
}