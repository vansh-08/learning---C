/* Enter a number : 4
1 2 3 4 
1 2 3 
1 2 
1    */
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}   