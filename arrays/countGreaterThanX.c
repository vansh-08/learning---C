#include<stdio.h>
int main(){
    int x = 4, count = 0, arr[7] = {1,2,3,4,5,6,7};
    for(int i=0;i<=6;i++){
        if(arr[i]>x) count++;
    }
    printf("%d",count);
    return 0;
}