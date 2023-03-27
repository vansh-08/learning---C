/* Ques : Print the given pattern
   *
  ***
 *****
*******     */
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}



// /* Ques : Print the given pattern (Using Temporary Variable)
//    *
//   ***
//  *****
// *******     */
// #include<stdio.h>
// int main(){
//     int n, nst=1;
//     printf("Enter number of lines : ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=nst;k++){
//             printf("*");
//         }
//         printf("\n");
//         nst += 2;
//     }
//     return 0;
// }