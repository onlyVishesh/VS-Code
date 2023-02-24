#include <stdio.h>
int main()
{
    char grade;
    printf("Enter your grade:  ");
    scanf("%c",&grade);

    switch(grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("You did good\n");
            break;
        case 'C':
            printf("Yu did ok\n");
            break;
        case 'D':
            printf("Need improvement\n");
            break;
        case 'E':
            printf("Atleast it's not F\n");
            break;
        case 'F':
            printf("YOu failed! work hard\n");
            break;
        default:
            printf("Enter valid grade");


    }
    return 0;
}