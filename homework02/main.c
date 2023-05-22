#include <stdio.h>
#include "screen.h"
#include <stdlib.h>

int main()
{
    char screen[40*20+1];
    int width = 40;
    int height =20;
    int game = 1;

    char input;
    title(screen, width, height);
    setTitle(screen,width,height);
    system("cls");

    while(game)
    {
        printf("%s\nPlease input: ", screen);
        scanf(" %c", &input);

        if(input == '2')
        {
            system("cls");
            title(screen, width, height);
            sethow(screen,width,height);

            printf("%s\nPlease input: ", screen);
            scanf(" %c", &input);
            
            if(input == '1')
            {
                system("cls");
                title(screen, width, height);
                setTitle(screen,width,height);
            }
            else if(input == '2')
            {
                system("cls");
                title(screen, width, height);
                sethow(screen,width,height);
            }
        }
        else if(input == '3')
        {
                game = 0;

        }
    }

    return 0;
}