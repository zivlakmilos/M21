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
    x = (this->width / 2) - width;
    y = (this->height / (NUM_OF_ELEMENTS + 5)) - height;
    for(i = 0; i < NUM_OF_ELEMENTS; i++)
    {
        glColor4ub(255, 255, 255, 255);
        glBegin(GL_QUADS);
            glVertex2f(x, y);
            glVertex2f(x + width, y);
            glVertex2f(x + width, y + height);
            glVertex2f(x, y + height);
        glEnd();
        y += height + 5;
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
    if(position < 0)
        position = NUM_OF_ELEMENTS - 1;
    else
        position--;
}

void Menu::moveDown(void)
{
    if(position > NUM_OF_ELEMENTS - 1)
        position = 0;
    else
        position++;
}

int Menu::events(SDL_Event event)
{
    while(SDL_PollEvent(&event))
    {
        if(event.type == SDL_KEYUP && event.key.keysym.sym == SDLK_ESCAPE)
            return 1;

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
                }
                break;
            case SDL_KEYUP:
                break;
        }
    }

    return 0;
}
