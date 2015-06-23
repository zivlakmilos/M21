#ifndef GAME_H
#define GAME_H

#define GAME_STATUS_PLAYING         0
#define GAME_STATUS_MENU            1

#define GAME_TYPE_SINGLE            1
#define GAME_TYPE_MULTI             2
#define GAME_TYPE_LAN               3

class Game
{
    private:
        float width;
        float height;
        char *caption;
        bool isRunning;
        int fps;
        int status;
        int type;
        Menu *menu;
        SDL_Event event;

        void events(SDL_Event event);
        void init(void);

    public:
        Game(void);
        ~Game(void);
        void mainLoop(void);
};

#endif // GAME_H
