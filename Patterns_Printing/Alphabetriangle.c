/* HW : Print the given Pattern
   A
  AB
 ABC
ABCD     */
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
        for(int k=1;k<=i;k++){
            printf("%c", c);
            c++;
        }
        printf("\n");
    }
    return 0;
}