#include "src/include/SDL2/SDL.h"
#include "src/include/SDL2/SDL_events.h"
#include "src/include/SDL2/SDL_video.h"
#include <stdbool.h>
#include <stdio.h>

const int WIDTH = 800, HEIGHT = 600;

int main(int argc, char *argv[]) {
  SDL_Init(SDL_INIT_EVERYTHING);

  SDL_Window *window = SDL_CreateWindow("Window", SDL_WINDOWPOS_UNDEFINED,
                                        SDL_WINDOWPOS_UNDEFINED, WIDTH, HEIGHT,
                                        SDL_WINDOW_ALLOW_HIGHDPI);
  if (window == NULL) {
    printf("Could not create window");
    return 1;
  }

  SDL_Event windowEvent;

  while (true) {
    if (SDL_PollEvent(&windowEvent)) {
      if (SDL_QUIT == windowEvent.type) {
        break;
      }
    }
  }

  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
