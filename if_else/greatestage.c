// HW : If the ages of Ram, Shyam and Ajay are yet through the keyboard, write a program to determine the youngest of the three.
#include <stdio.h>
int main()
{
    int Ram, Shyam, Ajay;
    printf("Enter age of Ram: ");
    scanf("%d", &Ram);
    printf("Enter age of Shyam: ");
    scanf("%d", &Shyam);
    printf("Enter age of Ajay: ");
    scanf("%d", &Ajay);
    if (Ram < Shyam && Ram < Ajay)
    {
        printf("Ram is youngest");
    }
    if (Shyam < Ram && Shyam < Ajay)
    {
        printf("Shyam is youngest");
    }
    if (Ajay < Ram && Ajay < Shyam)
    {
        printf("Ajay is youngest");
    }
    return 0;
}