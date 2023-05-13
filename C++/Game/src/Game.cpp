#include <Headers/Game.hpp>
#include <Headers/Grid.hpp>

Block Grid_Stat[3][3] = {{Block::Empty, Block::Empty, Block::Empty},
                         {Block::Empty, Block::Empty, Block::Empty},
                         {Block::Empty, Block::Empty, Block::Empty}};

Game::Game(const char *title, int x, int y, int w, int h, Uint32 flags)
{
    SDL_Init(SDL_INIT_EVERYTHING);

    window = SDL_CreateWindow(title, x, y, w, h, flags);
    renderer = SDL_CreateRenderer(window, -1, 0);
}

SDL_Texture *Game::loadTexture(const char *filePath)
{
    SDL_Texture *tex = NULL;
    tex = IMG_LoadTexture(renderer, filePath);

    if (tex == NULL)
    {
        std::cout << "Texture couldn't be loaded." << filePath << std::endl
                  << "Error: " << SDL_GetError() << std::endl;
    }
    return tex;
}

void Game::render(SDL_Texture *tex, SDL_Rect *src, SDL_Rect *dst)
{
    SDL_RenderCopy(renderer, tex, src, dst);
}

void Game::run()
{
    display();
    clear();
}

void Game::display() { SDL_RenderPresent(renderer); }

void Game::clear() { SDL_RenderClear(renderer); }

void Game::cleanUp() { SDL_DestroyWindow(window); }

void Game::Render_Blocks()
{
    for (short row = 0; row < 3; row++)
    {
        SDL_Rect Shape_Loc = {200, 200, 0, row * 200};
        for (short col = 0; col < 3; col++)
        {
            if (Grid_Stat[row][col] == Block::O)
                Game::render(Game::O, &Shape_Loc, &Grd_Src);

            else if (Grid_Stat[row][col] == Block::X)
                Game::render(Game::X, &Shape_Loc, &Grd_Src);

            Shape_Loc.x += 200;
        }
    }
}

void mouseClicked( int x, int y)
{
    int indX = x / 200, indY = y / 200;
    if (Grid_Stat[indX][indY] != Block::Empty)
    {
        if (&Game::isO)
            Grid_Stat[indX][indY] = Block::O;
        else
            Grid_Stat[indX][indY] = Block::X;
        
    }
}