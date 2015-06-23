#ifndef MENU_H
#define MENU_H

#define NUM_OF_ELEMENTS         4

#define MENU_SINGLE             1
#define MENU_MULTI              2
#define MENU_LAN                3
#define MENU_EXIT               4

class Menu
{
    private:
        float x;
        float y;
        float width;
        float height;
        //int texture[NUM_OF_ELEMENTS];
        int position;
        int elementWidth;
        int elementHeight;
        void moveUp(void);
        void moveDown(void);

    public:
        Menu(float x, float y, float widht, float height);
        void render(void);
        //void setActive(int index);
        int events(SDL_Event event);
};

#endif // MENU_H
