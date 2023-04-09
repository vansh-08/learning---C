#include<stdio.h>
int main(){
    int n;
    printf("Enter length of array : ");
    scanf("%d",&n);
    int arr[n];
    int ele;
    for(int i=0;i<n;i++){
        printf("Enter %d element : ",i+1);
        scanf("%d",&ele);
        arr[i] = ele;
    }
    printf("The Entered array is : ");
    for(int k=0;k<n;k++){
        printf("%d ",arr[k]);
    }
    printf("\nThe reversed array is : ");
    for(int j=n-1;j>=0;j--){
        printf("%d ",arr[j]);
    }
    return 0;
}