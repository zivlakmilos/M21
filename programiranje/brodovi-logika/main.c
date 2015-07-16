#include <stdio.h>

#include "logic.h"
#include "graphic.h"

#define MAP_HEIGHT      10
#define MAP_WIDTH       10


int main(void)
{
    int i, j;
    int map[MAP_HEIGHT][MAP_WIDTH];
    //bool running = true;                    // Za glavnu petlju
    //bool loading = true;                    // Da li je sve ucinatoa
    //int dotNum = 1;                         // Broj tacaka ucitavanje

    /*
    genMap(MAP_HEIGHT, MAP_WIDTH, &map);

    for(i = 0; i < MAP_HEIGHT; i++)
    {
        for(j = 0; j < MAP_WIDTH; j++)
            printf("%d ", map[i][j]);
        printf("\n");
    }
    init();

    while(running)
    {
        if(loading)
        {
            drawLoad(dotNum);
            if(++dotNum > 5)
                dotNum = 1;
            getch();
        } else
        {
            // Glavni kod, igra
        }
    }

    cleanup();
    */

    init();

    genMap(MAP_HEIGHT, MAP_WIDTH, &map);

    drawFrame(0, 0, MAP_HEIGHT, MAP_WIDTH, &map);

    cleanup();

    return 0;
}
