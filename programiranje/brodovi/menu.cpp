/*
 *
 * Menu
 */

#include "main.h"
#include "menu.h"

Menu::Menu(float x, float y, float width, float height)
{
    this->x = x;
    this->y = y;
    this->width = width;
    this->height = height;
    this->position = 1;
    this->elementWidth = 200;
    this->elementHeight = 50;
    // ToDo: Load Texture
}

void Menu::render(void)
{
    int i;
    int x, y, width, height;

    // Draw dialog
    glColor4ub(0, 255, 0, 255);
    glBegin(GL_QUADS);
        glVertex2f(this->x, this->y);
        glVertex2f(this->x + this->width, this->y);
        glVertex2f(this->x + this->width, this->y + this->height);
        glVertex2f(this->x, this->y + this->height);
    glEnd();

    // Draw menu choices
    width = this->elementWidth;
    height = this->elementHeight;
    x = this->x + (this->width / 2) - (width / 2);
    y = this->y + (this->height / (NUM_OF_ELEMENTS + 5)) - height / 2;
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        glColor4ub(255, 255, 255, 255);
        if(position == NUM_OF_ELEMENTS - i)
            glColor4ub(0, 0, 255, 255);
        glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + width, y);
            glVertex2f(x + width, y + height);
            glVertex2f(x, y + height);
        glEnd();
        y += height + 25;
    }
}

/*
void Menu::setActivate(int index)
{
    this->position = index;
}
*/

void Menu::moveUp(void)
{
    if(position <= 1)
        position = NUM_OF_ELEMENTS;
    else
        position--;
}

void Menu::moveDown(void)
{
    if(position >= NUM_OF_ELEMENTS)
        position = 1;
    else
        position++;
}

int Menu::events(SDL_Event event)
{
    while(SDL_PollEvent(&event))
    {
        /*
        if(event.type == SDL_KEYUP && event.key.keysym.sym == SDLK_ESCAPE)
            return MENU_EXIT;
        */

        switch(event.type)
        {
            case SDL_KEYDOWN:
                switch(event.key.keysym.sym)
                {
                    case SDLK_UP:
                        this->moveUp();
                        break;
                    case SDLK_DOWN:
                        this->moveDown();
                        break;
                    case SDLK_RETURN:
                        return this->position;
                        break;
                }
                break;
            case SDL_KEYUP:
                break;
        }
    }

    return 0;
}
