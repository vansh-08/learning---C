// *Ques : Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.

// code is working only if no doublet,triplet etc, is present before unique element in given array. (taken this algorithm from lecture)
#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7] = {1,3,6,1,1,2,3};
    for(int i=0;i<=6;i++){
        bool flag = false;
        for(int j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
        if(flag==false){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}