/* For n = 4
*******
*** ***
**   **
*     *     */
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int nst=n-1;
    int nsp=1;
    for(int i=1;i<=n;i++){
        if(i==1){
            for(int r=1;r<=2*n-1;r++){
                printf("*");
            }
        }
        else{
            for(int j=1;j<=nst;j++){
                printf("*");
            }
            for(int k=1;k<=nsp;k++){
                printf(" ");
            }
            for(int l=1;l<=nst;l++){
                printf("*");
            }
            nst--;
            nsp+=2;
        }
        printf("\n");
    }
    return 0;
}