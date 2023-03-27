/* HW: Print the given Pattern
   A
  ABA
 ABCBA
ABCDCBA     */
#include<stdio.h>
int main(){
    int n;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=65;k<=64+i;k++){
            printf("%c", k);
        }
        for(int l=64+i-1;l>=65;l--){
            printf("%c", l);
        }
        printf("\n");
    }
    return 0;
}