/* HW: Print the given Pattern (Number and alphabe triangle pattern)
1
A B
1 2 3
A B C D
1 2 3 4 5   */
#include<stdio.h>
int main(){
    int n, c;
    printf("Enter a number : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        c=65;
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d ",j);
            }
            else{
                printf("%c ",c);
            }
            c++;
        }
        printf("\n");
    }
    return 0;
}