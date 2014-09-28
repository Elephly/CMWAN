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
    bool Update(bool force);

  private:
    string display;
};

#endif
