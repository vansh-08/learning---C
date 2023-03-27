// // **Ques : Print the given Pattern
// /* For n = 7
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *        */
// #include<stdio.h>
// int main(){
//     int n, n1, n2;
//     printf("Enter number of lines : ");
//     scanf("%d", &n);
//     n1=n/2 + 1;
//     n2=n-n1;
//     for(int i=1;i<=n1;i++){
//         for(int j=1;j<=n1-i;j++){
//             printf(" ");
//         }
//         for(int k=1;k<=2*i-1;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//         for(int r=1;r<=n2;r++){
//             for(int l=1;l<=r;l++){
//                 printf(" ");
//             }
//             for(int m=1;m<=(n2-r+1)*2-1;m++){
//                 printf("*");
//             }
//             printf("\n");
//         }
//     return 0;
// }



            // USING NST AND NSP(EXTRA TEMPORARY VARIABLES)(WITHOUT MATHEMATICS from vedio)
// **Ques : Print the given Pattern
/* For n = 7
   *
  ***
 *****
*******
 *****
  ***
   *        */
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int nsp = n/2;
    int nst = 1;
    int ml = n/2+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){ // spaces
        printf(" ");
        }
        for(int k=1;k<=nst;k++){ // stars
        printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}

