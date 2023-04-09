// Write a program to reverse the array without using any extra array.
// an important code

// Using for loop
#include<stdio.h>
void reverse(int arr[],int si,int ei){
    for(int i=si,j=ei;i<=j;i++,j--){
        // arr[i] and arr[j]
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr,1,4);
    //int size = arr.size();
    for(int i=0;i<=6;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}





// Using while loop
// #include<stdio.h>
// void reverse(int arr[]){
//     int i=0;
//     int j=6;
//     while(i<j){
//         // arr[i] and arr[j]
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
//     return;
// }
// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     reverse(arr);
//     //int size = arr.size();
//     for(int i=0;i<=6;i++){
//         printf("%d ",arr[i]);
//     }

//     return 0;
// }
