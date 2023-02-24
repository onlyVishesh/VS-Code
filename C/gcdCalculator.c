#include <stdio.h>

int main()
{
    int times, a, b, gcd = 0;
    printf("enter no. of times  ");

    scanf("%d", &times);
    for (int i = 0; i < times; i++)
    {
        printf("enter 2 numbers");
        scanf("%d %d", &a, &b);
        for (int j = 1; j < a || j < b; j++)
        {
            if (a % j == 0 && b % j == 0)
            {
                gcd = j;
            }
        }
        printf("%d\n", gcd);
    }

    return 0;
}