#include "screen.h"
#include <stdio.h>

int title(char* screen, int width, int height)
{
    int w = 0;
    int h = 0;
    while (h < height)
    {
        while (w < width)
        {
            if(w == width - 1)
            {
                screen[w +(h * (width))] = '\n';
            }
            else
            {
                if(w == 0 || w == width - 2 || h == 0 || h== height -1)
                {
                    screen[w + (h * (width))] = '#';
                }
                else
                {
                    screen[w + (h * (width))] = ' ';
                }
            }
            w = w + 1;
        }
        w = 0;
        h = h + 1;
    }
    screen[height * width] = '\0';
    return 0;
}                        

int writeString(const char* string, char* screen, int width, int x, int y)
{
    int index = x + (y * width ); // 위치에 해당하는 인덱스 계산
    
    int i = 0;

    while (string[i] != '\0')
    {
        screen[index + i] = string[i];
        i++;
    }
    
    return 0;
}

int setTitle(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("_____________________________________", screen, width,1,3);
    writeString("_____________________________________", screen, width,1,7);
    writeString("A v o i d i n g", screen, width,10,5);
    writeString("B u b b l e", screen, width,18,6);
    writeString("1. GAME START", screen, width,12,11);
    writeString("2. GUIED BOOK", screen, width,12,13);
    writeString("3. EXIT", screen, width,12,15);    
}

int sethow(char* screen, int width, int height)
{
    int x = width;
    int y = height;
    writeString("_____________________________________", screen, width,1,3);
    writeString("_____________________________________", screen, width,1,9);
    writeString("Players Must Survive", screen, width, 9, 5);
    writeString("As Long As Possible", screen, width, 10, 6);
    writeString("While Avoiding Bubbles", screen, width, 8, 7);
    writeString("Flying From Eight Directions.", screen, width, 5, 8);
    writeString("RETURN TO MENU", screen, width, 12, 13);
    writeString("1. Y E S", screen, width, 15, 14);
    writeString("2. N O", screen, width, 15, 15);    
}
