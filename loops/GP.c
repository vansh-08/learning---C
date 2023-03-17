// Display this GP - 1 2 4 8 16 32.. upto 'n' terms. (without using maths)
#include<stdio.h>
int main(){
    int n; // itni baar loop chlega
    printf("Enter value of n : ");
    scanf("%d",&n);
    int a = 1;
    for(int i=1;i<=n;i++){
        printf("%d,",a);
        a=a*2;
    }
    return 0;
}

// // Display this GP - 3 12 48.. upto 'n' terms. (without using maths)
// #include<stdio.h>
// int main(){
//     int n; // itni baar loop chlega
//     printf("Enter value of n : ");
//     scanf("%d",&n);
//     int a = 3;
//     for(int i=1;i<=n;i++){
//         printf("%d,",a);
//         a=a*4;
//     }
//     return 0;
// }