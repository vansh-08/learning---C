// If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.
#include<stdio.h>
int main(){
    int cp; // dabba
    printf("Enter cost price : ");
    scanf("%d", &cp);
    int sp; // dabba
    printf("Enter selling price : ");
    scanf("%d", &sp);
    if(sp>cp){
        printf("Profit");
    }
    if(cp>sp){
        printf("Loss");
    }
    if(sp==cp){
        printf("Not profit, no loss");
    }
    return 0;
}