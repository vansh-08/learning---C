// Ques : Given three points (x1, y1), (x2, y2) and (x3, y3), write a program to check if all the three points fall on one straight line.
#include <stdio.h>
int main(){
    double x1, y1, x2, y2, x3, y3, m, n;
    printf("Enter x1 : ");
    scanf("%lf", &x1);
    printf("Enter y1 : ");
    scanf("%lf", &y1);
    printf("Enter x2 : ");
    scanf("%lf", &x2);
    printf("Enter y2 : ");
    scanf("%lf", &y2);
    printf("Enter x3 : ");
    scanf("%lf", &x3);
    printf("Enter y3 : ");
    scanf("%lf", &y3);

    m = (y2 - y1) / (x2 - x1);
    n = (y3 - y2) / (x3 - x2);
    if(m == n)
        printf("Straight line");
    else
        printf("Not a Straight line");

    return 0;
}