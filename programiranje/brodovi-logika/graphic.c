#include <ncurses.h>

#include "graphic.h"


void init(void)
{
    initscr();
    noecho();
    curs_set(FALSE);
}

void cleanup(void)
{
    endwin();
}

void drawLoad(int dotNum)
{
    char *txt = "Loading ";
    int x = (WINDOW_WIDTH - dotNum - sizeof(txt)) / 2;
    int y = WINDOW_HEIGHT / 2;
    mvprintw(x, y, txt);
    mvprintw(x, ++y, ".");
}

void drawFrame(int x, int y, int mHeight, int mWidth, int (*map)[mWidth])
{
    drawBox(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);

    refresh();
}

void drawBox(int x, int y, int w, int h)
{
    mvaddch(x, y, ACS_ULCORNER);
    mvaddch(x, w, ACS_URCORNER);
    mvaddch(h, x, ACS_LLCORNER);
    mvaddch(h, w, ACS_LRCORNER);
    mvhline(x, y + 1, 0, w - 1);
    mvhline(h, y + 1, 0, w - 1);
    mvvline(x + 1, y, 0, h - 1);
    mvvline(x + 1, w, 0, h - 1);
}
