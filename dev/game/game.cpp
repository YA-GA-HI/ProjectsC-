#include "game.hpp"
#include <iostream>
game::game()
{

};

void game::init(const char*title ,int width, int height, bool fullscreen)
{
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout<<"window started"<<std::endl;
        window = SDL_CreateWindow(title,SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,width,height,fullscreen);
        if(window)
        {
            renderer = SDL_CreateRenderer(window,-1,0);
            SDL_SetRenderDrawColor(renderer,255,255,255,255);
        }
        isRunning = true;
        std::cout<<"game started"<<std::endl;
    }else{
        isRunning = false;
        std::cout<<"game can not started"<<std::endl;
    }
}

void game::handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch(event.type)
    {
        case  SDL_QUIT :
            isRunning = false;
            break;
        default:
            break;
    }
}


void game::update()
{

}

void game::render()
{
    SDL_RenderClear(renderer);
    SDL_RenderPresent(renderer);
}

void game::clean()
{
    SDL_DestroyWindow(window);
    SDL_DestroyRenderer(renderer);
    SDL_Quit();
    std::cout<<"Game Cleaned"<<std::endl;
}