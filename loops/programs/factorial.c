// Print the factorial of a given number 'n'.
#include<stdio.h>
int main(){
    int n,f=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f = f*i;
    }
    printf("factorial : %d",f);
    return 0;
}


// // Print the factorials of first 'n' numbers
// #include<stdio.h>
// int main(){
//     int n,f=1;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         f = f*i;
//         printf("The factorial of %d is : %d\n",i,f);
//     }
//     return 0;
// }