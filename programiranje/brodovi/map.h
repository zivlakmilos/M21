#ifndef MAP_H
#define MAP_H

#define MAP_WIDTH               10
#define MAP_HEIGHT              10

#define MAP_TYPE_SINGLE         1
#define MAP_TYPE_MULTI          2
#define MAP_TYPE_LAN            3

#define MAP_SHIP_4              1
#define MAP_SHIP_3              2
#define MAP_SHIP_2              3
#define MAP_SHIP_1              4

#define MAP_SHIP_NO             0
#define MAP_SHIP_ALIVE          1
#define MAP_SHIP_DEAD           2

class Map
{
    private:
        int x;
        int y;
        int map[MAP_WIDTH][MAP_HEIGHT];

        void randomMap(void);
        void emptyMap(void);
        int random(int max);

    public:
        Map(int type);
        void render(void);
};

#endif // MAP_H
