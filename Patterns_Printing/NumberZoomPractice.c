/*
1 1 1 1 1 1 1
1 2 2 2 2 2 1
1 2 3 3 3 2 1
1 2 3 4 3 2 1
1 2 3 3 3 2 1
1 2 2 2 2 2 1
1 1 1 1 1 1 1   */

/*  trick for below partition -> print min(i or j)
1 1 1 1
1 2 2 2
1 2 3 3
1 2 3 4     */


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
            printf("%d ", min);
        }
        printf("\n");
    }
    return 0;
}