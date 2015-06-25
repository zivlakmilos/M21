/*
 *
 * main
 */

#include "main.h"
#include "menu.h"
#include "game.h"

int main(int argc, char *argv[])
{
    Game *game = new Game();
    game->mainLoop();
    delete game;
    SDL_Quit();
    return 0;
}
