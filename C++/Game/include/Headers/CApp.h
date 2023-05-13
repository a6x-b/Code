#ifndef _CAPP_H_
    #define _CAPP_H_
 
#include <SDL.h>
 
#include "CEvent.h"
#include "CSurface.h"
 
class CApp : public CEvent {
    private:
        bool            Running;
 
        SDL_Surface*    Surf_Display;
 
    private:
        SDL_Surface*    Surf_Grid;
 
        SDL_Surface*    Surf_X;
        SDL_Surface*    Surf_O;
 
    private:
        int        Grid[9];
 
    public:
        CApp();
 
        int OnExecute();
 
    public:
    void Reset();
        bool OnInit();
 
        void OnEvent(SDL_Event* Event);
 
            void OnExit();
 
        void OnLoop();
 
        void OnRender();
 
        void OnCleanup();
};
 
#endif
enum {
    GRID_TYPE_NONE = 0,
    GRID_TYPE_X,
    GRID_TYPE_O
};