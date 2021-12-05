#include <iostream>
#include <SDL2/SDL.h>
#include "game.cpp"
game *gamee = nullptr;

int main(int argc, char *argv[])
{
    // SDL_Init(SDL_INIT_EVERYTHING);
    // SDL_Window *window = SDL_CreateWindow("title",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,600,400,SDL_WINDOW_SHOWN);
    // SDL_Renderer *renderer = SDL_CreateRenderer(window,-1,0);
    // SDL_SetRenderDrawColor(renderer,0,255,0,255);
    // SDL_RenderPresent(renderer);
    gamee = new game();
    gamee->init("zengame",600,400,false);
    while(gamee->running())
    {
        gamee->handleEvents();
        gamee->update();
        gamee->render();
    }
    gamee->clean();
    SDL_Delay(10000);
    return 0;
}