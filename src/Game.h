#ifndef GAME_H
#define GAME_H

#include <ctime>

#include "GameObject.h"
#include "Grid.h"
#include "GUI.h"

class Game
{
  public:
    Game();
    ~Game();
    void Run();
  private:
    void Update();
    void Draw();

    GameObject player;
    Grid map;
    GUI gui;
    clock_t last;
    clock_t now;
    float timediff;
};

#endif
