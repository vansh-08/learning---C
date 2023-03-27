/* **Ques : Print the given Pattern
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4      */
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int min=0;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            if(i>n) a=2*n-i;
            int b=j;
            if(b>n) b=2*n-j;
            if(a<b) min=a;
            else min=b;
            printf("%d ", n+1-min);
        }
        printf("\n");
    }
    return 0;
}



/* first partition
4 4 4 4
4 3 3 3 
4 3 2 2
4 3 2 1 */
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number : ");
//     scanf("%d", &n);
//     int max=0;
//     for(int i=n;i>=1;i--){
//         for(int j=n;j>=1;j--){
//             if(i>j) max=i;
//             else max=j;
//             printf("%d ", max);
//         }
//         printf("\n");
//     }
//     return 0;
// }
