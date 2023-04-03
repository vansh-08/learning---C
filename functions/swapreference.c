// Swap 2 numbers 'pass by reference'
#include<stdio.h>
void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main(){
    int a;
    printf("Enter a : ");
    scanf("%d", &a);
    int b;
    printf("Enter b : ");
    scanf("%d", &b);

    swap(&a,&b);

    printf("The value of a is %d\n",a);
    printf("The value of b is %d",b);
    return 0;
}



// // Swap 2 numbers using pass by reference(Practice time(done))
// #include<stdio.h>
// void swap(int* x,int* y){
//     int temp;
//     temp = *x;
//     *x = *y;
//     *y = temp;
//     return;
// }
// int main(){
//     int a,b;
//     printf("Enter a & b : ");
//     scanf("%d %d",&a,&b);
//     swap(&a,&b);
//     printf("After Swapping ---->\n");
//     printf("a : %d\nb : %d",a,b);
//     return 0;
// }