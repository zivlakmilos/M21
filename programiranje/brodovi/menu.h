#ifndef MENU_H
#define MENU_H

#define NUM_OF_ELEMENTS         4

#define MENU_CREATE             0
#define MENU_JOIN               1
#define MENU_SINGLE             2
#define MENU_EXIT               3

class Menu
{
    private:
        float x;
        float y;
        float width;
        float height;
        int texture[NUM_OF_ELEMENTS];
        int position;
        int elementWidth;
        int elementHeight;

    public:
        Menu(float x, float y, float widht, float height);
        void render(void);
        void setActivate(int index);
        void moveUp(void);
        void moveDown(void);
};

#endif // MENU_H
