// Homework: Calculate the product of all the elements in the given array.  arr -> 1,2,5,3,8,9
#include<stdio.h>
int main(){
    int arr[6] = {1,2,5,3,8,9};
    int product = 1;
    for(int i=0;i<6;i++){
        product = product*arr[i];
    }
    printf("product of given array is : %d",product);
    return 0;
}