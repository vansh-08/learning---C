// Homework: If an array arr contains n elements, then check if the given array is a palindrome or not.
#include<stdio.h>
int palindrome(int arr[]){
    for(int i=0,j=6;i<j;i++,j--){
        if(arr[i]==arr[j]) return 1;
        else return 0;
    }
}
int main(){
    int arr[7] = {1,2,3,4,3,2,1};
    int r = palindrome(arr);
    if(r==1) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}