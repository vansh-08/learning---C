// // Display this AP - 1,3,5,7,9.. upto 'n' terms.
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter value of n : ");
//     scanf("%d",&n);
//     for(int i=1;i<=2*n-1;i=i+2){
//         printf("%d,",i);
//     }
//     return 0;
// }

// Display this AP - 4,7,10,13,16.. upto 'n' terms.
#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    for(int i=4;i<=3*n+1;i=i+3){
        printf("%d,",i);
    }
    return 0;
}