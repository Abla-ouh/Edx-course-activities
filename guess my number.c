#include <stdio.h>
int main(void)
{
    int mainNb;
    scanf("%d", &mainNb);
    int guessTheNb;
    int tries = 0;
    while (guessTheNb != mainNb){
        scanf("%d", &guessTheNb);
        if(guessTheNb < mainNb ){
            printf("it is more\n");
        }
        if(guessTheNb > mainNb){
            printf("it is less\n");
        }
        tries = tries + 1;
    }
    printf("Number of tries needed:\n%d", tries);
    return 0;
}
