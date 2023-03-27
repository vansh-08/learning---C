// /* n=4
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7
// 1 2 3 4 5 6 7    */
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=2*n-1;j++){
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


/* n=4
1 2 3 4 5 6 7
1 2 3 - 5 6 7
1 2 - - - 6 7
1 - - - - - 7        */
// #include<stdio.h>
// int main(){
//     int n, nsp=1;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int r=1;r<=2*n-1;r++){
//         printf("%d", r);
//     }
//     printf("\n");
//     for(int i=1;i<=n-1;i++){
//         for(int j=1;j<=n-i;j++){
//             printf("%d", j);
//         }
//         for(int k=1;k<=nsp;k++){
//             printf(" ");
//         }
//         nsp+=2;
//         for(int x=n+i;x<=2*n-1;x++){
//             printf("%d", x);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// code idea taken from vedio using temporary variable (a)
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int nst=n-1;
    int nsp=1;
    for(int i=1;i<=n;i++){
        int a=1;
        if(i==1){
            for(int r=1;r<=2*n-1;r++){
                printf("%d", r);
            }
        }
        else{
            for(int j=1;j<=nst;j++){
                printf("%d", a);
                a++;
            }
            for(int k=1;k<=nsp;k++){
                printf(" ");
                a++;
            }
            for(int l=1;l<=nst;l++){
                printf("%d", a);
                a++;
            }
            nst--;
            nsp+=2;
        }
        printf("\n");
    }
    return 0;
}