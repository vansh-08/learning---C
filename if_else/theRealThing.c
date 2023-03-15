#include<stdio.h>
int main(){
    int a;
    char ch = 'a';
    if(3 + 2 % 5)
        printf("This Works\n");
    if(a = 10)
        printf("Even this Works\n");
    if(a = -5)
        printf("Surprisingly even this Works\n");
    if(ch = 'g')
        printf("Hello\n");
    if(ch == 'h')
        printf("World\n");
    return 0;
}