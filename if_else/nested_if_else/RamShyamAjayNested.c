// If the ages of Ram Shyam and Ajay are input through the keyboard, write a program to determine the youngest of three. (Solve by nested loop)
#include <stdio.h>
int main(){
    int Ram, Shyam, Ajay;
    printf("Enter age of Ram : ");
    scanf("%d", &Ram);
    printf("Enter age of Shyam : ");
    scanf("%d", &Shyam);
    printf("Enter age or Ajay : ");
    scanf("%d", &Ajay);
    if(Ram < Shyam){
        if(Ram < Ajay)
            printf("Ram is the youngest");
        else
            printf("Ajay is the youngest");
    }
    else{  // Ajay < Ram
        if(Shyam < Ajay)
            printf("Shyam is the youngest");
        else   
            printf("Ajay is the youngest");
    }
    return 0;
}