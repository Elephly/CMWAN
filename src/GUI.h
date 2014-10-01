#ifndef GUI_H
#define GUI_H

#include <iostream>
#include <string>
#include <stdlib.h>

#include "Grid.h"

using namespace std;

class GUI
{
  public:
    GUI();
    ~GUI();
    void Draw(Grid*);

  private:
    string display;
};

#endif
