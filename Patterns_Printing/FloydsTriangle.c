// /* Ques: Print the given Pattern -> 
// 1
// 2 3
// 4 5 6
// 7 8 9 10       */
// #include<stdio.h>
// int main(){
//     int n, k=1;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             printf("%d ", k);
//             k++;
//         }
//         printf("\n");
//     }
//     return 0;
// }



/* HW: Print the given Pattern -> 
1
3 5
7 9 11
13 15 17 19       */
#include<stdio.h>
int main(){
    int n, k=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ", k);
            k+=2;
        }
        printf("\n");
    }
    return 0;
}