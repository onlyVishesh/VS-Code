#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    double perpendicular;
    double base;
    double hypotenuse;
    printf("enter perpendicular here ");
    scanf("%lf", &perpendicular);
    printf("enter base here ");
    scanf("%lf", &base);
    hypotenuse = sqrt(pow(perpendicular,2) + pow(base, 2));
    printf("hypotenuse is %lf", hypotenuse);

    return 0;
}