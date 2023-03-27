/*
1234321
123 321
12   21
1     1      */
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("%d", i);
    }
    for(int j=n-1;j>=1;j--){
        printf("%d", j);
    }
    printf("\n");
    for(int k=1;k<=n-1;k++){
        for(int l=1;l<=n-k;l++){
            printf("%d", l);
        }
        for(int m=1;m<=2*k-1;m++){
            printf(" ");
        }
        for(int p=n-k;p>=1;p--){
            printf("%d", p);
        }
        printf("\n");
    }
    return 0;
}
