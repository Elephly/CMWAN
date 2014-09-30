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
    if (gui.Update(timediff >= 0.05f))
    {
      last = clock();
    }
  }
}

void Game::Update()
{

}

void Game::Draw()
{

}
