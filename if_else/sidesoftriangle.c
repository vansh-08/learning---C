// Take three numbers input and tell if they can be the sides of a triangle
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st side: ");
    scanf("%d", &a);
    printf("Enter 2nd side: ");
    scanf("%d", &b);
    printf("Enter 3rd side: ");
    scanf("%d", &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        printf("Yes %d %d %d can be the sides of a triangle", a, b, c);
    }
    else{
        printf("Yes %d %d %d can not be the sides of a triangle", a, b, c);
    }
    return 0;
}