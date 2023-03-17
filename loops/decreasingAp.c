// // Display this AP - 100 97 94.. upto all terms which are positive
// #include<stdio.h>
// int main(){
//     //int n;
//     //printf("Enter value of n : ");
//     //scanf("%d",&n);
//     int a = 100;
//     for(int i=1;a>0;i++){
//         printf("%d ",a);
//         a=a-3;
//     }
//     return 0;
// }

// Display this GP - 100 50 25.. upto 'n' terms
#include<stdio.h>
int main(){
    int n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    float a = 100;
    for(int i=1;i<=n;i++){
        printf("%.3f ",a);
        a=a/2;
    }
    return 0;
}