#ifndef GAME_H
#define GAME_H

#define GAME_STATUS_PLAYING         0
#define GAME_STATUS_MENU            1

class Game
{
    private:
        float width;
        float height;
        char *caption;
:x
:x
        int fps;
        int status;
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
