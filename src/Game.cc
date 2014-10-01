#include "Game.h"

Game::Game()
{
  player = GameObject(10, 10, 'P');
  map.Add(&player);
  last = now = clock();
}

Game::~Game()
{

}

void Game::Run()
{
  while (1)
  {
    now = clock();
    timediff = ((float)(now - last)) / CLOCKS_PER_SEC;
    if (timediff >= 0.05f)
    {
      Update();
      Draw();
      last = clock();
    }
  }
}

void Game::Update()
{
  map.Update();
}

void Game::Draw()
{
  gui.Draw(&map);
  input.Update();
}
