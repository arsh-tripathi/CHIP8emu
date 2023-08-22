#include "include/SDL2/SDL.h"
#include <stdbool.h>
#include <stdio.h>

const int WIDTH = 800, HEIGHT = 600;
const char *TITLE = "Emulator";

int main(int argc, char *argv[])
{

    // Initializing

    SDL_Init(SDL_INIT_EVERYTHING);

    SDL_Window *window = SDL_CreateWindow(TITLE, SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT,
                                          SDL_WINDOW_ALLOW_HIGHDPI);

    if (window == NULL)
    {
        printf("Could not create window");
        return 1;
    }

    SDL_Event windowEvent;

    while (true)
    {
        if (SDL_PollEvent(&windowEvent))
        {
            if (SDL_QUIT == windowEvent.type)
            {
                break;
            }
        }
    }

    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;
}
