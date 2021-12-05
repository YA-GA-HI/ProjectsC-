#ifndef game_hpp
#define game_hpp
#include <iostream>
#include <SDL2/SDL.h>
#endif

class game{
public:
    game();
    void init(const char*title ,int width, int height, bool fullscreen);
    void handleEvents();
    void update();
    void render();
    void clean();
    bool running(){return isRunning;};
private:
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
};