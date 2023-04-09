// Ques: Write a program to copy the contents of one array into another in the reverse order.
#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int brr[7];
    for(int i=0;i<=6;i++){
        brr[i] = arr[6-i];
    }
    for(int i=0;i<=6;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}








// My approach(technique)
// #include<stdio.h>
// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     int brr[6];
//     for(int i=0;i<=5;i++){
//         for(int j=5-i;j>(5-i-1);j--){
//             brr[i] = arr[j];
//         }
//     }
//     for(int k=0;k<=5;k++){
//         printf("%d ",brr[k]);
//     }
//     return 0;
// }