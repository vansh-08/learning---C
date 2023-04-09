// Ques : Given an array containing elements from 1 to 100 except one element in this range is missing. Find the missing element.

//  Solving for range 1 to 10, same algorithm applies for above range.
#include<stdio.h>
int main(){
    int arr[9] = {1,2,3,4,5,6,8,9,10};
    int sum1=0,sum2=0,misele=0;
    for(int i=0;i<=8;i++){
        sum1+=arr[i];
    }
    for(int j=0;j<=10;j++){
        sum2+=j;
    }
    misele = sum2-sum1;
    printf("The missing element is %d",misele);
    return 0;
}