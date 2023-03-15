#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is greatest", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is greatest", b);
    }
    else
    {
        printf("%d is greatest", c);
    }
    return 0;
}

 //               ##########  4 integer version of this question  ####
// Take 4 positive integers input & print the greatest
/*#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);
    printf("Enter d : ");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is greatest", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is greatest", b);
    }
    if(c > a && c > b && c > d)
    {
        printf("%d is greatest", c);
    }
    if(d > a && d > b && d > c )
    {
        printf("%d is greatest", d);
    }
    return 0;
} */