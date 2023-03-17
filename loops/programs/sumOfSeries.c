        // Print the sum of this series : 
        // 1 - 2 + 3 - 4 + 5 - 6.. upto 'n'.(terms)
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         if(i%2!=0) sum = sum + i;
//         else sum = sum - i;
//     }
//     printf("sum : %d",sum);
//     return 0;
// }

        // OR
#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        if(i%2!=0) sum = (-n/2) + n; 
        else sum = -n/2;  
    }
    printf("sum : %d",sum);
    return 0;
}