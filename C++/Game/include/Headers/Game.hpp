#pragma once

#include <iostream>
#include <sdl2/SDL.h>
#include <sdl2/SDL_image.h>
#include <Headers/Grid.hpp>
enum class GameState
{
    PLAY,
    EXIT
};
class Game
{
public:
    SDL_Rect Grd_Src = {600, 600, 0, 0};
    void run();
    Game(const char *title, int x, int y, int w, int h, Uint32 flags);
    GameState gameState;
    SDL_Texture *loadTexture(const char *filePath);
    void render(SDL_Texture *tex, SDL_Rect *src, SDL_Rect *dst);
    void Render_Blocks();
    void initGrid(int &Grid_Stat);
    int screenWidth;
    int screenHeight;
    SDL_Texture *Grid;
    SDL_Texture *X;
    SDL_Texture *O;
bool isO = true;

private:
    void clear();
    void display();
    void cleanUp();
    SDL_Window *window;
    SDL_Renderer *renderer;
};
