// /* *Ques : Print the given Pattern ( my first approach)
// 1
// 0 1
// 1 0 1
// 0 1 0 1        */
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             if((i%2!=0 && j%2!=0)||(i%2==0 && j%2==0)) printf("1 ");
//             else printf("0 ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// /* *Ques : Print the given Pattern (using temporary variable vedio)
// 1
// 0 1
// 1 0 1
// 0 1 0 1        */
// #include<stdio.h>
// int main(){
//     int n, a;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         if(i%2!=0) a = 1;
//         else a = 0;
//         for(int j=1;j<=i;j++){
//             printf("%d ", a);
//             if(a==0) a=1;
//             else a=0;
//         }
//         printf("\n");
//     }
//     return 0;
// }


/* *Ques : Print the given Pattern ( vedio 2nd approach )
1
0 1
1 0 1
0 1 0 1        */
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0) printf("1 ");
            else printf("0 ");
        }
        printf("\n");
    }
    return 0;
}