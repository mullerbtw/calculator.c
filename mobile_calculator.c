#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

// phone screen resolution
const int kScreenWidth = 1080;
const int kScreenHeight = 2340;
const int kButtonQuant = 19;
const char kSymbols[kButtonQuant] = {
  "C", "%", "÷",
  "7", "8", "9", "×",
  "4", "5", "6", "-",
  "1", "2", "3", "+",
  "0", ".", "D", "="
};
const int kButtonWidth = 250;
const int kButtonHeight = 320;
SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
// white text
SDL_Color text_color = {255, 255, 255, 1};

int main() {
  
  
}

void InitializeSDL() {
  window = SDL_CreateWindow("calculator", SDL_WINDOWPOS_CENTERED,
                                                     SDL_WINDOWPOS_CENTERED, kScreenWidth,
                                                     kScreenHeight, SDL_WINDOW_SHOWN);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 1); // black background
}