/*
ABCDEFG
ABC EFG
AB   FG
A     G     */
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int nst=n-1, nsp=1, b=65;
    for(int j=1;j<=2*n-1;j++){
        printf("%c", b);
        b++;
    }
    printf("\n");
    for(int i=1;i<=n-1;i++){
        int a=65;
        for(int k=1;k<=nst;k++){
            printf("%c", a);
            a++;
        }
        for(int l=1;l<=nsp;l++){
            printf(" ");
            a++;
        }
        for(int m=1;m<=nst;m++){
            printf("%c", a);
            a++;
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}