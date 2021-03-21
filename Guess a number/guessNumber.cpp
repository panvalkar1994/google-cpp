#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


int main()
{
    int guess;
    srand(time(NULL));
    int secret = rand() % 10;
    do
    {
        printf("Guess a digit\t");
        scanf("%d", &guess);
        if (guess<secret)
        {
            printf("You guessed lower number\n");
        }
        else if(guess>secret)
        {
            printf("You guessed a bigger number\n");
        }
        else
        {
            printf("congratulation! You Won.\n");
        }
        
    } while (guess!=secret);
    return 0;
}