#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "logic.h"

void setup(int height, int width, int(*map)[width])
{
    int i, j, k;
    int x, y, direction;

    // Postavi 0
    for(i = 0; i < height; i++)
        for(j = 0; j < width; j++)
            map[i][j] = 0;

    // Big ship initialization
    for(k = 0; k < SHIP_BIG_NUM; k++)
    {
        x = randomNumber(height - SHIP_BIG_LENGTH);
        y = randomNumber(width - SHIP_BIG_LENGTH);
        direction = randomNumber(1);

        // TODO: Corect direction

        /*
        switch(direction)
        {
            case SHIP_DIRECTION_DOWN:
                for(i = 0; i < SHIP_BIG_LENGTH; i++)
                map[x][y] = 1;
                y--;
        }
        */

        for(i = 0; i < SHIP_BIG_LENGTH; i++)
        {
            map[y][x] = 1;
            if(direction == SHIP_DIRECTION_DOWN)
                x++;
            else
                y++;
        }
    }
}

int randomNumber(int max)
{
    srand(time(NULL));
    return rand() % (max + 1);
}
