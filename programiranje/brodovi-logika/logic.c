#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

#include "logic.h"


int randNumber(int max)
{
    srand(time(NULL));
    return (rand() % max) + 1;
}

void *genMap(int height, int width, int (*map)[width])
{
    int i, j, k, n;                 // Brojacke promenjive
    int tmpX[4];                    // Pomocna promenjiva za x koordinate
    int tmpY[4];                    // Pomocna promenjiva za y koordinate
    int x, y, side;                 // Promenjive za slucajne brojeve
    bool valid;                     // Da li je brod ne dobrom mestu
    //int x1, y1;                   // Pomocne promenjiva za koordinate

    // Ocisti mapu
    for(i = 0; i < height; i++)
        for(j = 0; j < width; j++)
            map[i][j] = MAP_FREE;

    // Kreiraj veliki brod
    for(n = 0; n < 3; n++)
    {
        k = 4 - n;
        for(i = 0; i < n + 1; i++)
        {
            do
            {
                valid = true;
                x = randNumber(width);
                y = randNumber(height);
                side = randNumber(2);

                for(j = 0; j < k; j++)
                {
                    tmpX[j] = x;
                    tmpY[j] = y;

                    /*
                    if(map[y][x] != MAP_FREE)
                    {
                        valid = false;
                        break;
                    } //else if(map[y + 1][x] != MAP_FREE ||
                            //map[y - 1][x] != MAP_FREE
                    */

                    if(x > 10 || y > 10)
                    {
                        valid = false;
                        break;
                    }
                    else if(map[y][x] != MAP_FREE ||
                            map[y + 1][x] != MAP_FREE ||
                            map[y - 1][x] != MAP_FREE ||
                            map[y][x + 1] != MAP_FREE ||
                            map[y][x - 1] != MAP_FREE)
                    {
                        valid = false;
                        break;
                    }


                    if(side == 1)
                        x++;
                    else
                        y++;
                }
            } while(!valid);

            for(j = 0; j < k; j++)
            {
                //x1 = tmpX[j]
                //y1 = tmpY[j]
                map[tmpY[j]][tmpX[j]] = MAP_SHIP_ALIVE;
            }
        }
    }

    return NULL;
}
