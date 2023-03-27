// /* Ques : Print the given Pattern (My approach)
//    *
//   **
//  ***
// ****    */
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=(n-i)) printf(" ");
//             else printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


/* Ques : Print the given Pattern (from vedio lecture)
   *
  **
 ***
****    */
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of lines : ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }


/* Again practice in homework question
---*
--**
-***
****    */

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int nst=1;
    int nsp=n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        nst++;
        nsp--;
        printf("\n");
    }
    return 0;
}