#ifndef GRID_H
#define GRID_H

#include <list>

#include "GameObject.h"

using namespace std;

class Grid
{
  public:
    Grid();
    ~Grid();
    void Add(GameObject*);
    void Update();

  private:
    list<GameObject*> objects;
};

#endif
