#include<stdio.h>
int main(){
    // int x=4,y=3,z;
    // z=x-- -y;
    // printf("\n%d %d %d",x,y,z);
    
    int x=4,y=0,z;
    while(x>=0){
        if(x==y)
            break;
        else
            printf("\n%d %d",x,y);
            x--;
            y++;
    }
    return 0;
}