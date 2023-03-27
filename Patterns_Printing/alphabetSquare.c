// Enter number of rows : 4
/*
A B C D 
A B C D 
A B C D 
A B C D */
#include<stdio.h>
int main(){
    int c, n;
    printf("Enter number of rows : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        c=65;
        for(int j=1;j<=n;j++){
            char ch=(char)c;
            printf("%c ", ch);
            c++;
        }
        printf("\n");
    }
}