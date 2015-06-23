#include "main.h"
#include "map.h"

Map::Map(int type)
{
    this->x = 0;
    this->y = 0;

    if(type == MAP_TYPE_SINGLE)
        randomMap();
    else
        emptyMap();
}

void Map::randomMap(void)
{
    bool isSuccess = false;
    int x, y, x1, y1, direction;

    for(int i = 1; i <= 4; i++)
        for(int j = 1; j <= i; j++)
        {
            while(!isSuccess)
            {
                x = x1 = random(MAP_WIDTH);
                y = y1 = random(MAP_HEIGHT);
                direction = random(1);
                isSuccess = true;
                for(int k = 0; k < i; k++)
                {
                    if(direction == 0 && x > MAP_WIDTH)
                    {
                        isSuccess = false;
                        break;
                    } else if(direction == 1 && y > MAP_HEIGHT)
                    {
                        isSuccess = false;
                        break;
                    }
                    if(this->map[x][y] != 0)
                    {
                        isSuccess = false;
                        break;
                    } else if(this->map[x + 1] != 0 || this->map[x - 1] != 0)
                    {
                        isSuccess = false;
                        break;
                    } else if(this->map[y + 1] != 0 || this->map[y - 1] != 0)
                    {
                        isSuccess = false;
                        break;
                    }
                }
            }

            x = x1;
            y = y1;
            for(int k = 0; k < i; k++)
            {
                map[x][y] = 1;
                if(direction == 0)
                    x++;
                else
                    y++;
            }
        }
}

void Map::emptyMap(void)
{
    for(int iY = 0; iY < MAP_WIDTH; iY++)
        for(int iX = 0; iX < MAP_WIDTH; iX++)
            this->map[iX][iY] = 0;
}

int Map::random(int max)
{
    srand(time(NULL));
    return rand() % max++;
}
