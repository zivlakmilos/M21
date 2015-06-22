#ifndef MAP_H
#define MAP_H

#define MAP_WIDTH       10
#define MAP_HEIGHT      10

class Map
{
    private:
        int x;
        int y;
        int map[MAP_WIDTH][MAP_HEIGHT];

    public:
        Map(void);
};

#endif // MAP_H
