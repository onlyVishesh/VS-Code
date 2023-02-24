#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    int amount;
    char name[25];
    printf("Enter the Name :    ");
    fgets(name, 25, stdin);        // It will take string with spaces
    name[strlen(name) - 1] = '\0'; // This will remove new line char that is created by fgets

    printf("Enter the amount :    ");
    scanf("%d", &amount);

    // scanf("%d %s", &amount, &name);

    // printf("Hi my name is %s\nAnd you own me %d rupees\n", "Tom", 259);
    if (amount >= 150)
    {
        printf("Hi my name is %s\nAnd you own me %d rupees\nPlease return my %d ASAP", name, amount, amount);
    }
    else if (amount < 0)
    {
        printf("Hi my name is %s\nAnd you own me %d rupees\nOk i will return your ", fabs(amount), "ASAP", name, amount);
    }
    else
    {
        printf("Hi my name is %s\nAnd you own me %d rupees\n", name, amount);
    }

    // printf("%d",x);
    return 0;
}