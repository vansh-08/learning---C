// Ques : Rotate the given array 'a' by k steps, where k is non-negative.
// Note:k can be greater than n as well where n is the size of array 'a'.
// hint k = k % n (n-> number of elements in an array)

// #include<stdio.h>
// void reverse(int arr[],int si,int ei){
//     int temp;
//     for(int i=si,j=ei;i<=j;i++,j--){
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//     }
//     return;
// }
// int main(){
//     int arr[7] = {1,2,3,4,5,6,7};
//     int n = 7;
//     int k = 2;
//     // steps
//     k = k % n;
//     reverse(arr,0,n-1);
//     reverse(arr,0,k-1);
//     reverse(arr,k,n-1);
//     for(int i=0;i<=n-1;i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }




// completed with homework
#include<stdio.h>
int main(){
    int n, k,ele;
    printf("Enter the length of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int f=0;f<n;f++){
        printf("Enter %d element : ",f+1);
        scanf("%d",&ele);
        arr[f] = ele;
    }
    printf("How many times you want to rotate the array : ");
    scanf("%d",&k);
    // steps
    k = k % n;
    void reverse();
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for(int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
void reverse(int arr[],int si,int ei){
    int temp;
    for(int i=si,j=ei;i<=j;i++,j--){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}