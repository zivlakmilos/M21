#ifndef MENU_H
#define MENU_H

#define NUM_OF_ELEMENTS         4

class Menu
{
    private:
        float x;
        float y;
        float width;
        float height;
        char *menu[NUM_OF_ELEMENTS];
        int position;

    public:
        render(void);
        setActivate(int index);
}

#endif // MENU_H
