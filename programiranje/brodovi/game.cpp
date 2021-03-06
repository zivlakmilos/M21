/*
 *
 * Game
 */

#include "main.h"
#include "menu.h"
#include "map.h"
#include "game.h"

Game::Game(void)
{
    this->width = 500;
    this->height = 500;
    this->caption = "Brodovi     by ZI";
    this->isRunning = true;
    this->fps = 10;
    this->status = GAME_STATUS_MENU;
    this->type = 0;
    this->menu = new Menu((this->width / 2) - 125, (this->height / 2) - 150,
                250, 300);
}

Game::~Game(void)
{
    delete this->menu;
}

void Game::init(void)
{
    // initialize SDL
    SDL_Init(SDL_INIT_EVERYTHING);

    // Get OpenGL memory usage
    SDL_GL_SetAttribute(SDL_GL_RED_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_GREEN_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BLUE_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_ALPHA_SIZE, 8);
    SDL_GL_SetAttribute(SDL_GL_BUFFER_SIZE, 32);
    SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 16);
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);

     // Catption of window
     SDL_WM_SetCaption(this->caption, NULL);

     // size of window
     SDL_SetVideoMode(this->width, this->height, 32, SDL_OPENGL);

     // Specific the clear color
     glClearColor(0, 0, 0, 1);  // Black

     // What portion of the screen we will display
     glViewport(0, 0, this->width, this->height);

     // Shader model
     glShadeModel(GL_SMOOTH);

     // 2D rendering
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();

     // disable depth checking
     glDisable(GL_DEPTH_TEST);

     // Enable texture
     glEnable(GL_BLEND);
     glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    std::cout << "OpenGL is initialize\n";

    // Initialize texture
    // playr->loadTexture();
    //std::cout << "Texture is initialize\n";
}

void Game::events(SDL_Event event)
{
    while(SDL_PollEvent(&event))
    {
        if(event.type == SDL_QUIT)
            this->isRunning = false;
        if(event.type == SDL_KEYDOWN && event.key.keysym.sym == SDLK_ESCAPE)
            this->status = GAME_STATUS_MENU;

        switch(event.type)
        {
            case SDL_KEYDOWN:
                switch(event.key.keysym.sym)
                {
                    case SDLK_DOWN:
                        // test
                    break;
                }
            break;

            case SDL_KEYUP:
                switch(event.key.keysym.sym)
                {
                    case SDLK_DOWN:
                        //test
                    break;
                }
            break;
        }
    }
}

void Game::mainLoop(void)
{
    // Initialization
    this->init();

    // Main loop
    std::cout << "Main loop is started\n";
    while(isRunning)
    {
        /*
         * Hangler event
         */
        if(this->status == GAME_STATUS_PLAYING)
            this->events(this->event);
        else if(this->status == GAME_STATUS_MENU)
            /*
            switch(menu->events(event))
            {
                case MENU_EXIT:
                    this->isRunning = false;
                    break;
            }
            */
            this->type = menu->events(this->event);

        /*
         * Logic
         */
        if(this->status == GAME_STATUS_PLAYING)
        {
        } else if(this->status == GAME_STATUS_MENU)
        {
            /*
            switch(type)
            {
                case MENU_EXIT:
                      isRunning = false;
                      type = 0;
                      break;
                default:
                      status = GAME_STATUS_PLAYING;
            }*/
            if(this->type == MENU_EXIT)
            {
                this->isRunning = false;
                this->type = 0;
            } else if(type != 0)
                this->status = GAME_STATUS_PLAYING;
        }

        /*
         * Render
         */
        glClear(GL_COLOR_BUFFER_BIT);
        glPushMatrix();
        glOrtho(0, this->width, 0, this->height, -1, 1);

        if(this->status == GAME_STATUS_PLAYING)
        {
        } else if(this->status == GAME_STATUS_MENU)
        {
            menu->render();
        }

        glPopMatrix();
        SDL_GL_SwapBuffers();

        /*
         * Delay
         */
        SDL_Delay(fps / 1000);
    }

    std::cout<<"Main loop is ended\n";

    // Free
    //SDL_Quit();
}
