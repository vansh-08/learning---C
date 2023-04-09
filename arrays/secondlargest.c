// // Find the second largest element in the given array.
// long and inefficient method
// #include<stdio.h>
// #include<limits.h>
// int main(){
//     int arr[7] = {-10,-4,-200,-80,-19,-5,-12};
//     int max = INT_MIN;
//     int smax = INT_MIN;
//     for(int i=1;i<=6;i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
//     }
//     // max = -4
//     for(int i=1;i<=6;i++){
//         if(arr[i]!=max && smax<arr[i]){
//             smax = arr[i];
//         }
//     }
//     printf("%d",smax);
//     return 0;
// }

// efficient and short method to find second largest element in an array
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7] = {1,2,3,4,4,2,1};
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0;i<=6;i++){
        if(max<arr[i]){
            smax = max; //smax is now previous max
            max = arr[i]; //max is now a new max
        }
        else if(smax<arr[i] && arr[i]!=max){
            smax = arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}  // smax=3, max=4

