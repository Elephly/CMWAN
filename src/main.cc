#include <iostream>

using namespace std;

#include <stdlib.h>

#include "GUI.h"

int main()
{
  system("resize -s 40 100");
  GUI gui;
  while (1)
  {
    gui.Update();
  }
  return 0;
}
