#include<stdio.h>
int main(){
    // int a = 5;
    // int* x = &a;
    // printf("%p\n",x); // %p se address print hota hai
    // printf("%p\n",&x);
    int a = 25;
    int* x = &a; //int* -> int ka address store krta hai
    // VVIP -> *x = 7; // a is changed.
    int** y = &x; // int** -> int* ka address store krta hai
    printf("%p\n",&x); // %p se address print hota hai
    printf("%p\n",y);
    return 0;
}


