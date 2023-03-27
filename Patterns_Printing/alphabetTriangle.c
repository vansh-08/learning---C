#include<stdio.h>
int main(){
    int n, a, b=65;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        a=(char)b;
        for(int j=1;j<=i;j++){
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }
    return 0;
}