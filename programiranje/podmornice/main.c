#include <stdio.h>

#include "logic.h"
#include "graphics.h"

#define MAP_HEIGHT          20
#define MAP_WIDTH           20

int main()
{
    int map[MAP_HEIGHT][MAP_WIDTH];

    setup(MAP_HEIGHT, MAP_WIDTH, map);
    CONSOLE_draw(MAP_HEIGHT, MAP_WIDTH, map);

    return 0;
}
