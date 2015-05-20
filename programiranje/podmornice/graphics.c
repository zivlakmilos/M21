#include <stdio.h>

#include "graphics.h"

void CONSOLE_draw(int height, int width, int (*map)[width])
{
    int i, j;

    for(i = 0; i < height; i++)
    {
        for(j = 0; j < width; j++)
            if(map[i][j] == 1)
                printf("|x");
            else
                printf("| ");
        printf("|\n");
    }
}
