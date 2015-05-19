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
    for(k = 0; i < SHIP_BIG_NUM; i++)
    {
        x = randomNumber(height);
        y = randomNumber(width);
        direction = randomNumber(4);

        // TODO: Corect direction

        switch(direction)
        {
            case SHIP_DIRECTION_UP:
            break;
        }
    }
}

int randomNumber(int max)
{
    srand(time(NULL));
    return rand() % (max + 1);
}
