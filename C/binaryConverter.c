#include <stdio.h>
int main()
{
    int num,array[10];
    scanf("%d",&num);
    for(int i = 1; i<=10; i++){
        array[10-i] = num%2;
        num /= 2;
    }
    for(int j = 0; j<10; j++){
        printf("%d",array[j]);
    }
    if ()
    {
        /* code */
    }
    
    return 0;
}