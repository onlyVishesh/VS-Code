#include <stdio.h>
#include <string.h>

/* struct = collection of related variables of same or different data type
            similar to classes
*/

struct player
{
    char name[15];
    int age;
    int score;
};

int main()
{

    struct player player1;
    struct player player2;

    strcpy(player1.name, "Vishesh");
    player1.age = 19;
    player1.score = 230;

    strcpy(player2.name, "Shikha");
    player2.age = 21;
    player2.score = 120;

    printf("Hi %s your score is %d\n",player1.name,player1.score);
    printf("Hi %s your score is %d\n",player2.name,player2.score);


    return 0;
}
/* Alternative way to use struct with nickname
typedef struct 
{
    char name[15];
    int age;
    int score;
} userData;

int main(){

    userData player1 ={"Vishesh",19,240};
    userData player2 ={"Shikha",21,120};
    printf("Hi %s your score is %d\n",player1.name,player1.score);
    printf("Hi %s your score is %d\n",player2.name,player2.score);



    return 0;
}*/