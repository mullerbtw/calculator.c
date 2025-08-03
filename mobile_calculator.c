#include <stdio.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

typedef struct {
  const char kSymbols[kButtonQuant] = {
  "C", "%", "÷",
  "7", "8", "9", "×",
  "4", "5", "6", "-",
  "1", "2", "3", "+",
  "0", ".", "D", "="
  };
  SDL_Rect buttons[kButtonQuant];
} ButtonsStruct;
// phone screen resolution
const int kScreenWidth = 1080;
const int kScreenHeight = 2340;
const int kButtonQuant = 19;

const int kButtonWidth = 250;
const int kButtonHeight = 320;

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
SDL_Color text_color = {255, 255, 255, 1}; // text color (white)

int main() {
  
}

void InitializeSDL() {
  window = SDL_CreateWindow("calculator", SDL_WINDOWPOS_CENTERED,
                            SDL_WINDOWPOS_CENTERED, kScreenWidth,
                            kScreenHeight, SDL_WINDOW_SHOWN);
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, 1); // background color (black)
}

void CloseSDL() {
  SDL_DestroyWindow(window);
  SDL_DestroyRenderer(renderer);
  window = NULL;
  renderer = NULL;
  SDL_Quit();
}

void RenderButtons(SDL_Renderer *renderer, ButtonsStruct* buttons) {
  
  
}