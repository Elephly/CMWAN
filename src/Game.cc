#include "Game.h"

Game::Game()
{
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

}

void Game::Draw()
{
  gui.Draw();
}
