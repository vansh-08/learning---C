// Ques: count the number of triplets whose sum is equal to the given value x.
#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int count = 0;
    int x = 12;
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            for(int k=j+1;k<=7;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    count++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("total number of triplets = %d",count);
    return 0;
}