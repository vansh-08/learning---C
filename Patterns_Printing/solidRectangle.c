#include<stdio.h>
int main(){
    int n,m;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    printf("Enter number of columns : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++){
        for(int i=1;i<=m;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

        // solid square 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of rows : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int i=1;i<=n;i++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }