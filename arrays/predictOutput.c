// #include<stdio.h>
// int main(){
//     int sub[50],i;
//     for(i=0;i<=48;i++);
//     {
//         sub[i] = i;
//         printf("\n%d",sub[i]);
//     }
// }



// #include<stdio.h>
// int main(){
//     int i,a=2,b=3;
//     int arr[2+3];
//     for(i=0;i<a+b;i++){
//         scanf("%d",&arr[i]);
//         printf("\n%d",arr[i]);
//     }
// }



#include<stdio.h>
int is_prime(int x){
    for(int i=2;i<x;i++){
        if(x%i==0) return 1;
        else continue;
    }
    return 0;
    }
int main(){
    int arr[4]={2,8,9,6};
    int sum=0;
    for(int i=0;i<4;i++){
        sum=sum+arr[i];
    }
    int avg=sum/4;
    printf("sum=%d",sum);
    printf("\navg=%d\n",avg);
    int temp = is_prime(avg);
    if(temp==0) printf("prime");
    else printf("not prime");

    return 0;
}