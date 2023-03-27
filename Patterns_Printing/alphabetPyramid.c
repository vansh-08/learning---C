/* *HW :Print the given pattern
   A
  ABC
 ABCDE
ABCDEFG        */
#include<stdio.h>
int main(){
    int n, c;
    printf("Enter number of lines : ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        c=65;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}