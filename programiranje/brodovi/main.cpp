/*
 *
 * main
 */

#include "main.h"
#include "game.h"
#include "menu.h"

int main(int argc, char *argv[])
{
    Game *game = new Game();
    game->mainLoop();
    delete game;
    return 0;
}
