/* Print the given Pattern   (Self Practice without video help)
    *
    *
* * * * *
    *
    *           */

// #include<stdio.h>
// int main(){
//     int n,nstr;
//     printf("Enter an odd number : ");
//     scanf("%d",&n);
//     nstr=n/2;
//     for(int i=1;i<=n;i++){
//         if(i==nstr+1){
//             for(int k=1;k<=n;k++){
//                 printf("* ");
//             }
//         }
//         else{
//             for(int l=1;l<=nstr*2;l++){
//                 printf("#");
//             }
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }




/* Print the given Pattern ( from vedio)
    *
    *
* * * * *
    *
    *           */
#include<stdio.h>
int main(){
    int n, rn;
    printf("Enter a number : ");
    scanf("%d", &n);
    rn = n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==rn||j==rn) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
