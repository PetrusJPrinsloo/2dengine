//
// Created by petrusprinsloo on 2021/01/13.
//

#ifndef INC_2D_ENGINE_GAME_H
#define INC_2D_ENGINE_GAME_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_ttf.h>

class Game {
private:
    bool isRunning;
    SDL_Window *window;
    SDL_Renderer *renderer;
public:
    Game();
    ~Game();
    bool IsRunning() const;
    void Initialize(int width, int height);
    void ProcessInput();
    void Update();
    void Render();
    void Destroy();
};

#endif //INC_2D_ENGINE_GAME_H
