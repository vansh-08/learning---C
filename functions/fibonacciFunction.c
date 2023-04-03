#include<stdio.h>
void fibonacci(int x){
    int p=1, pp=0, c=0;
    for(int i=1;i<=x;i++){
        pp=p;
        p=c;
        c=p+pp;
        printf("%d ",c);
    }
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    fibonacci(n);
    return 0;
}
