// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number to print its table : ");
//     scanf("%d",&n);
//     for(int i=n;i<=n*10;i=i+n){
//         printf("%d ",i);
//     }
//     return 0;
// }

#include<stdio.h>
int main(){
    int n,p=1;
    printf("Enter the number to print its table : ");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i=i+n){
        printf("%d * %d = %d\n",n,p,i); p++;
    }
    return 0;
}