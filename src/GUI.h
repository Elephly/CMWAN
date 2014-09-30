#ifndef GUI_H
#define GUI_H

#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class GUI
{
  public:
    GUI();
    ~GUI();
    void Draw();

  private:
    string display;
};

#endif
