#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

// Random no generator and no. guessing game
char replay()
{
    
}
void game(int min, int max)
{

    do
    {
        srand(time(0));
        int num1 = (rand() % max) + min;

        printf("Enter your guess(between %d to %d):   ", min, max);
        int guess;
        scanf("%d", &guess);
        if (guess == num1)
        {
            printf("Wow! you guess it\n");
            printf("Want to play again? (Y/N)   ");
            char choose[1];
            choose[1] = toupper(choose[1]);
            scanf("%s", &choose[1]);

             if (choose[1] == 'Y' | choose[1] == 'y' )
            {
                continue;
            }
             else
            {
                break;
            }
            printf("\n");
        }

        else if (guess > 6 | guess < 1)
        {
            printf("Enter valid number\n");
            printf("Want to play again? (Y/N)   ");
            char choose[1];
            choose[1] = toupper(choose[1]);
            scanf("%s", &choose[1]);

             if (choose[1] == 'Y' | choose[1] == 'y' )
            {
                continue;
            }
             else
            {
                break;
            }
            printf("\n");
        }
        else
        {
            printf("No, it's not %d it is %d !\n", guess, num1);
            printf("Want to play again? (Y/N)   ");
            char choose[1];
            choose[1] = toupper(choose[1]);
            scanf("%s", &choose[1]);

             if (choose[1] == 'Y' | choose[1] == 'y' )
            {
                continue;
            }
             else
            {
                break;
            }
            printf("\n");
        }

    } while (1 > 0);
}
int main()
{
    const int min = 1;
    const int max = 6;
    // srand = seed random , generate random seed from time function
                    // time(0) = current time
    // int num1 = (rand() % max)+ min; // rand() select random no bw 0-32767 but with use of %n we get no. till n-1

    game(min, max);
    

    return 0;
}