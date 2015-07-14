#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "logic.h"


int randNumber(int max)
{
    srand(time(NULL));
    return (rand() % max) + 1;
}

void genMap(int height, int width, int (*map)[width])
{
    int i, j, k, n;                 // Brojacke promenjive
    int tmpShip[SHIP_BIG_COUNT][2]; // Pomocna promenjiva za koordinate broda
    int x, y, side;                 // Promenjive za slucajne brojeve
    bool valid;                     // Da li je brod ne dobrom mestu
    int x1, y1;                     // Pomocne promenjive za koordinate

    // Ocisti mapu
    for(i = 0; i < height; i++)
        for(j = 0; j < width; j++)
            map[i][j] = MAP_FREE;

    // Kreiraj veliki brod
    for(i = 0; i < SHIP_BIG_COUNT; i++)
    {
        valid = false;

        while(!valid)
        {
            valid = true;
            x = randNumber(width);
            y = randNumber(height);
            side = randNumber(2);

            for(j = 0; j < SHIP_BIG_SIZE; j++)
            {
                tmpShip[j][0] = x;
                tmpShip[j][1] = y;

                if(map[y][x] != MAP_FREE)
                {
                    valid = false;
                    break;
                }

                if(side == 1)
                    x++;
                else
                    y++;
            }
        }

        for(j = 0; i < SHIP_BIG_SIZE; j++)
        {
            x1 = tmpShip[j][0];
            y1 = tmpShip[j][1];
            map[y1][x1] = MAP_SHIP_ALIVE;
        }
    }
}
