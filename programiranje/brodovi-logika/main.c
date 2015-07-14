#include <stdio.h>

#include "logic.h"

#define MAP_HEIGHT      10
#define MAP_WIDTH       10

int main(void)
{
    int i, j;
    int map[MAP_HEIGHT][MAP_WIDTH];

    genMap(MAP_HEIGHT, MAP_WIDTH, &map);

    for(i = 0; i < MAP_HEIGHT; i++)
    {
        for(j = 0; j < MAP_WIDTH; j++)
            printf("%d ", map[i][j]);
        printf("\n");
    }
}
