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
  thread inputThread(&Game::ManageInput, this);
  thread gameThread(&Game::GameRun, this);
  inputThread.join();
  gameThread.join();
}

void Game::ManageInput()
{
  while (1)
  {
    
  }
}

void Game::GameRun()
{
  while (1)
  {
    now = clock();
    timediff = ((float)(now - last)) / CLOCKS_PER_SEC;
    if (timediff >= 0.2f)
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
  gui.Draw(&map);
}
