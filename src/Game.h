#ifndef GAME_H
#define GAME_H

#include <ctime>
#include <thread>

#include "GameObject.h"
#include "Grid.h"
#include "GUI.h"
#include "Input.h"

using namespace std;

class Game
{
  public:
    Game();
    ~Game();
    void Run();
  private:
    void ManageInput();
    void GameRun();
    void Update();
    void Draw();

    GameObject player;
    Grid map;
    GUI gui;
    Input input;
    clock_t last;
    clock_t now;
    float timediff;
};

#endif
