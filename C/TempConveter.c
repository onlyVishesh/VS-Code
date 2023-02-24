#include <stdio.h>
#include <ctype.h>
int main()
{
    // switch statement 
    float temp;
    char choice;
    printf("Please select temperature type-\nF - Fahrenheit\nC - Celsius\n");
    scanf("%c", &choice);
    choice = toupper(choice);
    switch (choice)
    {
    case 'F':
        printf("Enter temp in Fahrenheit:   ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("%.2f degree Celsius", temp);
        break;
        
    case 'C':
        printf("Enter temp in Celsius:   ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\n%.2f degree Fahrenheit", temp);
        break;

    default:
        printf("Only enter C or F");
        break;
    }
    
    /* if elif else statement
    float temp;
    char choice;
    printf("Please select temperature type-\nF - Fahrenheit\nC - Celsius\n");
    scanf("%c", &choice);
    choice = toupper(choice);
    if (choice == 'F')
    {
        printf("Enter temp in Fahrenheit:   ");
        scanf("%f", &temp);
        temp = (temp - 32) * 5 / 9;
        printf("%.2f degree Celsius", temp);
    }
    else if (choice == 'C')
    {
        printf("Enter temp in Celsius:   ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\n%.2f degree Fahrenheit", temp);
    }
    else
    {
        printf("Only enter C or F");
    }*/

    return 0;
}